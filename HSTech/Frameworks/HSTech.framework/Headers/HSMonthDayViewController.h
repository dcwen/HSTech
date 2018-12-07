//
//  HSMonthDayViewController.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/17.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSMonthDayViewController;
@protocol MonthAndDayControllerDelegate <NSObject>

@optional
-(void) monthAndDayController:(HSMonthDayViewController *)controller didSelectIndexPath:(NSIndexPath *)indexPath GregoiainCalendar:(NSString *)gregoiainCalendar chineseCalendar:(NSString *)chineseCalendar;

@end

@interface HSMonthDayViewController : UICollectionViewController

/** 选中状态的color */
@property (nonatomic, strong) UIColor *selectColor;

-(instancetype)initWithFrame:(CGRect)frame;

/** 代理 */
@property (nonatomic, assign) id<MonthAndDayControllerDelegate> delegate;

//根据时间更新collection
-(void)refreshControlWithYear:(NSString *)year month:(NSString *)month day:(NSString *)day;

@end
