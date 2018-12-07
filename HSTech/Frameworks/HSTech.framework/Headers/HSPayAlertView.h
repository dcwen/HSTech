//
//  HSPayAlertView.h
//  HSTech
//
//  Created by CWen、文 on 2017/5/9.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSPayAlertView : UIView

// 标题
@property (nonatomic, copy) NSString *title;

// 详细描述文本
@property (nonatomic, copy) NSString *detail;

// 金额大小
@property (nonatomic, assign) CGFloat amount;

// 密码输完的回调
@property (nonatomic,copy) void (^completeHandle)(NSString *inputPwd);

// alert弹框
- (void)show;

@end
