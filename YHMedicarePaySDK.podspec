#
# Be sure to run `pod lib lint YHMedicarePaySDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YHMedicarePaySDK'
  s.version          = '1.2.1.0'
  s.summary          = '医保移动支付SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = '集成在线医保移动结算功能的聚合支付SDK. 厦门市易联众易惠科技有限公司 All rights reserved.'

  s.homepage         = 'https://github.com/XmYlzYhkj/YHMedicarePaySDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jagtu' => '42318168@qq.com' }
  s.source           = { :git => 'https://github.com/XmYlzYhkj/YHMedicarePaySDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.frameworks       = 'SystemConfiguration', 'CoreMotion','CFNetwork', 'CoreTelephony', 'QuartzCore', 'CoreText', 'CoreGraphics', 'UIKit', 'Foundation', 'WebKit', 'CoreLocation'
  s.libraries        = 'z', 'c++', 'sqlite3'
  

  s.dependency 'YHModel'
  s.dependency 'YHCommonSDK' , '1.1.9'
  s.dependency 'YHOnePaySDK' #, '~> 1.3.0'
  
  s.requires_arc = true
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '$(EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_$(EFFECTIVE_PLATFORM_SUFFIX)__NATIVE_ARCH_64_BIT_$(NATIVE_ARCH_64_BIT)__XCODE_$(XCODE_VERSION_MAJOR))',
    'EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_simulator__NATIVE_ARCH_64_BIT_x86_64__XCODE_1200' => 'arm64 arm64e armv7 armv7s armv6 armv8'
  }
  s.prefix_header_file = 'YHMedicarePaySDK/Classes/YHMedicarePaySDK.pch'
  
  s.vendored_frameworks = ["Frameworks/*.framework"]

  s.resources    = ["Resources/*.bundle"]
  
end
