//
//  HSAddressPickerView.h
//  JiuYuanWu
//
//  Created by CWen、文 on 2016/11/14.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HJAddressType) {
    HJAddressTypeDefault = 0,
    HJAddressTypeProvince,
    HJAddressTypeCity,
    HJAddressTypeArea,
};

@interface HSAddressPickerView : UIView

// 选择地址后block回调省市区
@property (nonatomic, copy) void(^comfirmBlock)(NSString *province, NSString *city, NSString *area);

// 地址类型
@property (nonatomic, assign) HJAddressType addressType;

// 确定按钮
@property (nonatomic, weak) UIButton *certainButton;

// YES:处于显示状态，NO:处于隐藏状态。
@property (nonatomic, assign, readonly, getter=isVisible) BOOL visible;

// 显示地址选择器
- (void)showWithAnimation:(BOOL)animation;

// 隐藏地址选择器
- (void)hideWithAnimation:(BOOL)animation;

@end
