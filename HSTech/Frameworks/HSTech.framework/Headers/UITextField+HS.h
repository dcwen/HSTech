//
//  UITextField+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (HS)

/// 是否是空的文本，空文本 → YES，非空文本 → NO
@property (nonatomic, assign, readonly) BOOL hs_isEmptyText;


/**
 *  初始化
 *
 *  @param frame           大小
 *  @param placeholder     占位文本
 *  @param font            字体
 *  @param textAlignment   文本对齐方式
 *  @param backgroundColor 背景颜色
 *
 *  @return 实例
 */
+ (UITextField *)hs_textFieldWithFrame:(CGRect)frame placeholder:(NSString *)placeholder font:(UIFont *)font textAlignment:(NSTextAlignment)textAlignment backgroundColor:(UIColor *)backgroundColor;

@end
