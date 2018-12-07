//
//  HSGetImageHandler.h
//  HSTech
//
//  Created by CWen、文 on 2017/1/12.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * 使用注意：创建对象，成为调用者的成员属性，调用对象方法时才不会被释放
 */
typedef void (^imageBlock)(UIImage *image);


@interface HSGetImageHandler : NSObject

/**
 修改用户头像专用

 @param parentVC 当前控制器
 @param imageBlock 选择图片后回调
 */
- (void)hs_getHeaderImageWithParent:(UIViewController *)parentVC imageBlock:(imageBlock)imageBlock;


/**
 修改用户头像专用

 @param parentVC 当前控制器
 @param enableCrop 是否剪切功能
 @param imageBlock 选择图片后回调
 */
- (void)hs_getHeaderImageWithParent:(UIViewController *)parentVC crop:(BOOL)enableCrop imageBlock:(imageBlock)imageBlock;


/**
 获取图片接口，会弹框提示选择相机还是相册

 @param controller 当前控制器
 @param imageBlock 选择图片后回调
 */
- (void)getSystemImageWith:(UIViewController *)controller imageBlock:(imageBlock)imageBlock;

/**
 获取图片接口，直接打开相册选择图片

 @param controller 当前控制器
 @param imageBlock 选择图片后回调
 */
- (void)getSystemImageFromPhotosAlbumWith:(UIViewController *)controller imageBlock:(imageBlock)imageBlock;

/**
 获取图片接口，直接打开相册选择图片
 
 @param controller 当前控制器
 @param imageBlock 选择图片后回调
 */
- (void)getSystemImageFromPhotosAlbumWith:(UIViewController *)controller allowsEdit:(BOOL)allow imageBlock:(imageBlock)imageBlock;

/**
 获取图片接口，直接打开相机拍照

 @param controller 当前控制器
 @param imageBlock 选择图片后回调
 */
- (void)getSystemImageFromCameraWith:(UIViewController *)controller imageBlock:(imageBlock)imageBlock;

/**
 获取图片接口，直接打开相机拍照
 
 @param controller 当前控制器
 @param allow 是否可以拍照后编辑
 @param imageBlock 选择图片后回调
 */
- (void)getSystemImageFromCameraWith:(UIViewController *)controller allowsEdit:(BOOL)allow imageBlock:(imageBlock)imageBlock;


@end
