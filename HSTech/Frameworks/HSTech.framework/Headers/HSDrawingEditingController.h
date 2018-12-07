//
//  HSDrawingEditingController.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/24.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "HSViewController.h"

@interface HSDrawingEditingController : HSViewController

// 编辑前图片
@property (nonatomic, strong) UIImage *originImage;
// 是否可以旋转
@property (nonatomic, assign, getter = isRotationEnabled) BOOL rotationEnabled;
// 图片展示视图
@property (retain, nonatomic) UIView *top_part;
// 旋转工具条视图
@property (retain, nonatomic) UIView *rotate_part;
// 逆时针旋转按钮
@property (retain, nonatomic) UIButton *rotate_left;
// 顺时针旋转按钮
@property (retain, nonatomic) UIButton *roteate_right;
// 底部工具条视图
@property (retain, nonatomic) UIView *toolView;
// 底部工具条背景图
@property (nonatomic, weak) UIImageView *toolViewBackView;
// 裁剪按钮
@property (retain, nonatomic) UIButton *crop;
// 旋转按钮
@property (retain, nonatomic) UIButton *rotate;
// 确认裁剪按钮
@property (retain, nonatomic) UIButton *crop_ok;
// 重置裁剪按钮
@property (retain, nonatomic) UIButton *crop_reset;
// 重置旋转按钮
@property (retain, nonatomic) UIButton *rotate_reset;


// 裁剪按钮点击
- (void)cropAction:(UIButton *)button;

// 旋转按钮点击
- (void)rotateAction:(UIButton *)button;

// 逆时针旋转按钮点击
- (void)rotateLeftAction:(UIButton *)button;

// 顺时针旋转按钮点击
- (void)rotateRightAction:(UIButton *)button;

// 确认编辑按钮点击
- (void)cropOkAction:(UIButton *)button;

// 重置按钮点击
- (void)cropResetAction:(UIButton *)button;

// 重置旋转按钮点击
- (void)rotateResetAction:(UIButton *)button;

// 获取编辑后的图片
- (UIImage *)getCroppedImage;

@end
