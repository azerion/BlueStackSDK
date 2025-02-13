BlueStack Mediation Adapers for iOS platform

# BlueStackAppLovinAdapter

Using BlueStackAppLovinAdapter you will be able to show BlueStack ads through AppLovin MAX SDK. 

## Supported ad formats
- Banner
- MREC
- Interstitial
- Rewarded
- NativeAd

## Requirements
- Xcode 14.0
- iOS: 12.2

## Integrate BlueStackAppLovinAdapter in your application project

### Using Cocoapods
In the `Podfile` of your application project add `BlueStackAppLovinAdapter` dependency

```shell
pod 'BlueStackAppLovinAdapter'
```
and run `pod install --repo-update` in you terminal.

### Using Swift Package Manager (SPM)

- Go to the project settings and select `Package Dependencies`
- Search for https://github.com/azerion/bluestack_mediation_adapter_iOS.git and add `BlueStackAppLovinAdapter` to your target.

**Note:** Add `-ObjC` to you `Other Linker Flags` of target build settings. 
