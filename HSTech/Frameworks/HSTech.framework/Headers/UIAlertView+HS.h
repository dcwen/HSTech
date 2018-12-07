//
//  UIAlertView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (HS)

/**
 *  显示简单弹窗，消息
 *
 *  @param message 消息
 */
+ (void)hs_showWithMessage:(NSString *)message;

/**
 *  显示简单弹窗，标题 + 内容
 *
 *  @param title   标题
 *  @param message 内容
 */
+ (void)hs_showWithTitle:(NSString *)title message:(NSString *)message;

/**
 *  显示简单弹窗，标题 + 内容 + 代理
 *
 *  @param title    标题
 *  @param message  内容
 *  @param delegate 代理
 */
+ (void)hs_showWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate;

/**
 *  显示简单弹窗，标题 + 内容 + 代理 + tag
 *
 *  @param title    标题
 *  @param message  内容
 *  @param delegate 代理
 *  @param tag      tag
 */
+ (void)hs_showWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate tag:(int)tag;

@end
