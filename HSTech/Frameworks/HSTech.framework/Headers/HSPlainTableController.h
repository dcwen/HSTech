//
//  HSPlainTableController.h
//  HSTech
//
//  Created by CWen、文 on 2018/7/26.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import "HSViewController.h"

@interface HSPlainTableController : HSViewController <UITableViewDelegate, UITableViewDataSource, UITableViewRefreshHandlerDelegate>

@property (nonatomic, strong) UITableView *tableView;

// 设置 automaticallyAdjustsScrollViewInsets 功能，模式是YES
@property (nonatomic, assign) BOOL automaticallyAdjustInsets;

@end
