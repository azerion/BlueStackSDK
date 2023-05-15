"use strict";
var SyncCore;
(function (SyncCore) {
    var ipadOS = /^(?=.*macintosh)^(?=.*intel mac os x).*/i.test(navigator.userAgent) &&
        ('ontouchstart' in window || navigator.maxTouchPoints > 0);
    var iOS = (/iPad|iPhone|iPod/.test(navigator.userAgent) && !window.MSStream) || ipadOS;
    var callbacksList = {};
    function execNative(method, args, success, error, persistentCallback) {
        var callbacks = { success: {}, error: {}, persistent: false };
        if (success) {
            callbacks.success = success;
        }
        if (error) {
            callbacks.error = error;
        }
        if (persistentCallback) {
            callbacks.persistent = true;
        }
        var id = '-1';
        if (success || error) {
            id = new Date().getTime().toString();
            callbacksList[id.toString()] = callbacks;
        }
        var json = {};
        if (args) {
            json.args = args;
        }
        json.method = method;
        if (id !== '-1') {
            json.callbackId = id;
        }
        if (iOS) {
            ;
            window.webkit.messageHandlers.SyncCoreNativeCall.postMessage(JSON.stringify(json));
        }
        else {
            ;
            window.SyncCoreNativeCall.exec(JSON.stringify(json));
        }
    }
    SyncCore.execNative = execNative;
    function nativeCallback(callbackId, isInError, args) {
        var _a, _b;
        if (callbacksList[callbackId.toString()]) {
            if (isInError) {
                callbacksList[callbackId.toString()].error && (_a = callbacksList[callbackId.toString()]).error.apply(_a, args);
            }
            else {
                callbacksList[callbackId.toString()].success && (_b = callbacksList[callbackId.toString()]).success.apply(_b, args);
            }
            if (!callbacksList[callbackId.toString()].persistent) {
                delete callbacksList[callbackId.toString()];
            }
        }
        else {
            console.error('No callback found with id', callbackId);
        }
    }
    SyncCore.nativeCallback = nativeCallback;
    function open(type, url) {
        execNative('open', [type, url]);
    }
    SyncCore.open = open;
    function show(success, error) {
        execNative('show', undefined, success, error);
    }
    SyncCore.show = show;
    function hide(success, error) {
        execNative('hide', undefined, success, error);
    }
    SyncCore.hide = hide;
    function log(str) {
        execNative('log', [str]);
    }
    SyncCore.log = log;
    function openApp(url, success, error) {
        execNative('openApp', [url], success, error);
    }
    SyncCore.openApp = openApp;
    function getRequest(url, success, error) {
        execNative('httpRequest', ['GET', url], success, error);
    }
    SyncCore.getRequest = getRequest;
    function postRequest(url, body, success, error) {
        execNative('httpRequest', ['POST', url, body], success, error);
    }
    SyncCore.postRequest = postRequest;
    function close() {
        execNative('close');
    }
    SyncCore.close = close;
    function publish(event, success, error) {
        execNative('publish', [event], success, error);
    }
    SyncCore.publish = publish;
    function resize(left, top, width, height, success, error) {
        execNative('resize', [left, top, width, height], success, error);
    }
    SyncCore.resize = resize;
    function screenSize(success, error) {
        execNative('screenSize', undefined, success, error);
    }
    SyncCore.screenSize = screenSize;
    function currentPosition(success, error) {
        execNative('currentPosition', undefined, success, error);
    }
    SyncCore.currentPosition = currentPosition;
    function startOrientationChecking(success, error) {
        execNative('startOrientationChecking', undefined, success, error, true);
    }
    SyncCore.startOrientationChecking = startOrientationChecking;
})(SyncCore || (SyncCore = {}));
