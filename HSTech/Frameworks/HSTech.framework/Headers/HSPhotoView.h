//
//  HSPhotoView.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/17.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPhotoManager.h"

/*
 *  使用选择照片之后自动布局的功能时就创建此块View. 初始化方法传入照片管理类
 */
@protocol HSPhotoViewDelegate <NSObject>

// 代理返回 选择、移动顺序、删除之后的图片以及视频
- (void)photoViewChangeComplete:(NSArray *)allList Photos:(NSArray *)photos Videos:(NSArray *)videos Original:(BOOL)isOriginal;

// 当view更新高度时调用
- (void)photoViewUpdateFrame:(CGRect)frame WithView:(UIView *)view;

@end

@interface HSPhotoView : UIView

/**
 代理
 */
@property (weak, nonatomic) id<HSPhotoViewDelegate> delegate;

/**
 自定义转场动画时用到的属性
 */
@property (strong, nonatomic) NSIndexPath *currentIndexPath;

/**
 初始化方法
 
 @param frame   位置
 @param manager HSPhotoManager对象
 
 @return 初始化之后的对象
 */
- (instancetype)initWithFrame:(CGRect)frame WithManager:(HSPhotoManager *)manager;
@end
