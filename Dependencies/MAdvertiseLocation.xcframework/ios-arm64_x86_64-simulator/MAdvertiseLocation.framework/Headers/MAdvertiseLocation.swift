//
//  MAdvertiseLocation.swift
//  MAdvertiseLocation
//
//  Created by htrimech MacBook Pro on 08/10/2018.
//  Copyright © 2018 MAdvertise. All rights reserved.
//

import UIKit
@objc
public class BlueStackLocation: NSObject {
    
    @objc
    static var appId:String? = nil
    @objc
    static var consentFlag :String? = "0"
    @objc
    var launchOptions : [UIApplication.LaunchOptionsKey: Any]? = nil
    @objc
    static var modeDebugIsEnabled:Bool = false
    @objc
    static let madvertiseLocationManagerShared : MadvertiseLocationManager = MadvertiseLocationManager.shared
    
    @objc
    init(madvertiseBuilder:MadvertiseBuilder) {
        BlueStackLocation.appId = madvertiseBuilder.appId
        BlueStackLocation.consentFlag = madvertiseBuilder.consentFlag

        launchOptions = madvertiseBuilder.launchOptions
    }
    
    /**
     Start the location service. Mandatory to collect user locations.
     */
    @objc
    public class func start(madvertiseLocation:BlueStackLocation){
        if BlueStackLocation.appId == nil{
            MadvertiseLocationUtility.logErrorMessage("App ID is null")
            return
        }
        madvertiseLocationManagerShared.start(madvertiseLocation: madvertiseLocation)

    }
    @objc
    public class func stop() {
        MadvertiseLocationUtility.logErrorMessage("stop madvertiseLocation")
        madvertiseLocationManagerShared.stopMadvertiseLocations()
    }
    
    /**
     Request the location authorization to the user if needed.
     */
    @objc
    public class func madvertiseLocationRequestAuthorization() {
        if BlueStackLocation.appId == nil{
            MadvertiseLocationUtility.logErrorMessage("App ID is null")
            return
        }
        MadvertiseLocationUtility.logErrorMessage("madvertiseLocationRequestAuthorization")
        madvertiseLocationManagerShared.madvertiseLocationRequestAuthorization()
    }

    /**
     Enable the debug mode for the MadvertiseLocation SDK. This mode change some SDK paramters,
     for exemple the configuration is fetch more frequently, dialogs are displayed at
     each application start, etc...
     This mode should not be used in a production environement. Be careful when enable it.
     */
    @objc
    public class func debugMode(enabled:Bool)  {
        modeDebugIsEnabled = enabled
    }
    /**
     get version  to the user if needed.
     */
    @objc
    public class  func getVersion() -> String {
        return LocationConstants.LocationSDKInfos.VERSION
    }
    /**
     get version  to the user if needed.
     */
    @objc
    public class  func getAppID() -> String {
        if BlueStackLocation.appId == nil  {
            MadvertiseLocationUtility.logErrorMessage("App ID is null")
            return ""
        }

        return  BlueStackLocation.appId!
    }
  
}
