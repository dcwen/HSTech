//
//  UIScrollView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (HS)

/**
 *  初始化
 *
 *  @param frame           大小
 *  @param contentSize     内容大小
 *  @param backgroundColor 背景颜色
 *  @param delegate        代理
 *
 *  @return 实例
 */
+ (UIScrollView *)hs_scrollViewWithFrame:(CGRect)frame contentSize:(CGSize)contentSize backgroundColor:(UIColor *)backgroundColor delegate:(id<UIScrollViewDelegate>)delegate;

@end
