Pod::Spec.new do |spec|
  
  spec.name             = "BlueStack-SDK"
  spec.version          = "4.4.9"
  spec.static_framework = true
  spec.summary          = "BlueStack by Azerion provides functionalities for monetizing your mobile application"
  spec.description      = <<-DESC
                       BlueStack by Azerion provides functionalities for monetizing your mobile application: from premium sales with reach media, video and innovative formats, it facilitates inserting native mobile ads as well all standard display formats. BlueStack SDK is a library that allow you to handle the following Ads servers with the easy way :
  Smart-Display-SDK
  FBAudienceNetwork
  Google-Mobile-Ads-SDK
  AmazonPublisherServicesSDK
  OguryAds
  FlurryAds
  mopub-ios-sdk
  AdColony
   DESC
  spec.homepage         = "https://developers.bluestack.app/"
  spec.license          = 'Commercial'
  spec.author           = { 
                            "Azerion" => "https://www.azerion.com/contact/"
                          }

#  spec.source           = { :http => "https://bitbucket.org/mngcorp/mngads-demo-ios/downloads/BlueStack-SDK-v4.1.3.zip" }
spec.source           = { :git => "https://github.com/azerion/BlueStackSDK.git", :tag => "#{spec.version}" }
  

#  spec.xcconfig        =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/../../BlueStack-SDK"' , 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/../../BlueStack-SDK"' }

  spec.platform = :ios
  spec.swift_version = "5"
  spec.ios.deployment_target  = '12.2'
  spec.resources = 'BlueStackSDK.xcframework/ios-arm64/*/*.{bundle}'

  spec.frameworks = 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MediaPlayer', 'CoreMotion', 'EventKitUI', 'EventKit', 'AdSupport', 'StoreKit', 'CoreLocation', 'Accelerate', 'CoreTelephony', 'MessageUI'



 spec.default_subspec = 'Core'

  ###################################
  #######                     #######
  #######       subspecs      #######
  #######                     #######
  ###################################

  spec.subspec 'Core' do |mng|
    mng.vendored_frameworks = 'BlueStackSDK.xcframework'
  end

  spec.subspec 'FBAudienceNetwork' do |fb|
      fb.vendored_frameworks = 'BlueStackFacebookAdapter.xcframework'
      fb.dependency 'FBAudienceNetwork', '6.9.0'
      fb.dependency 'BlueStack-SDK/Core'
  end


  spec.subspec 'Google-Mobile-Ads-SDK' do |gma|
      gma.vendored_frameworks = 'BlueStackGMAAdapter.xcframework'
      gma.dependency 'BlueStack-SDK/Core'
      gma.dependency 'Google-Mobile-Ads-SDK','11.2.0'
  end

  spec.subspec 'Smart-Display-SDK' do |sas|
      sas.vendored_frameworks = 'BlueStackSASAdapter.xcframework'
      sas.dependency 'BlueStack-SDK/Core'
      sas.dependency 'Smart-Display-SDK',  '7.23.4'
      sas.dependency 'Smart-Core-SDK',  '7.22.0'
  end

  spec.subspec 'Smart-Display-SDK-Bidding' do |sasb|
      sasb.vendored_frameworks = 'BlueStackSASBiddingAdapter.xcframework'
      sasb.dependency 'Smart-Display-SDK',  '7.23.4'
      sasb.dependency 'Smart-Core-SDK',  '7.22.0'
  end
  
  spec.subspec 'AdColony' do |ac|
      ac.vendored_frameworks = 'BlueStackAdColonyAdapter.xcframework'
      ac.dependency 'AdColony', '4.8.0'
      ac.dependency 'BlueStack-SDK/Core'
  end

  spec.subspec 'MAdvertiseLocation' do |mlo|
      mlo.vendored_frameworks = 'BlueStackLocationAdapter.xcframework'
      mlo.dependency 'MAdvertiseLocation', '3.1.7'
      mlo.dependency 'BlueStack-SDK/Core'
  end

  spec.subspec 'AmazonPublisherServicesSDK' do |amazon|
      amazon.vendored_frameworks = 'BluestackAmazonPublisherServicesAdapter.xcframework'
      amazon.dependency               'AmazonPublisherServicesSDK',  '4.5.5'
  end

  spec.subspec 'OguryAds' do |og|
      og.vendored_frameworks = 'BlueStackOguryAdapter.xcframework'
      og.dependency                'OgurySdk','4.0.0'
      og.dependency                'BlueStack-SDK/Core'
  end

  spec.subspec 'In-App-Bidding' do |inApp|
     inApp.dependency            'BlueStack-SDK/Smart-Display-SDK-Bidding'
     inApp.dependency            'BlueStack-SDK/AmazonPublisherServicesSDK'
  end

  spec.subspec 'Full' do |full|
    full.dependency              'BlueStack-SDK/Core'
    full.dependency              'BlueStack-SDK/Google-Mobile-Ads-SDK'
    full.dependency              'BlueStack-SDK/Smart-Display-SDK'
    full.dependency              'BlueStack-SDK/OguryAds'
    full.dependency              'BlueStack-SDK/In-App-Bidding'
  end

end
