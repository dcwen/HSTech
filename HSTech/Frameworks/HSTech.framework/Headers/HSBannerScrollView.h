//
//  HSBannerScrollView.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/4.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSBannerModel.h"

@class HSBannerScrollView;
@protocol HSBannerScrollViewDelegate <NSObject>
@optional

/** 点击图片回调 */
- (void)bannerScrollView:(HSBannerScrollView *)bannerScrollView didSelectItemAtIndex:(NSInteger)index model:(HSBannerModel *)model;

/** 图片滚动回调 */
- (void)bannerScrollView:(HSBannerScrollView *)bannerScrollView didScrollToIndex:(NSInteger)index model:(HSBannerModel *)model;

/** 长按图片回调 */
- (void)bannerScrollView:(HSBannerScrollView *)bannerScrollView didLongPressItemAtIndex:(NSInteger)index model:(HSBannerModel *)model;
@end


@interface HSBannerScrollView : UIView

/** 初始轮播图（推荐使用） */
+ (instancetype)bannerScrollViewWithFrame:(CGRect)frame delegate:(id<HSBannerScrollViewDelegate>)delegate placeholderImage:(UIImage *)placeholderImage;

+ (instancetype)bannerScrollViewWithFrame:(CGRect)frame imageURLStringsGroup:(NSArray *)imageURLStringsGroup;


/** 本地图片轮播初始化方式 */
+ (instancetype)bannerScrollViewWithFrame:(CGRect)frame imageNamesGroup:(NSArray *)imageNamesGroup;

/** 本地图片轮播初始化方式2,infiniteLoop:是否无限循环 */
+ (instancetype)bannerScrollViewWithFrame:(CGRect)frame shouldInfiniteLoop:(BOOL)infiniteLoop imageNamesGroup:(NSArray *)imageNamesGroup;


//////////////////////  数据源接口  //////////////////////

/** 网络图片 url string 数组 */
@property (nonatomic, strong) NSArray *imageURLStringsGroup;

/** 每张图片对应要显示的文字数组 */
@property (nonatomic, strong) NSArray *titlesGroup;

/** 本地图片数组 */
@property (nonatomic, strong) NSArray *localizationImageNamesGroup;


//////////////////////  滚动控制接口 //////////////////////
/** 自动滚动时间间隔，默认2s */
@property (nonatomic, assign) CGFloat autoScrollTimeInterval;

/** 是否无限循环,默认Yes */
@property (nonatomic,assign) BOOL infiniteLoop;

/** 是否自动滚动,默认Yes */
@property (nonatomic,assign) BOOL autoScroll;

/** 图片滚动方向，默认为水平滚动 */
@property (nonatomic, assign) UICollectionViewScrollDirection scrollDirection;

@property (nonatomic, strong) id<HSBannerScrollViewDelegate> delegate;

/** block方式监听点击 */
@property (nonatomic, copy) void (^clickItemOperationBlock)(NSInteger currentIndex, HSBannerModel *model);

/** block方式监听滚动 */
@property (nonatomic, copy) void (^itemDidScrollOperationBlock)(NSInteger currentIndex, HSBannerModel *model);


//////////////////////  自定义样式接口  //////////////////////
/** 占位图，用于网络未加载到图片时 */
@property (nonatomic, strong) UIImage *placeholderImage;

/** 是否显示分页控件 */
@property (nonatomic, assign) BOOL showPageControl;

/** 是否在只有一张图时隐藏pagecontrol，默认为YES */
@property(nonatomic) BOOL hidesForSinglePage;

/** 当前滚动点的图片 */
@property (nonatomic, strong) UIImage *currentImage;

/** 其他点的图片 */
@property (nonatomic, strong) UIImage *otherImage;

/** 当前分页控件小圆标颜色 */
@property (nonatomic, strong) UIColor *currentPageDotColor;

/** 其他分页控件小圆标颜色 */
@property (nonatomic, strong) UIColor *pageDotColor;

@end
