// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BlueStackSDK",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "BlueStackSDK",
            targets: ["BlueStackSDKTarget"]
        )
    ],
    targets: [
        .target(
            name: "BlueStackSDKTarget",
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
        .binaryTarget(name: "BlueStackSDK", path: "BlueStackSDK.xcframework")
    ]
)
