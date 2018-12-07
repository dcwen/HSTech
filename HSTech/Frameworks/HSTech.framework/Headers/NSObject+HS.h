//
//  NSObject+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/4.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (HS)

// 获取类名字符串
+ (NSString *)hs_className;

// 判断是否是无效数据，多用于在读取接口数据做判断的时候
- (BOOL)hs_isInvalidData;

/**
 swizzle 类方法
 
 @param oriSel 原有的方法
 @param swiSel swizzle的方法
 */
+ (void)swizzleClassMethodWithOriginSel:(SEL)oriSel swizzledSel:(SEL)swiSel;

/**
 swizzle 实例方法
 
 @param oriSel 原有的方法
 @param swiSel swizzle的方法
 */
+ (void)swizzleInstanceMethodWithOriginSel:(SEL)oriSel swizzledSel:(SEL)swiSel;

/**
 判断方法是否在子类里override了
 
 @param cls 传入要判断的Class
 @param sel 传入要判断的Selector
 @return 返回判断是否被重载的结果
 */
- (BOOL)isMethodOverride:(Class)cls selector:(SEL)sel;

/**
 判断当前类是否在主bundle里
 
 @param cls 出入类
 @return 返回判断结果
 */
+ (BOOL)isMainBundleClass:(Class)cls;

/**
 动态创建绑定selector的类
 tip：每当无法找到selectorcrash转发过来的所有selector都会追加到当前Class上
 
 @param aSelector 传入selector
 @return 返回创建的类
 */
+ (Class)addMethodToStubClass:(SEL)aSelector;

/**
 获取顶部控制器
 */
- (UIViewController *)hs_topViewController;

@end
