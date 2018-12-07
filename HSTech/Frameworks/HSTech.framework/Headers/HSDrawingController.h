//
//  HSDrawingController.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "HSViewController.h"
#import "HSDrawingBoardView.h"

@interface HSDrawingController : HSViewController

// 画板视图
@property (nonatomic, weak) HSDrawingBoardView *drawingBoardView;

// 画笔大小缩放视图
@property (nonatomic, weak) UIView *scaleView;

// 小圆点
@property (nonatomic, weak) UIImageView *smallImageView;

// 大圆点
@property (nonatomic, weak) UIImageView *bigImageView;

// 滑动条
@property (nonatomic, weak) UISlider *slider;

// 底部工具栏
@property (nonatomic, weak) UIView *toolView;

// 工具栏背景图片
@property (nonatomic, weak) UIImageView *toolViewBackView;

// 画笔按钮
@property (retain, nonatomic) UIButton *pen;

// 橡皮擦按钮
@property (retain, nonatomic) UIButton *eraser;

// 清除按钮
@property (retain, nonatomic) UIButton *clear;

// 编辑按钮，点击调整下个控制器编辑
@property (retain, nonatomic) UIButton *edit;

// 获取获取签名截图
- (UIImage *)saveScreen;

// 子类重写这个方法，现实点击编辑跳转
- (void)toEditing;

@end
