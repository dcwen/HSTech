//
//  HSWebProgressLayer.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface HSWebProgressLayer : CAShapeLayer

@property (nonatomic, strong) UIColor *color;

// 开始加载
- (void)startLoad;

// 完成加载
- (void)finishedLoadWithError:(NSError *)error;

// 关闭时间
- (void)closeTimer;

// 使用的是 WKWebView 在用KVO计算实际的读取进度时，调用该方法
- (void)wkWebViewPathChanged:(CGFloat)estimatedProgress;

@end
