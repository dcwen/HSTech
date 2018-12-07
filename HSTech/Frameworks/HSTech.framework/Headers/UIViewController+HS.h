//
//  UIViewController+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (HS)

@end

@interface UIViewController (NavigationItem)


@end

@interface UIViewController (Create)

+ (instancetype)hs_create;

/**
 *  从storyBoard创建viewController
 *
 *  @param sbName     stroyBoard名字
 *  @param identifier viewController标识符
 *
 *  @return viewController对象
 */
+ (id)hs_createFromStoryboardName:(NSString *)sbName WithIdentifier:(NSString *)identifier;

/**
 *  从storyBoard创建viewController，viewController标识符为控制器类名
 *
 *  @param sbName stroyBoard名字
 *
 *  @return viewController对象
 */
+ (id)hs_createFromStoryboardName:(NSString *)sbName;

@end

@interface UIViewController  (BarButtonItemOffset);

// offset大于0往右偏移
- (NSArray *)rightBarButtonItemsWithOffSetBarButtonItem:(UIBarButtonItem *)barButtomItem Offset:(CGFloat)offset;

- (NSArray *)leftBarButtonItemsWithOffSetBarButtonItem:(UIBarButtonItem *)barButtomItem Offset:(CGFloat)offset;

@end


/*-------------拦截导航栏返回按钮点击事件----------------*/
@protocol BackButtonHandlerProtocol <NSObject>
@optional
// 重写下面的方法以拦截导航栏返回按钮点击事件，返回 YES 则 pop，NO 则不 pop
- (BOOL)navigationShouldPopOnBackButton;

@end

@interface UIViewController (BackButtonHandler) <BackButtonHandlerProtocol>

@end
/*-------------拦截导航栏返回按钮点击事件----------------*/




