//
//  HSTabBarController.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/30.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSTabBarController : UITabBarController
    

/**
 根据的索引将控制器插入到指定位置

 @param vcIdx 要插入的控制器索引
 @param index 要插入的位置
 */
- (void)insertControllerWithControllerIdx:(NSInteger)vcIdx atIndex:(NSInteger)index;

/**
 根据索引移除控制器

 @param index 索引
 */
- (void)removeControllerWithIdx:(NSInteger)index;
    

/**
 tabbarItem标题字体大学，默认11，子类可重写
 */
+ (UIFont *)titleFont;
    
/**
 tabbarItem标题未选中状态字体颜色，默认黑色，子类可重写
 */
+ (UIColor *)titleNormalColor;
    
/**
 tabbarItem标题选中状态字体颜色，默认黑色，子类可重写
 */
+ (UIColor *)titleSelectedColor;

/**
 子类重写，返回导航栏控制器名称（必须是项目中已经有的导航栏控制器），如果有返回，并且有这个类，那viewController添加到导航栏控制权
 中，tab添加的则是导航栏控制器，否则，tab添加的就是一个没有导航栏的viewController
 */
- (NSString *)rootNavigationController;

/**
 子类重写，返回需要加载到tabbar的控制器名称（必须是项目中已经有的控制器）
 */
- (NSArray *)viewControllerNameArray;
    
/**
 子类重写，返回tabbar标题
 */
- (NSArray *)titleArray;
    
/**
 子类重写，返回未选择样式图片
 */
- (NSArray *)iconArray;

/**
 子类重写，返回选择样式图片
 */
- (NSArray *)selectedIconArray;

@end
