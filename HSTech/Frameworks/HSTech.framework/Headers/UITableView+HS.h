//
//  UITableView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (HS)

/**
 *  初始化
 *
 *  @param frame          大小
 *  @param tableViewStyle 表格样式
 *  @param delegate       代理
 *  @param dataSource     数据源
 *
 *  @return 实例
 */
+ (UITableView *)hs_tableViewWithFrame:(CGRect)frame tableViewStyle:(UITableViewStyle)tableViewStyle delegate:(id<UITableViewDelegate>)delegate dataSourec:(id<UITableViewDataSource>)dataSource;

/**
 *  设置分割线为0，iOS8以上还需要实现代理方法 willDisplayCell
 */
- (void)hs_setSeparatorInsetZero;

/**
 *  从mian bundle里面注册cell nib，nib名字和重用标示符为类名
 *
 *  @param cellClassName 注册cell的类名
 */
- (void)hs_registerNibFromCellClassName:(NSString *)cellClassName;

/**
 *  注册cell类，重用标识符为类名
 *
 *  @param cellClassName 注册cell的类名
 */
- (void)hs_registerClassFromCellClassName:(NSString *)cellClassName;

/**
 *  返回重用cell，重用标示符为cell类名
 *
 *  @param cellClassName 重用cell类名
 *
 *  @return 重用cell
 */
- (id)hs_dequeueReusableCellWithCellClassName:(NSString *)cellClassName;

/**
 *  返回重用cell，重用标示符为cell类名
 *
 *  @param cellClassName 重用cell类名
 *  @param indexPath     cell 路径
 *
 *  @return 重用cell
 */
- (id)hs_dequeueReusableCellWithCellClassName:(NSString *)cellClassName forIndexPath:(NSIndexPath *)indexPath;

/**
 
 用于设置tableView的headerView or footerView；
 目的:处理控件使用autolayout布局产生的约束冲突
 
 @param headerView headerView可为空，有则设置
 @param footerView footerView可为空，有则设置
 
 */
- (void)hs_setTableHeaderView:(UIView *)headerView footerView:(UIView *)footerView;

@end

@protocol UITableViewRefreshHandlerDelegate <NSObject>

@optional

- (void)tableViewRefreshDataHandle:(UITableView *)tableView;

@end

@interface UITableView (hs_Refresh) //Refresh

@property (nonatomic, assign, readonly) BOOL isRefreshing;

// 第几页
@property (nonatomic, assign) NSUInteger pageNo;

// 每页多少数据
@property (nonatomic, assign) NSUInteger pageSize;

// 剩余多少个data时开始预加载
@property (nonatomic, assign) NSUInteger preloadMinCount;

// 数据源数组
@property (nonatomic, strong) NSArray *refreshDataSource;


/**
 添加下拉刷新控件

 @param refreshHandler  刷新代理
 @param beginRefreshing 是否立即刷新
 */
- (void)hs_addHeaderHandleEvent:(id<UITableViewRefreshHandlerDelegate>)refreshHandler beginRefreshing:(BOOL)beginRefreshing;

/**
 添加上拉加载更多控件

 @param refreshHandler 刷新代理
 */
- (void)hs_addFooterHandleEvent:(id<UITableViewRefreshHandlerDelegate>)refreshHandler;

/**
 预加载

 @param currentIndex 当前数据索引
 */
- (void)hs_preloadDataWithCurrentIndex:(NSInteger)currentIndex;


/**
 设置数据源方法

 @param dataSource 数据源数组
 */
- (void)hs_setRefreshDataSource:(NSArray *)dataSource;

- (void)hs_endRefresh;

@end
