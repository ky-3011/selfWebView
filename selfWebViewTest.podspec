#
# Be sure to run `pod lib lint selfWebView.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'selfWebViewTest'
  s.version          = '0.1.2'
  s.summary          = 'selfWebView is a webView,which is used to http'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: webView has sound takephoto location scan
                       DESC

  s.homepage         = 'https://github.com/ky-3011/selfWebViewTest'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'ky-3011' => '3453079@163.com' }
  s.source           = { :git => 'https://github.com/ky-3011/selfWebViewTest.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'lib/selfWebView.framework/Headers/*.{h}'
  s.vendored_frameworks = 'lib/selfWebView.framework'
  # s.resource_bundles = {
  #   'selfWebView' => ['selfWebView/Assets/*.png']
  # }

  s.public_header_files = 'lib/**/*.h'
  # s.frameworks = 'UIKit', 'Foundation', 'libiconv.tbd', 'CoreAudio', 'WebKit' ,'ImageIO', 'CoreMedia', 'CoreVideo', 'CoreAudio', 'CoreFoundation'
  # s.dependency 'AFNetworking', '~> 2.3'
  # s.library   = 'iconv.tbd'
  # s.user_target_xcconfig = {'OTHER_LDFLAGS' => ['-lObjC']}
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
end
