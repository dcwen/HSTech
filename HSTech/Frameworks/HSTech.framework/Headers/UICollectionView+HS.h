//
//  UICollectionView+HS.h
//  JiuYuanWu
//
//  Created by CWen、文 on 2016/11/11.
//  Copyright © 2016年 雄健. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol UICollectionViewRefreshHandlerDelegate <NSObject>

@optional

- (void)collectionViewRefreshDataHandle:(UICollectionView *)collectionView;

@end

@interface UICollectionView (HS)

@property (nonatomic, assign, readonly) BOOL isRefreshing;

@property (nonatomic, assign) NSUInteger pageNo;

@property (nonatomic, assign) NSUInteger pageSize;

// 剩余多少个data时开始预加载
@property (nonatomic, assign) NSUInteger preloadMinCount;

@property (nonatomic, assign) BOOL isHeaderRefresh;

@property (nonatomic, strong) NSArray *refreshDataSource;

- (void)hs_addHeaderHandleEvent:(id<UICollectionViewRefreshHandlerDelegate>)refreshHandler beginRefreshing:(BOOL)beginRefreshing;

- (void)hs_addFooterHandleEvent:(id<UICollectionViewRefreshHandlerDelegate>)refreshHandler;

/**
 预加载
 
 @param currentIndex 当前数据索引
 */
- (void)hs_preloadDataWithCurrentIndex:(NSInteger)currentIndex;

- (void)hs_setRefreshDataSource:(NSArray *)dataSource;

- (void)hs_endRefresh;


@end
