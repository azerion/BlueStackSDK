// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BlueStackLevelPlayAdapter",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "BlueStackLevelPlayAdapter",
            targets: ["BlueStackLevelPlayAdapterTarget"]
        )
    ],
    dependencies: [
        .package(
            name: "BlueStackSDK",
            path: "BlueStackSDK"
        ),
        .package(
            name: "IronSource",
            path: "IronSource"
        )
    ],
    targets: [
        .target(
            name: "BlueStackLevelPlayAdapterTarget",
            dependencies: [
                .product(name: "BlueStackSDK", package: "BlueStackSDK", condition: .when(platforms: [.iOS])),
                .product(name: "IronSource", package: "IronSource", condition: .when(platforms: [.iOS])),
                .target(name: "BlueStackLevelPlayAdapter", condition: .when(platforms: [.iOS]))
            ],
            path: "BlueStackLevelPlayAdapterWrapper"
        ),
        .binaryTarget(
            name: "BlueStackLevelPlayAdapter",
            path: "BlueStackLevelPlayAdapter.xcframework"
        )
    ]
)