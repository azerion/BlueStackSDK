Pod::Spec.new do |spec|

    spec.authors = 'Azerion'
    spec.name = 'BlueStackAppLovinAdapter'
    spec.version = '4.4.8.2'
    spec.static_framework = true
    spec.license = 'MIT'
    spec.platform = :ios, '12.2'
    spec.summary = 'BlueStack adapter used for mediation with the AppLovin MAX SDK'
    spec.homepage = "https://developers.bluestack.app/"
    spec.swift_version = '5'
    spec.source_files = ["BlueStackAppLovinAdapter/*.{h,m,swift}"]
  
    # spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#BlueStackAppLovinAdapter-v{spec.version}" }
    spec.source = { :path => '.' }
    spec.documentation_url = 'https://developers.bluestack.app/ios/mediation/secondary/applovin'
    spec.vendored_frameworks = "BlueStackAppLovinAdapter.xcframework"
    spec.ios.deployment_target = '12.2'
  
    spec.dependency 'BlueStack-SDK', '>= 4.4.8'
    spec.dependency 'AppLovinSDK', '12.6.1'
    
  end
    
  