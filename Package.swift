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
            name: "BlueStackGMAAdapter",
            targets: ["BlueStackGMAAdapterTarget"]),
        .library(
            name: "BlueStackSASAdapter",
            targets: ["BlueStackSASAdapterTarget"]),
        .library(
            name: "BlueStackSASBiddingAdapter",
            targets: ["BlueStackSASBiddingAdapterTarget"]),
        .library(
            name: "BluestackAmazonPublisherServicesAdapter",
            targets: ["BluestackAmazonPublisherServicesAdapterTarget"]),
        .library(
            name: "BlueStackAdColonyAdapter",
            targets: ["BlueStackAdColonyAdapterTarget"]),
        .library(
            name: "BlueStackLocationAdapter",
            targets: ["BlueStackLocationAdapterTarget"]),
        .library(
            name: "BlueStackOguryAdapter",
            targets: ["BlueStackOguryAdapterTarget"]),
    ],
    dependencies: [
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads", exact: "11.2.0"),
    ],
    targets: [
        .target(name: "BlueStackGMAAdapterTarget",
                dependencies: [
                    .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                    .target(name: "BlueStackGMAAdapter", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackGMAAdapterWrapper",
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
        
            .target(name: "BlueStackSASBiddingAdapterTarget",
                    dependencies: [
                        .target(name: "BlueStackSASBiddingAdapter", condition: .when(platforms: [.iOS])),
                        .target(name: "SASDisplayKit", condition: .when(platforms: [.iOS])),
                        .target(name: "SCSCoreKit", condition: .when(platforms: [.iOS])),
                    ],
                    path: "BlueStackSASBiddingAdapterWrapper"
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
        
        .target(name: "BlueStackLocationAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackLocationAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "MAdvertiseLocation", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackLocationAdapterWrapper"
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
                resources: [
                    .process("Resources/omsdk-v1.js"),
                    .process("Resources/synccoreBluestack.js"),
                    .process("Resources/PrivacyInfo.xcprivacy")
                ],
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
        .binaryTarget(name: "BlueStackSASBiddingAdapter", path: "BlueStackSASBiddingAdapter.xcframework"),
        .binaryTarget(name: "SASDisplayKit", path: "Dependencies/SASDisplayKit.xcframework"),
        .binaryTarget(name: "SCSCoreKit", path: "Dependencies/SCSCoreKit.xcframework"),
        //adcolony
        .binaryTarget(name: "BlueStackAdColonyAdapter", path: "BlueStackAdColonyAdapter.xcframework"),
        .binaryTarget(name: "AdColony", path: "Dependencies/AdColony.xcframework"),
        //GMA
        .binaryTarget(name: "BlueStackGMAAdapter", path: "BlueStackGMAAdapter.xcframework"),
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
        .binaryTarget(name: "DTBiOSSDK", path: "Dependencies/DTBiOSSDK.xcframework")
    ]
)
