//
//  HSYearViewController.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/17.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YearViewControllerDelegate <NSObject>

@optional
-(void)yearTableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath cellText:(NSString *)cellText;

@end

@interface HSYearViewController : UITableViewController

/** 选中状态的color */
@property (nonatomic, strong) UIColor *selectColor;

// 根据时间更新tableview
-(void) refreshControlWithCellText: (NSString *)year;

/** 代理 */
@property (nonatomic, assign) id<YearViewControllerDelegate> delegate;

@end

