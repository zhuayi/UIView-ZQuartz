//
//  UIView+ZXQuartz.h
//  quartz
//
//  Created by 张 玺 on 12-12-24.
//  Copyright (c) 2012年 张玺. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ZQuartz)

/**
 *  绘制图片
 */
- (void)drawImage:(CGRect)rect image:(UIImage *)image;


/**
 *  绘制文字
 *
 *  @param point     文字坐标
 *  @param text      文字内容
 *  @param fontStyle 文字样式
 */
- (void)drawText:(CGPoint)point text:(NSString *)text fontSize:(NSDictionary *)fontStyle;

/**
 *  绘制带边框线的矩形
 *
 *  @param rect      矩形尺寸
 *  @param lineWidth 边框线宽度
 *  @param color     线条颜色
 */
- (void)drawRectangle:(CGRect)rect lineWidth:(CGFloat)lineWidth color:(UIColor *)color;


/**
 *  绘制矩形
 *
 *  @param rect 矩形尺寸
 */
-(void)drawRectangle:(CGRect)rect;

/**
 *  绘制圆角矩形
 *
 *  @param rect   矩形尺寸
 *  @param radius 圆角弧度
 */
-(void)drawRectangle:(CGRect)rect withRadius:(float)radius;



/**
 *  绘制画多边形
 *
 *  @param pointArray 点数组 pointArray = @[[NSValue valueWithCGPoint:CGPointMake(200, 400)]];
 */
-(void)drawPolygon:(NSArray *)pointArray;


/**
 *  绘制圆形
 *
 *  @param center 中心点坐标
 *  @param radius 半径
 */
-(void)drawCircleWithCenter:(CGPoint)center radius:(float)radius;


/**
 *  绘制曲线
 *
 *  @param startPoint
 *  @param endPoint
 *  @param controlPoint1
 *  @param controlPoint2
 */
-(void)drawCurveFrom:(CGPoint)startPoint
                  to:(CGPoint)endPoint
       controlPoint1:(CGPoint)controlPoint1
       controlPoint2:(CGPoint)controlPoint2;

/**
 *  绘制弧线
 *
 *  @param center
 *  @param radius
 *  @param startAngle
 *  @param endAngle
 *  @param clockwise
 */
-(void)drawArcFromCenter:(CGPoint)center
                  radius:(float)radius
              startAngle:(float)startAngle
                endAngle:(float)endAngle
               clockwise:(BOOL)clockwise;


/**
 *  绘制扇形
 *
 *  @param center
 *  @param radius
 *  @param startAngle
 *  @param endAngle
 *  @param clockwise
 */
-(void)drawSectorFromCenter:(CGPoint)center
                     radius:(float)radius
                 startAngle:(float)startAngle
                   endAngle:(float)endAngle
                  clockwise:(BOOL)clockwise;

/**
 *  绘制直线
 *
 *  @param startPoint
 *  @param endPoint
 */
-(void)drawLineFrom:(CGPoint)startPoint to:(CGPoint)endPoint;


/**
 *  绘制折线 ，连续直线
 *
 *  @param pointArray pointArray = @[[NSValue valueWithCGPoint:CGPointMake(200, 400)]];
 */
-(void)drawLines:(NSArray *)pointArray;



-(CGMutablePathRef)pathwithFrame:(CGRect)frame withRadius:(float)radius;


@end
