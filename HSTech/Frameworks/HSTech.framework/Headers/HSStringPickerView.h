//
//  HSStringPickerView.h
//  HSTech
//
//  Created by CWen、文 on 2018/10/31.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSStringPickerView : UIView

+ (instancetype)stringPickerViewWithStrArray:(NSArray *)strArray;

- (instancetype)initWithStrArray:(NSArray *)strArray;

// 选择后block回调
@property (nonatomic, copy) void(^comfirmBlock)(NSString *selectedValue, NSInteger selectedIndex);

// 确定按钮
@property (nonatomic, weak) UIButton *certainButton;

// YES:处于显示状态，NO:处于隐藏状态。
@property (nonatomic, assign, readonly, getter=isVisible) BOOL visible;

// 选择内容数组
@property (nonatomic, copy, readonly) NSArray *strArray;


// 显示地址选择器
- (void)showWithAnimation:(BOOL)animation;

// 隐藏地址选择器
- (void)hideWithAnimation:(BOOL)animation;

@end
