//
//  UINavigationController+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (HS)

/**
 *  跳转时animated默认为YES
 */
- (void)hs_pushViewControllerWithStoryBoardName:(NSString *)storyBoardName identifier:(NSString *)identifier;

/**
 push控制器

 @param viewController 控制器
 */
- (void)hs_pushVC:(UIViewController *)viewController;


/**
 返回上一个控制器
 */
- (void)hs_popVC;

/**
 返回指定的控制器

 @param viewController 控制器
 */
- (void)hs_popToVC:(UIViewController *)viewController;


/**
 返回到根控制器
 */
- (void)hs_popToRootVC;

@end
