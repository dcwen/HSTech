//
//  HSProgressView.h
//  HWProgress
//
//  Created by CWen、文 on 2017/3/10.
//  Copyright © 2017年 hero_wqb. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, HSProgressStyle) {
    HSProgressStyleDefault,
    HSProgressStyleWave,
    HSProgressStyleCircle,
    HSProgressStyleInstall
};

@interface HSProgressView : UIView

// 进度值  0～1
@property (nonatomic, assign) CGFloat progress;

// 进度条样式
@property (nonatomic, assign) HSProgressStyle style;

// 进度条颜色（注水样式时是前波浪颜色）
@property (nonatomic, strong) UIColor *color;

// 注水样式时的后波浪颜色
@property (nonatomic, strong) UIColor *behindColor;

// 注水样式时的填充颜色
@property (nonatomic, strong) UIColor *fillColor;

// 进度数字颜色
@property (nonatomic, strong) UIColor *labelColor;

@end
