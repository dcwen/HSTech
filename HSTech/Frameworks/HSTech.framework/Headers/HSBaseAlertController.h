//
//  HSBaseAlertController.h
//  zzjl
//
//  Created by su guangshan on 2018/9/14.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import "HSTech.h"

@interface HSBaseAlertController : HSViewController

/**
 * 弹窗的内容宽度，默认285
 */
@property (nonatomic, assign) CGFloat contentViewWidth;

/**
 * 弹窗的内容高度，默认335
 */
@property (nonatomic, assign) CGFloat contentViewHeight;

/*
 * dismiss 弹窗
 */
- (void)dismiss;

/*
 * 子类重写该方法添加弹窗的内容,不需要设置frame
 */
- (UIView *)createContentView;



@end
