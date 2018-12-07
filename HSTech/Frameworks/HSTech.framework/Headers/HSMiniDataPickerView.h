//
//  HSMiniDataPickerView.h
//  HSTech
//
//  Created by CWen、文 on 2018/11/27.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import "HSTech.h"

@interface HSMiniDataPickerView : UIView

// YES:处于显示状态，NO:处于隐藏状态。
@property (nonatomic, assign, readonly, getter=isVisible) BOOL visible;

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
