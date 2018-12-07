//
//  HSStaticGroupTableVC.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UpdateIconBlock)(UIImage *image);
typedef void(^SwitchClickBlock)(NSIndexPath *index, BOOL isOn);

@class HSSettingItem;
@interface HSStaticGroupTableVC : UITableViewController 

@property (strong, nonatomic) NSMutableArray * groups;/**< 组数组 描述TableView有多少组 */
@property (nonatomic, strong) UIImageView *cellHeadImageView;

@property (nonatomic, assign, getter=isAllCellIndicator) BOOL allCellIndicator;
// 点击头像
@property (nonatomic, copy) voidBlock clickIconAction;
// 点击开关回调
@property (nonatomic, copy) SwitchClickBlock switchClickBlock;

/**
 *  静态cell数据源
 */
- (NSArray *)groupTitles;
- (NSArray *)groupIcons;
- (NSArray *)groupDetials;
- (NSArray *)indicatorIndexPaths; // detailTitle有值时默认不显示箭头，这里可以添加箭头

/**
 重新获取数据源刷新
 */
- (void)setGroups;

/**
 *  获取第indexPath的item数据
 */
- (HSSettingItem *)settingItemInIndexPath:(NSIndexPath *)indexPath;

/**
 *  获取所有的item数据
 */
- (NSArray *)allSettingItems;

/**
 *  给cell的detailTitle重新赋值
 */
- (void)allSettingItemReloadDetailTiltleWithDataSource:(NSArray *)dataSource;

/**
 *  是否显示箭头,默认显示
 */
- (BOOL)isSettingIndicator;

/**
 *  第一组的间距
 */
- (CGFloat)firstGroupSpacing;

/**
 *  头像cell indexPath
 */
- (NSIndexPath *)headImageCellIndexPath;

/**
 *  点击选中效果
 */
- (UITableViewCellSelectionStyle)cellSelectionStyle;

/**
 *  右边的类型是UISwitch的cell路径
 */
- (NSArray *)rightViewSwitchIndexPaths;

/**
 *  右边的类型是ImageView的cell路径
 */
- (NSArray *)rightViewImageViewIndexPaths;

/**
 *  table HeadView 的title
 */
- (NSArray *)tableSectionHeaderViewTitle;

/**
 *  @return tableView的表头
 */
- (UIView *)tableHeaderView;


@end
