//
//  UIImage+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HS)

/**
 缓存图片（内存或者本地）
 */
+ (UIImage *)hs_imageCacheWithUrl:(NSString *)url;

/**
 本地缓存图片
 */
+ (UIImage *)hs_imageDiskCacheWithUrl:(NSString *)url;


/**
 利用绘制功能切圆角

 @return 切完圆角的图片
 */
- (UIImage *)hs_cutCircleImage;

/**
 在图片中间画文字

 @param title    文字内容
 @param fontSize 文字大小

 @return 画文字后的图片
 */
- (UIImage *)hs_drawTitle:(NSString *)title fontSize:(CGFloat)fontSize;

/**
 *  截取图中某部分小图
 *
 *  @param rect 矩形区域
 *
 *  @return 截取的图片
 */
- (UIImage *)hs_captureImageWithRect:(CGRect)rect;

/**
 *  缩放图片
 *
 *  @param size 指定大小
 *
 *  @return 缩放后的图片
 */
- (UIImage *)hs_scaleToSize:(CGSize)size;

/**
 *  通过颜色返回图片
 *
 *  @param color 颜色
 *
 *  @return 图片
 */
+ (UIImage *)hs_imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 *  图片的size宽度
 *
 *  @return 图片的size宽度
 */
- (CGFloat)hs_sizeWidth;

/**
 *  图片的size高度
 *
 *  @return 图片的size高度
 */
- (CGFloat)hs_sizeHeight;

/**
 *  争对ios7以上的系统适配新的图片资源
 *
 *  @param imageName 图片名称
 *
 *  @return 新的图片
 */
+ (UIImage *)hs_imageWithName:(NSString *)imageName;

/**
 *  生成可以拉伸指定位置的图片
 *
 *  @param imageName 图片名字
 *
 *  @return 新的图片
 */
+ (UIImage *)hs_resizableImageWithName:(NSString *)imageName;

/**
 *  图片缩放
 *
 *  @param size 指定大小
 *
 *  @return 缩放后的图片
 */
- (UIImage *)hs_scaleImageWithSize:(CGSize)size;


+ (UIImage *)hs_scaleImage:(UIImage *)image size:(CGSize)size;

/**
 *  通过网址生产二维码图片
 *
 *  @param url 网址
 *
 *  @return 二维码图片
 */
+ (UIImage *)hs_TwoDimensionCodeWithUrl:(NSString *)url;

/**
 *  通过网址生产条形码图片
 *
 *  @param url 网址
 *
 *  @return 条形码图片
 */
+ (UIImage *)hs_barCodeImageWithUrl:(NSString *)url;

+ (void)hs_barCodeImageWithUrl:(NSString *)url completed:(idBlock)completed;


/**
 *  进行旋转
 */
- (UIImage *)hs_rotatedImageWithtransform:(CGAffineTransform)rotation
                         croppedToRect:(CGRect)rect;

/**
 将图片保存到系统相册
 */
- (void)hs_writeToSavedPhotosAlbum;


/**
 截取屏幕

 @return 屏幕图片
 */
+ (UIImage *)hs_captureScreen;

/**
 将图片变成灰色

 @param sourceImage 原始图片
 @return 灰色图片
 */
+ (UIImage *)hs_getGrayImage:(UIImage*)sourceImage;


@end
