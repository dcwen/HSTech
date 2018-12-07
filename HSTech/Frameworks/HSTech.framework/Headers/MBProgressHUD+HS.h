//
//  MBProgressHUD+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (HS)

/**
 *  菊花样式
 */
+ (void)hs_showChrysanthDialogWithString:(NSString *)string;

/**
 *  菊花样式
 */
+ (void)hs_showChrysanthDialogWithString:(NSString *)string duration:(CGFloat)duration completed:(voidBlock)completed;


/**
 *  扇形加载样式
 */
+ (void)hs_showSectorProgressDialogWithString:(NSString *)string;

/**
 *  环形加载样式
 */
+ (void)hs_showRoundProgressDialogWithString:(NSString *)string;

/**
 *  钩型提示样式
 */
+ (void)hs_showCheckedDialogWithString:(NSString *)string;

/**
 *  普通文本样式
 */
+ (void)hs_showPlainTextDialogWithString:(NSString *)string;

/**
 *  普通文本样式，可设置旋转方向
 */
+ (void)hs_showPlainTextDialogWithString:(NSString *)string onView:(UIView *)view;



// 展示成功对应信息
+ (void)hs_showSuccess:(NSString *)success toView:(UIView *)view;

// 展示错误对应信息
+ (void)hs_showError:(NSString *)error toView:(UIView *)view;

// 展示信息
+ (MBProgressHUD *)hs_showMessage:(NSString *)message toView:(UIView *)view;

// 展示成功对应信息
+ (void)hs_showSuccess:(NSString *)success;

// 展示错误对应信息
+ (void)hs_showError:(NSString *)error;

// 展示信息
+ (MBProgressHUD *)hs_showMessage:(NSString *)message;

// 隐藏
+ (void)hs_hideHUDForView:(UIView *)view;

// 隐藏
+ (void)hs_hideHUD;

@end
