//
//  HSBaseTableViewControlle.h
//  HSTech
//
//  Created by CWen、文 on 2016/11/9.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "HSViewController.h"
#import "HSBaseCell.h"
#import "UITableView+HS.h"

@interface HSBaseTableViewController : HSViewController <UITableViewDelegate, UITableViewDataSource, UITableViewRefreshHandlerDelegate>

NS_ASSUME_NONNULL_BEGIN
// 默认rowHeight: 80, 简单样式
@property (nonatomic, strong) UITableView *tableView;

// 默认一组
@property (nonatomic, assign) NSInteger section;

// 基础cell
@property (nonatomic, strong) HSBaseCell *baseCell;

// cell的重用标识字符串
@property (nonatomic, copy) NSString *reuseIdentifier;

// 基础model
@property (nonatomic, strong) HSBaseModel *baseModel;
NS_ASSUME_NONNULL_END

- (void)registerCellWithNibName:(nonnull NSString *)nibName reuseIdentifier:(nullable NSString *)reuseIdentifier;

- (void)registerCellWithClass:(nullable Class)cellClass reuseIdentifier:(nullable NSString *)reuseIdentifier;

@end
