//
//  HSDatePickerView.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/27.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSMiniDataPickerView.h"

/**
 *  日期选择器显示模式。
 */
typedef NS_ENUM(NSInteger, HSDatePickerViewShowModel) {
    HSDatePickerViewShowModelDefalut, //显示年，月，日，时，分。
    HSDatePickerViewShowModelYearMonthDayHour, //显示年，月，日，时。
    HSDatePickerViewShowModelYearMonthDay, //显示年，月，日。
    HSDatePickerViewShowModelYearMonth,//显示年，月。
    HSDatePickerViewShowModelYearMonthDayHourMinuteSecond //显示年，月，日，时，分，秒。
};

/**
 *  日期选择器时间范围。
 */
typedef NS_ENUM(NSInteger, HSDatePickerViewDateRangeModel) {
    HSDatePickerViewDateRangeModelCurrent, //最大时间为当前系统时间。用途：例如选择生日的时候不可能大于当前时间。
    HSDatePickerViewDateRangeModelFuture, // 最小时间为当前时间
    HSDatePickerViewDateRangeModelCustom //自定义时间范围。可通过下面的属性minYear和maxYear设定。
};

@class HSDatePickerView;
@protocol HSDatePickerViewDelegate <NSObject>

- (void)datePickerView:(HSDatePickerView *)datePickerView didSelectDate:(NSDate *)date;

@end

@interface HSDatePickerView : UIView

// 时间列表最小年份，不能大于最大年份。默认为1970年。
@property (nonatomic, assign) NSInteger minYear;

// 时间列表最大年份，不能小于最小年份。默认为当前年份。注意：仅当属性datePickerViewDateRangeModel的值为PTXDatePickerViewDateRangeModelCustom时才有效。
@property (nonatomic, assign) NSInteger maxYear;

// 从现在开始后的时间，注意：仅当属性datePickerViewDateRangeModel的值为HSDatePickerViewDateRangeModelFuture时才有效
@property (nonatomic, strong) NSDate *maxDate;

// YES:处于显示状态，NO:处于隐藏状态。
@property (nonatomic, assign, readonly, getter=isVisible) BOOL visible;

// 日期显示模式，默认为PTXDatePickerViewShowModelDefalut。
@property (nonatomic, assign) HSDatePickerViewShowModel datePickerViewShowModel;

// 时间范围模式，默认为PTXDatePickerViewDateRangeModelCurrent。
@property (nonatomic, assign) HSDatePickerViewDateRangeModel  datePickerViewDateRangeModel;

@property (nonatomic, assign) id<HSDatePickerViewDelegate> delegate;

/**
 *  显示时间选择器。
 *
 *  @param date 初始显示日期，传nil则默认显示当前日期。
 *  @param animation YES:有动画，NO:无动画。
 */
- (void)showViewWithDate:(NSDate *)date animation:(BOOL)animation selectDate:(void(^)(NSDate *date))selectDate;

/**
 *  隐藏时间选择器。
 *
 *  @param animation YES:有动画，NO:无动画。
 */
- (void)hideViewWithAnimation:(BOOL)animation;

@end
