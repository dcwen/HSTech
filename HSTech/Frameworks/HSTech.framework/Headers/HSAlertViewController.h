//
//  HSAlertViewController.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

// [self presentViewController:alertVC animated:NO completion:nil]; 显示弹框

#import "HSViewController.h"

@interface HSAlertAction : NSObject

+ (instancetype)actionWithTitle:(NSString *)title handler:(void (^)(HSAlertAction *action))handler;

@property (nonatomic, readonly) NSString *title;

@end

@interface HSAlertViewController : HSViewController

// 按钮数组
@property (nonatomic, readonly) NSArray<HSAlertAction *> *actions;

// 弹框标题
@property (nonatomic, copy) NSString *alertTitle;

// 弹框信息描述
@property (nonatomic, copy) NSString *message;

// 弹框信息对齐方式
@property (nonatomic, assign) NSTextAlignment messageAlignment;

// 初始化弹框
+ (instancetype)alertControllerWithTitle:(NSString *)title message:(NSString *)message;

// 添加弹框按钮
- (void)addAction:(HSAlertAction *)action;

@end
