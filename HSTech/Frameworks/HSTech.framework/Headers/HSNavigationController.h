//
//  HSNavigationController.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HSNavigationController : RTRootNavigationController
    
/**
 子类重写，可返回设置导航栏背景颜色，默认白色
 */
+ (UIColor *)navigationBarTintColor;
    
/**
 子类重写，可返回设置导航栏标题颜色，默认黑色
 */
+ (UIColor *)navigationBarTitleColor;
    
/**
 子类重写，可返回导航栏标题字体大小，默认17
 */
+ (UIFont *)navigationBarTitleFont;
    
/**
 子类重写，可返回导航栏按钮字体颜色，默认黑色
 */
+ (UIColor *)barButtonItemTitleColor;
    
/**
 子类重写，可返回导航栏按钮字体大小，默认15
 */
+ (UIFont *)barButtonItemTitleFont;


@end
