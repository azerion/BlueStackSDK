// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "BlueStackGMAAdapter",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "BlueStackGMAAdapter", targets: ["BlueStackGMAAdapterTarget"])
    ],
    dependencies: [
        .package(url: "https://github.com/azerion/BlueStackSDK", from: "4.4.9")
        // .package(name: "BlueStack-SDK", path: "../../BlueStack-SDK"),
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads", exact: "11.2.0")
    ],
    targets: [
        .binaryTarget(
            name: "BlueStackGMAAdapter",
            path: "BlueStackGMAAdapter.xcframework"
        ),
        .target(
            name: "BlueStackGMAAdapterTarget",
            dependencies: [
                "BlueStackGMAAdapter",
                "BlueStack-SDK",
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads")
            ],
            path: "BlueStackGMAAdapterWrapper",
            linkerSettings: [.linkedFramework("JavaScriptCore")]
        )
    ]
)
