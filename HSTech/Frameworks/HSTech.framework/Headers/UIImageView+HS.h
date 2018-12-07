//
//  UIImageView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (HS)

/**
 *  初始化
 *
 *  @param frame 大小
 *  @param image 图片
 *
 *  @return 实例
 */
+ (UIImageView *)hs_imageViewWithFrame:(CGRect)frame image:(UIImage *)image;

/**
 *  初始化
 *
 *  @param frame                  大小
 *  @param image                  图片
 *  @param userInteractionEnabled 是否用户交互
 *
 *  @return 实例
 */
+ (UIImageView *)hs_imageViewWithFrame:(CGRect)frame image:(UIImage *)image userInteractionEnabled:(BOOL)userInteractionEnabled;

/**
 *  imageView设置成圆形，有圆环边框
 *
 *  @param borderWidth 圆形边框间距大小
 *  @param borderColor 圆形边框间距颜色
 */
- (void)hs_setRoundImageViewWithBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

/**
 *  根据图片部分url接口地址加载imageView图片，默认本地缓存
 *
 *  @param urlString 图片部分url接口地址
 *  @param placeholder  图片未加载完毕背景图片
 */
- (void)hs_setImageWithUrlString:(NSString *)urlString placeholderImage:(UIImage *)placeholder;

/**
 *  根据图片部分url接口地址加载imageView图片
 *
 *  @param urlString 图片部分url接口地址
 *  @param placeholder  图片未加载完毕背景图片
 *  @param toDisk  是否本地缓存
 */
- (void)hs_setImageWithUrlString:(NSString *)urlString placeholderImage:(UIImage *)placeholder toDisk:(BOOL)toDisk;

@end

@interface UIImageView (PickerPhoto)


@end
