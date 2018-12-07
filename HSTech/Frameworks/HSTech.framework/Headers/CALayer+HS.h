//
//  CALayer+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CALayer (HS)

/**
 *  初始化
 *
 *  @param frame 大小
 *
 *  @return 实例
 */
+ (instancetype)hs_layerWithFrame:(CGRect)frame;

/**
 *  设置初始化后的默认值
 */
- (void)hs_setInitDefaultValues;

/**
 *  设置borderColor，runtime里面可以直接用 borderColorFromUIColor
 *
 *  @param color 颜色
 */
- (void)setBorderColorFromUIColor:(UIColor *)color;

@end


#pragma mark - 动画

// 旋转 key
#define kTransformRotation  @"transform.rotation"

@interface CALayer (Animation)

/**
 *  旋转 180°
 *
 *  @param complete 完成block
 */
- (void)hs_animate180WithComplete:(void(^)())complete;

/**
 *  旋转 180°，指定方向
 *
 *  @param forward  顺时针 → YES，逆时针 → NO
 *  @param complete 完成block
 */
- (void)hs_animate180WithForward:(BOOL)forward complete:(void(^)())complete;


@end
