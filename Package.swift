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
            name: "BluestackAmazonPublisherServicesAdapter",
            targets: ["BluestackAmazonPublisherServicesAdapterTarget"]),
        .library(
            name: "BlueStackLocationAdapter",
            targets: ["BlueStackLocationAdapterTarget"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "BluestackAmazonPublisherServicesAdapterTarget",
                dependencies: [
                    .target(name: "BluestackAmazonPublisherServicesAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "DTBiOSSDK", condition: .when(platforms: [.iOS])),
                ],
                path: "BluestackAmazonPublisherServicesAdapterWrapper"
        ),
        
        .target(name: "BlueStackLocationAdapterTarget",
                dependencies: [
                    .target(name: "BlueStackLocationAdapter", condition: .when(platforms: [.iOS])),
                    .target(name: "MAdvertiseLocation", condition: .when(platforms: [.iOS])),
                ],
                path: "BlueStackLocationAdapterWrapper"
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
        //location
        .binaryTarget(name: "BlueStackLocationAdapter", path: "BlueStackLocationAdapter.xcframework"),
        .binaryTarget(name: "MAdvertiseLocation", path: "Dependencies/MAdvertiseLocation.xcframework"),
        //amazon
        .binaryTarget(name: "BluestackAmazonPublisherServicesAdapter", path: "BluestackAmazonPublisherServicesAdapter.xcframework"),
        .binaryTarget(name: "DTBiOSSDK", path: "Dependencies/DTBiOSSDK.xcframework")
    ]
)
