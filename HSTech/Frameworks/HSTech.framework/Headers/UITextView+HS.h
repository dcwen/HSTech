//
//  UITextView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (HS)

/**
 *  初始化
 *
 *  @param frame           大小
 *  @param font            字体
 *  @param backgroundColor 背景颜色
 *
 *  @return 实例
 */
+ (UITextView *)hs_textViewWithFrame:(CGRect)frame font:(UIFont *)font backgroundColor:(UIColor *)backgroundColor;

/**
 *  设置行距
 *
 *  @param space 行距
 */
- (void)hs_setLineSpace:(CGFloat)space;

/**
 *  设置某个范围内字符串颜色
 *
 *  @param textColor 颜色
 *  @param range 字符串
 */
- (void)hs_setTextColor:(UIColor *)textColor range:(NSRange)range;

/**
 *  设置某个范围内字符串字体
 *
 *  @param font 字体
 *  @param range 字符串
 */
- (void)hs_setFont:(UIFont *)font range:(NSRange)range;

/**
 *  设置某个字符串颜色
 *
 *  @param textColor 颜色
 *  @param subString 字符串
 */
- (void)hs_setTextColor:(UIColor *)textColor subString:(NSString *)subString;

/**
 *  设置某个字符串字体
 *
 *  @param textFont 字体
 *  @param subString 字符串
 */
- (void)hs_setTextFont:(UIFont *)textFont subString:(NSString *)subString;

@end
