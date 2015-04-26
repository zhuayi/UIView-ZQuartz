#
# Be sure to run `pod lib lint UIView-ZQuartz.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "UIView-ZQuartz"
  s.version          = "0.1.0"
  s.summary          = "drawRect绘制扩展, 提供矩形,圆角矩形,圆,扇形,曲线,折线,弧线等."
  s.description      = <<-DESC
                       drawRect绘制扩展, 提供矩形,圆角矩形,圆,扇形,曲线,折线,弧线等.
                       DESC
  s.homepage         = "https://github.com/zhuayi/UIView-ZQuartz.git"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "zhuayi" => "2179942@qq.com" }
  s.source           = { :git => "https://github.com/zhuayi/UIView-ZQuartz.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
  s.resource_bundles = {
    'UIView-ZQuartz' => ['Pod/Assets/*.png']
  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
