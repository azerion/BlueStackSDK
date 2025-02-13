// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "BluestackAmazonPublisherServicesAdapter",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "BluestackAmazonPublisherServicesAdapter", targets: ["BluestackAmazonPublisherServicesAdapter", "BluestackAmazonPublisherServicesAdapterWrapper"]),
    ],
    dependencies: [
        // .package(url: "https://github.com/azerion/BlueStackSDK", from: "1.0.0")
        .package(path: "../../BlueStack-SDK"),
    ],
    targets: [
        .binaryTarget(
            name: "BluestackAmazonPublisherServicesAdapter",
            path: "BluestackAmazonPublisherServicesAdapter.xcframework"
        ),
        .target(
            name: "BluestackAmazonPublisherServicesAdapterWrapper",
            dependencies: [
                "BluestackAmazonPublisherServicesAdapter",
                .product(name: "BlueStackSDK", package: "BlueStackSDK")
            ]
        )
    ]
)
