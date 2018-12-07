//
//  UIColor+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HS)

/**
 *  将由6个字符十六进制颜色转换到UIColor对象，会自动截取前面的 #号
 */
+ (UIColor *)hs_hexColor:(NSString *)hexColor;

/**
 *  获取随机颜色color
 */
+ (UIColor *)hs_randomColor;

@end
