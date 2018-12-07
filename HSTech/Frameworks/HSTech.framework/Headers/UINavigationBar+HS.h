//
//  UINavigationBar+HS.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/7.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (HS)

/**
 设置背景颜色

 @param backgroundColor 背景颜色
 */
- (void)hs_setBackgroundColor:(UIColor *)backgroundColor;

/**
 设置透明度

 @param alpha 透明度
 */
- (void)hs_setElementsAlpha:(CGFloat)alpha;

/**
 设置上下移动大小

 @param translationY 移动大小
 */
- (void)hs_setTranslationY:(CGFloat)translationY;

/**
 重置状态
 */
- (void)hs_reset;

@end
