//
//  HSAlertView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

//#define dispatch_main_async_safe(block)\
//if ([NSThread isMainThread]) {\
//block();\
//} else {\
//dispatch_async(dispatch_get_main_queue(), block);\
//}
/**
 回调主线程（显示alert必须在主线程执行）
 
 @param block 执行块
 */
static inline void getSafeMainQueue(_Nonnull dispatch_block_t block)
{
    dispatch_main_async_safe(block);
}

/**
 alert按钮执行回调
 
 @param buttonIndex 按钮index
 */
typedef void (^HSAlertClickBlock)(NSInteger buttonIndex);


// MARK: 1.常规的alert
/**
 *  HSAlertView: 两个按钮alert
 */
void showAlertTwoButton(NSString * _Nullable title,
                            NSString * _Nullable message,
                            NSString * _Nullable cancelButtonTitle,
                            HSAlertClickBlock _Nullable cancelBlock,
                            NSString * _Nullable otherButtonTitle,
                            HSAlertClickBlock _Nullable otherBlock);
/**
 *  HSAlertView: 一个按钮alert
 */
void showAlertOneButton(NSString * _Nullable title,
                            NSString * _Nullable message,
                            NSString * _Nullable cancelButtonTitle,
                            HSAlertClickBlock _Nullable cancelBlock);
/**
 *  HSAlertView: 一个固定按钮alert
 */
void showAlertTitle(NSString * _Nullable title);
/**
 *  HSAlertView: 一个固定按钮alert
 */
void showAlertMessage(NSString * _Nullable message);
/**
 *  HSAlertView: 一个固定按钮alert
 */
void showAlertTitleMessage(NSString * _Nullable title,
                               NSString * _Nullable message);


// MARK: 2.无按钮toast
/**
 *  HSAlertView: 无按钮toast，支持自定义关闭回调
 */
void showToastTitleMessageDismiss(NSString * _Nullable title,
                                      NSString * _Nullable message,
                                      NSTimeInterval duration,
                                      HSAlertClickBlock _Nullable dismissCompletion);
/**
 *  HSAlertView: 无按钮toast，支持自定义关闭回调
 */
void showToastTitleDismiss(NSString * _Nullable title,
                               NSTimeInterval duration,
                               HSAlertClickBlock _Nullable dismissCompletion);
/**
 *  HSAlertView: 无按钮toast，支持自定义关闭回调
 */
void showToastMessageDismiss(NSString * _Nullable message,
                                 NSTimeInterval duration,
                                 HSAlertClickBlock _Nullable dismissCompletion);
/**
 *  HSAlertView: 无按钮toast
 */
void showToastTitle(NSString * _Nullable title,
                        NSTimeInterval duration);
/**
 *  HSAlertView: 无按钮toast
 */
void showToastMessage(NSString * _Nullable message,
                          NSTimeInterval duration);


// MARK: 3.文字HUD，代码执行关闭
/**
 *  HSAlertView: 文字HUD，dismissHUD()执行关闭
 */
void showTextHUDTitleMessage(NSString * _Nullable title,
                                 NSString * _Nullable message);
/**
 *  HSAlertView: 文字HUD，dismissHUD()执行关闭
 */
void showTextHUDTitle(NSString * _Nullable title);
/**
 *  HSAlertView: 文字HUD，dismissHUD()执行关闭
 */
void showTextHUDMessage(NSString * _Nullable message);


// MARK: 4.loadHUD，代码执行关闭
/**
 *  HSAlertView: loadHUD，dismissHUD()执行关闭
 */
void showLoadingHUDTitleMessage(NSString * _Nullable title,
                                    NSString * _Nullable message);
/**
 *  HSAlertView: loadHUD，dismissHUD()执行关闭
 */
void showLoadingHUDTitle(NSString * _Nullable title);
/**
 *  HSAlertView: loadHUD，dismissHUD()执行关闭
 */
void showLoadingHUDMessage(NSString * _Nullable message);


// MARK: 5.ProgressHUD，代码执行关闭
/**
 *  HSAlertView: ProgressHUD，dismissHUD()执行关闭
 */
void showProgressHUDTitleMessage(NSString * _Nullable title,
                                     NSString * _Nullable message);
/**
 *  HSAlertView: ProgressHUD，dismissHUD()执行关闭
 */
void showProgressHUDTitle(NSString * _Nullable title);
/**
 *  HSAlertView: ProgressHUD，dismissHUD()执行关闭
 */
void showProgressHUDMessage(NSString * _Nullable message);
/**
 *  HSAlertView: ProgressHUD，设置进度值
 */
void setHUDProgress(float progress);


// MARK: 6.HUD公用
/**
 *  HSAlertView: 设置HUD成功状态
 */
void setHUDSuccessTitleMessage(NSString * _Nullable title,
                                   NSString * _Nullable message);
/**
 *  HSAlertView: 设置HUD成功状态
 */
void setHUDSuccessTitle(NSString * _Nullable title);
/**
 *  HSAlertView: 设置HUD成功状态
 */
void setHUDSuccessMessage(NSString * _Nullable message);

/**
 *  HSAlertView: 设置HUD失败状态
 */
void setHUDFailTitleMessage(NSString * _Nullable title,
                                NSString * _Nullable message);
/**
 *  HSAlertView: 设置HUD失败状态
 */
void setHUDFailTitle(NSString * _Nullable title);
/**
 *  HSAlertView: 设置HUD失败状态
 */
void setHUDFailMessage(NSString * _Nullable message);

/**
 *  HSAlertView: 关闭HUD
 */
void dismissHUD();



/**
 HSAlertView 简介：
 开发调试使用简易alert/HUD工具
 部分提供C函数方便使用，所有show方法的C函数均默认回调主线程
 */
@interface HSAlertView : UIAlertView
/**
 HSAlertView: 最多支持两个按钮的alert
 
 @param title             title
 @param message           message
 @param cancelButtonTitle 取消按钮标题
 @param otherButtonTitle  其他按钮标题
 @param cancelBlock       取消按钮回调
 @param otherBlock        其他按钮回调
 */
+ (void)showAlertViewWithTitle:(nullable NSString *)title
                       message:(nullable NSString *)message
             cancelButtonTitle:(nullable NSString *)cancelButtonTitle
              otherButtonTitle:(nullable NSString *)otherButtonTitle
             cancelButtonBlock:(nullable HSAlertClickBlock)cancelBlock
              otherButtonBlock:(nullable HSAlertClickBlock)otherBlock;


/**
 HSAlertView: 不定数量按钮alert
 
 @param title             title
 @param message           message
 @param cancelButtonTitle 取消按钮标题
 @param buttonIndexBlock  按钮回调
 @param otherButtonTitles 其他按钮标题列表
 */
+ (void)showAlertViewWithTitle:(nullable NSString *)title
                       message:(nullable NSString *)message
             cancelButtonTitle:(nullable NSString *)cancelButtonTitle
              buttonIndexBlock:(nullable HSAlertClickBlock)buttonIndexBlock
             otherButtonTitles:(nullable NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;


+ (void)showAlertViewWithTitle:(nullable NSString *)title
                       message:(nullable NSString *)message
             cancelButtonTitle:(nullable NSString *)cancelButtonTitle
              buttonIndexBlock:(nullable HSAlertClickBlock)buttonIndexBlock
             titleArray:(nullable NSArray *)titleArray;


/**
 HSAlertView: 不带按钮自动消失的toast
 
 @param title             title
 @param message           message
 @param duration          显示时间
 @param dismissCompletion 关闭后回调
 */
+ (void)showToastViewWithTitle:(nullable NSString *)title
                       message:(nullable NSString *)message
                      duration:(NSTimeInterval)duration
             dismissCompletion:(nullable HSAlertClickBlock)dismissCompletion;


/**
 HSAlertView: 文字HUD
 
 @param title title
 @param message message
 */
+ (void)showTextHUDWithTitle:(nullable NSString *)title
                     message:(nullable NSString *)message;


/**
 HSAlertView: loadHUD
 
 @param title title
 @param message message
 */
+ (void)showLoadingHUDWithTitle:(nullable NSString *)title
                        message:(nullable NSString *)message;


/**
 HSAlertView: progressHUD
 
 @param title title
 @param message message
 */
+ (void)showProgressHUDWithTitle:(nullable NSString *)title
                         message:(nullable NSString *)message;
/**
 HSAlertView: progressHUD，进度条进度值
 
 @param progress 进度值
 */
+ (void)setHUDProgress:(float)progress;


/**
 HSAlertView: HUD公用方法，设置成功状态
 
 @param title   title
 @param message message
 */
+ (void)setHUDSuccessStateWithTitle:(nullable NSString *)title
                            message:(nullable NSString *)message;
/**
 HSAlertView: HUD公用方法，设置失败状态
 
 @param title   title
 @param message message
 */
+ (void)setHUDFailStateWithTitle:(nullable NSString *)title
                         message:(nullable NSString *)message;
/**
 HSAlertView: HUD公用方法，关闭HUD
 */
+ (void)dismissHUD;


@end
