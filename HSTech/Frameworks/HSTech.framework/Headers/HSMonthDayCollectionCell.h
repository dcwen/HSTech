//
//  HSMonthDayCollectionCell.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/17.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSMonthDayCollectionCell : UICollectionViewCell

/** 月 */
@property (nonatomic, copy) NSString *gregoiainDay;
/** 日 */
@property (nonatomic, copy) NSString *lunarDay;

/** 阳历 */
@property (nonatomic, copy) NSString *gregoiainCalendar;
/** 农历 */
@property (nonatomic, copy) NSString *chineseCalendar;



@end
