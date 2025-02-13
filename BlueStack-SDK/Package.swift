// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "BlueStack-SDK",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "BlueStack-SDK",
            targets: ["BlueStack-SDKTarget"]
        ),
        // .library(
        //     name: "BlueStackGMAAdapter",
        //     targets: ["BlueStackGMAAdapterTarget"]
        // )
    ],
    dependencies: [
        // .package(name: "BlueStackGMAAdapter",path: "../primary-mediations/BlueStackGMAAdapter")
    ],
    targets: [
        .binaryTarget(
            name: "BlueStack-SDK",
            path: "BlueStack-SDK.xcframework"
        ),
        .target(
            name: "BlueStack-SDKTarget",
            dependencies: [
                .target(name: "BlueStack-SDK", condition: .when(platforms: [.iOS]))
                // .product(name: "BlueStackGMAAdapter", package: "BlueStackGMAAdapter")
            ],
            path: "BlueStack-SDKWrapper",
            exclude: ["../BlueStack-SDK.podspec", "../changelog.md"],
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
        // .target(name: "BlueStackGMAAdapterTarget",
        //     dependencies: [
        //         "BlueStackGMAAdapter"
        //     ]
        // )
    ]
)
