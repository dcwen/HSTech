//
//  HSViewController.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSViewController : UIViewController

// 导航栏左按钮，字体默认16，字体颜色默认白色
@property (nonatomic,strong) UIButton *leftButton;

// 导航栏右按钮，字体默认16，字体颜色默认白色
@property (nonatomic,strong) UIButton *rightButton;

@property (nonatomic,copy) idBlock leftButtonAction;
@property (nonatomic,copy) idBlock rightButtonAction;


/**
 设置导航栏左按钮属性

 @param title           按钮名字
 @param selectImageName 选择时的图片
 @param normalImage     正常情况下的图片
 @param block           按钮点击回调
 */
- (void)setLeftButtonWithTitle:(NSString*)title
                   selectedImage:(NSString*)selectImageName
                     normalImage:(NSString*)normalImage
                     actionBlock:(idBlock)block;

/**
 设置导航栏右按钮属性
 
 @param title           按钮名字
 @param selectImageName 选择时的图片
 @param normalImage     正常情况下的图片
 @param block           按钮点击回调
 */
- (void)setRightButtonWithTitle:(NSString*)title
                    selectedImage:(NSString*)selectImageName
                      normalImage:(NSString*)normalImage
                      actionBlock:(idBlock)block;


- (UIBarButtonItem *)negativeSpacerItem:(CGFloat)retract;

@end



