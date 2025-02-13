Pod::Spec.new do |spec|

  spec.authors = 'Azerion'
  spec.name = 'BlueStackDFPMediationAdapter'
  spec.version = '4.4.8.1'
  spec.static_framework = true
  spec.license = 'MIT'
  spec.platform = :ios, '12.2'
  spec.summary = 'BlueStack adapter used for mediation with the Google Mobile Ad Manager'
  spec.homepage = "https://developers.bluestack.app/"
  spec.swift_version = '5'
  spec.source_files = ["BlueStackDFPMediationAdapter/*.{h,m,swift}"]

  # spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#BlueStackDFPMediationAdapter-v{spec.version}" }
  spec.source = { :path => '.' }
  spec.documentation_url = 'https://developers.bluestack.app/ios/mediation/secondary/gma'
  spec.vendored_frameworks = "BlueStackDFPMediationAdapter.xcframework"
  spec.ios.deployment_target = '12.2'

  spec.dependency 'BlueStack-SDK', '>= 4.4.8'
  spec.dependency 'Google-Mobile-Ads-SDK', '11.2.0'
  
end
  
