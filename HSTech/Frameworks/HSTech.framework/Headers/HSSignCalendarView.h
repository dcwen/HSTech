//
//  HSSignCalendarView.h
//  HSTech
//
//  Created by CWen、文 on 2016/11/23.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSSignCalendarView : UIView

// 创建对象后先设置date进行日历展示初始化
@property (nonatomic, strong) NSDate *date;

// 选择日期回调
@property (nonatomic, copy) void(^calendarBlock)(NSInteger day, NSInteger month, NSInteger year);

// 已经签到的日期数据源
@property (nonatomic,strong) NSMutableArray *signArray;

// 今天按钮
@property (nonatomic,strong) UIButton *dayButton;

// 星期日期背景色
@property (nonatomic, strong) UIColor *headColor;

// 已经签到的按钮颜色
@property (nonatomic, strong) UIColor *didSignColor;

// 今天按钮颜色
@property (nonatomic, strong) UIColor *todayColor;

// 设置今日签到状态
- (void)setStyle_Today_Signed:(UIButton *)btn;

// 设置今日未签到状态
- (void)setStyle_Today:(UIButton *)btn;

@end
