//
//  HSBaseCollectionViewController.h
//  JiuYuanWu
//
//  Created by CWen、文 on 2016/11/11.
//  Copyright © 2016年 雄健. All rights reserved.
//

#import "HSViewController.h"
#import "HSBaseCollecttionCell.h"
#import "UICollectionView+HS.h"

@interface HSBaseCollectionViewController : HSViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewRefreshHandlerDelegate>


@property (nonatomic, strong) UICollectionView *collectionView;

// 默认rowHeight: 120
@property (nonatomic, assign) CGFloat cellHeight;

// 默认一组
@property (nonatomic, assign) NSInteger section;

// 基础cell
@property (nonatomic, strong) HSBaseCollecttionCell *baseCell;

// 基础model
@property (nonatomic, strong) HSBaseModel *baseModel;

// cell的重用标识字符串
@property (nonatomic, copy) NSString *reuseIdentifier;


// 注册cell
- (void)setCellWithNibName:(NSString *)nibName reuseIdentifier:(NSString *)reuseIdentifier;

- (void)setCellWithClass:(Class)classType reuseIdentifier:(NSString *)reuseIdentifier;

// 添加上拉下拉刷新空间，是否立即刷新
- (void)addRrefreshAndBeginrefresh:(BOOL)beginning;

@end
