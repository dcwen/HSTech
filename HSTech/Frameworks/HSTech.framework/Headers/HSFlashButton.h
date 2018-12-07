//
//  HSFlashButton.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/24.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^HSFlashButtonDidClickBlock)(UIButton *);

typedef NS_ENUM(NSUInteger, HSFlashButtonType) {
    HSFlashButtonTypeInner = 0, // 按钮内部动画
    HSFlashButtonTypeOuter = 1  // 按钮外部动画
};

@interface HSFlashButton : UIButton

// 按钮点击动画类型
@property (nonatomic, assign) HSFlashButtonType flashButtonType;

// 动画持续时间，默认0.5s
@property (nonatomic, assign) CGFloat flashDuration;

// 动画颜色，默认白色
@property (nonatomic, strong) UIColor *flashColor;

// 按钮点击回调
@property (nonatomic, copy) HSFlashButtonDidClickBlock clickBlock;

@end
