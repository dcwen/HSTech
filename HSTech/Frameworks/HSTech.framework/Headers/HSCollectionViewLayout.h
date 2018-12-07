//
//  HSCollectionViewLayout.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/7.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef CGFloat(^HeightBlock)(NSIndexPath *indexPath , CGFloat width);

@interface HSCollectionViewLayout : UICollectionViewLayout


// 透明时用这个属性(保证collectionView 不会被遮挡, 也不会向下移)
// self.edgesForExtendedLayout = UIRectEdgeNone;
// 不透明时用这个属性
// self.extendedLayoutIncludesOpaqueBars = YES;


/**
 *  列数
 */
@property (nonatomic, assign) NSInteger lineNumber;
/**
 *  行间距
 */
@property (nonatomic, assign) CGFloat rowSpacing;
/**
 *  列间距
 */
@property (nonatomic, assign) CGFloat lineSpacing;
/**
 *  内边距
 */
@property (nonatomic, assign) UIEdgeInsets sectionInset;

/**
 *  对象方法
 *
 *  @param block 在block中最后要返回一个item的高度
 */
- (void)computeIndexCellHeightWithWidthBlock:(CGFloat(^)(NSIndexPath *indexPath , CGFloat width))block;

@end
