
# 二维绘图引擎ZQuartz

[![CI Status](http://img.shields.io/travis/zhuayi/UIView-ZQuartz.svg?style=flat)](https://travis-ci.org/zhuayi/UIView-ZQuartz) [![Version](https://img.shields.io/cocoapods/v/UIView-ZQuartz.svg?style=flat)](http://cocoapods.org/pods/UIView-ZQuartz) [![License](https://img.shields.io/cocoapods/l/UIView-ZQuartz.svg?style=flat)](http://cocoapods.org/pods/UIView-ZQuartz) [![Platform](https://img.shields.io/cocoapods/p/UIView-ZQuartz.svg?style=flat)](http://cocoapods.org/pods/UIView-ZQuartz)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## API

绘制图片
```objective-c
- (void)drawImage:(CGRect)rect image:(UIImage *)image;
```

绘制文字
```objective-c
- (void)drawText:(CGPoint)point text:(NSString *)text fontSize:(NSDictionary *)fontStyle
```

绘制带边框线的矩形
```objective-c
- (void)drawRectangle:(CGRect)rect lineWidth:(CGFloat)lineWidth color:(UIColor *)color
```

绘制矩形
```
-(void)drawRectangle:(CGRect)rect
```

绘制圆角矩形

```objective-c
-(void)drawRectangle:(CGRect)rect withRadius:(float)radius;
```

绘制画多边形
```
-(void)drawPolygon:(NSArray *)pointArray
```

绘制圆形

``````objective-c
-(void)drawCircleWithCenter:(CGPoint)center radius:(float)radius
```

绘制曲线

```objective-c
-(void)drawCurveFrom:(CGPoint)startPoint
to:(CGPoint)endPoint
controlPoint1:(CGPoint)controlPoint1
controlPoint2:(CGPoint)controlPoint2;
```


绘制弧线

```objective-c
-(void)drawArcFromCenter:(CGPoint)center
radius:(float)radius
startAngle:(float)startAngle
endAngle:(float)endAngle
clockwise:(BOOL)clockwise;
```

绘制扇形

```objective-c
-(void)drawSectorFromCenter:(CGPoint)center
radius:(float)radius
startAngle:(float)startAngle
endAngle:(float)endAngle
clockwise:(BOOL)clockwise
```

绘制直线

```objective-c
-(void)drawLineFrom:(CGPoint)startPoint to:(CGPoint)endPoint
```

绘制折线 ，连续直线

```objective-c
-(void)drawLines:(NSArray *)pointArray;
```


## Installation

UIView-ZQuartz is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
`pod "UIView-ZQuartz"
```
`
## Author

renxin, renxin@baidu.com

## License

UIView-ZQuartz is available under the MIT license. See the LICENSE file for more info.