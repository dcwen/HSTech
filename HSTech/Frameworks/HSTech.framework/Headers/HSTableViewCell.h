//
//  HSTableViewCell.h
//  HSTech
//
//  Created by CWen、文 on 2018/7/26.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSTableViewCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;


+ (instancetype)cellWithTableView:(UITableView *)tableView identifier:(NSString *)identifier;

/**
 子类可通过重写该方法添加控件
 */
- (void)setupUI;

@end
