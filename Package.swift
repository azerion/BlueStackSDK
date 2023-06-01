// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BlueStackSDK",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "BlueStackSDK",
            targets: ["BlueStackSDKTarget"]),
        .library(
            name: "BlueStackDFPAdapter",
            targets: ["BlueStackDFPAdapterTarget"]),
        .library(
            name: "BlueStackSASAdapter",
            targets: ["BlueStackSASAdapterTarget"]),
        .library(
            name: "BlueStackFacebookAdapter",
            targets: ["BlueStackFacebookAdapterTarget"]),
        .library(
            name: "BluestackAmazonPublisherServicesAdapter",
            targets: ["BluestackAmazonPublisherServicesAdapterTarget"]),
        .library(
            name: "BlueStackAdColonyAdapter",
            targets: ["BlueStackAdColonyAdapterTarget"]),
        .library(
            name: "BluestackCriteoAdapter",
            targets: ["BluestackCriteoAdapterTarget"]),
        .library(
            name: "BlueStackLocationAdapter",
            targets: ["BlueStackLocationAdapterTarget"]),
        .library(
            name: "BlueStackImproveAdapter",
            targets: ["BlueStackImproveAdapterTarget"]),
        .library(
            name: "BlueStackOguryAdapter",
            targets: ["BlueStackOguryAdapterTarget"]),
    ],
    dependencies: [
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads", .upToNextMajor(from: "9.13.0")),
        .package(url: "https://github.com/azerion/improvedigital-sdk-ios", .upToNextMajor(from: "2.0.2")),
    ],
    targets: [
        .target(name: "BlueStackDFPAdapterTarget",
                dependencies: [
                    .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                    .target(name: "BlueStackDFPAdapter", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackDFPAdapterWrapper",
                linkerSettings: [.linkedFramework("JavaScriptCore")]
        ),
        
        .target(name: "BlueStackSASAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackSASAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "SASDisplayKit", condition: .when(platforms: [.iOS])),
                    .target(name: "SCSCoreKit", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackSASAdapterWrapper"
        ),
        
        .target(name: "BlueStackFacebookAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackFacebookAdapter",condition: .when(platforms: [.iOS])),
                    .target(name: "FBAudienceNetwork",condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackFacebookAdapterWrapper"
        ),
        
        .target(name: "BluestackAmazonPublisherServicesAdapterTarget",
                dependencies: [
                    .target(name: "BluestackAmazonPublisherServicesAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "DTBiOSSDK", condition: .when(platforms: [.iOS])),
                ],
                path: "BluestackAmazonPublisherServicesAdapterWrapper"
        ),
        
        .target(name: "BlueStackAdColonyAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackAdColonyAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "AdColony", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackAdColonyAdapterWrapper"
        ),
        
        .target(name: "BluestackCriteoAdapterTarget",
                dependencies: [
                    .target(name: "BluestackCriteoAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "CriteoPublisherSdk", condition: .when(platforms: [.iOS])),
                ],
                path: "BluestackCriteoAdapterWrapper"
        ),
        
        .target(name: "BlueStackLocationAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackLocationAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "MAdvertiseLocation", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackLocationAdapterWrapper"
        ),
        
        .target(name: "BlueStackImproveAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackImproveAdapter", condition: .when(platforms: [.iOS])),
                    .product(name: "ImproveDigital", package: "improvedigital-sdk-ios"),
                ],
                path: "BlueStackImproveAdapterWrapper"
        ),
        
        .target(name: "BlueStackOguryAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackOguryAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "OguryCore", condition: .when(platforms: [.iOS])),
                    .target(name: "OgurySdk", condition: .when(platforms: [.iOS])),
                    .target(name: "OguryAds", condition: .when(platforms: [.iOS])),
                    .target(name: "OguryChoiceManager", condition: .when(platforms: [.iOS])),
                    .target(name: "OMSDK_Ogury", condition: .when(platforms: [.iOS])),

                ],
                path: "BlueStackOguryAdapterWrapper"
        ),
        
        .target(name: "BlueStackSDKTarget",
                dependencies: [
                    .target(name: "BlueStackSDK", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackSDKWrapper",
                exclude: ["../BlueStack-SDK.podspec", "../README.md"],
                resources: [.copy("Resources/BlueStackSDKResources.bundle")],
                linkerSettings: [
                    .linkedFramework("AVFoundation"),
                    .linkedFramework("Accelerate"),
                    .linkedFramework("CFNetwork"),
                    .linkedFramework("CoreGraphics"),
                    .linkedFramework("CoreMedia"),
                    .linkedFramework("CoreTelephony"),
                    .linkedFramework("CoreVideo"),
                    .linkedFramework("MediaPlayer"),
                    .linkedFramework("MessageUI"),
                    .linkedFramework("MobileCoreServices"),
                    .linkedFramework("QuartzCore"),
                    .linkedFramework("Security"),
                    .linkedFramework("StoreKit"),
                    .linkedFramework("SystemConfiguration"),
                    .linkedLibrary("ObjC"),
                    .linkedLibrary("c++"),
                    .linkedLibrary("z"),
                    .linkedLibrary("sqlite3")
                ]
               ),
        //core
        .binaryTarget(name: "BlueStackSDK", path: "BlueStackSDK.xcframework"),
        //smart
        .binaryTarget(name: "BlueStackSASAdapter", path: "BlueStackSASAdapter.xcframework"),
        .binaryTarget(name: "SASDisplayKit", path: "Dependencies/SASDisplayKit.xcframework"),
        .binaryTarget(name: "SCSCoreKit", path: "Dependencies/SCSCoreKit.xcframework"),
        //adcolony
        .binaryTarget(name: "BlueStackAdColonyAdapter", path: "BlueStackAdColonyAdapter.xcframework"),
        .binaryTarget(name: "AdColony", path: "Dependencies/AdColony.xcframework"),
        //criteo
        .binaryTarget(name: "BluestackCriteoAdapter", path: "BluestackCriteoAdapter.xcframework"),
        .binaryTarget(name: "CriteoPublisherSdk", path: "Dependencies/CriteoPublisherSdk.xcframework"),
        //dfp
        .binaryTarget(name: "BlueStackDFPAdapter", path: "BlueStackDFPAdapter.xcframework"),
        //fb
        .binaryTarget(name: "BlueStackFacebookAdapter", path: "BlueStackFacebookAdapter.xcframework"),
        .binaryTarget(name: "FBAudienceNetwork", path: "Dependencies/FBAudienceNetwork.xcframework"),
        //location
        .binaryTarget(name: "BlueStackLocationAdapter", path: "BlueStackLocationAdapter.xcframework"),
        .binaryTarget(name: "MAdvertiseLocation", path: "Dependencies/MAdvertiseLocation.xcframework"),
        //ogury
        .binaryTarget(name: "BlueStackOguryAdapter", path: "BlueStackOguryAdapter.xcframework"),
        .binaryTarget(name: "OguryCore", path: "Dependencies/OguryCore.xcframework"),
        .binaryTarget(name: "OgurySdk", path: "Dependencies/OgurySdk.xcframework"),
        .binaryTarget(name: "OguryAds", path: "Dependencies/OguryAds.xcframework"),
        .binaryTarget(name: "OguryChoiceManager", path: "Dependencies/OguryChoiceManager.xcframework"),
        .binaryTarget(name: "OMSDK_Ogury", path: "Dependencies/OMSDK_Ogury.xcframework"),
        //amazon
        .binaryTarget(name: "BluestackAmazonPublisherServicesAdapter", path: "BluestackAmazonPublisherServicesAdapter.xcframework"),
        .binaryTarget(name: "DTBiOSSDK", path: "Dependencies/DTBiOSSDK.xcframework"),
       //Improve
        .binaryTarget(name: "BlueStackImproveAdapter", path: "BlueStackImproveAdapter.xcframework")
    ]
)
