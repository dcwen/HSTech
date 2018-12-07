//
//  HSPagedFlowView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NewPagedFlowViewDataSource;
@protocol NewPagedFlowViewDelegate;

/******************************
 
 页面滚动的方向分为横向和纵向
 
 Version 1.0:
 目的:实现类似于选择电影票的效果,并且实现无限/自动轮播
 
 特点:1.无限轮播;2.自动轮播;3.电影票样式的层次感;4.非当前显示view具有缩放和透明的特效
 
 问题:考虑到轮播图的数量不会太大,暂时未做重用处理;对设备性能影响不明显,后期版本会考虑添加重用标识模仿tableview的重用
 
 ******************************/

typedef NS_ENUM(NSUInteger, HSPagedFlowViewOrientation){
    HSPagedFlowViewOrientationHorizontal = 0,
    HSPagedFlowViewOrientationnVertical
};

@interface HSPagedFlowView : UIView

/**
 *  滚动方向，默认为横向
 */
@property (nonatomic,assign) HSPagedFlowViewOrientation orientation;

/**
 *  基础滚动视图
 */
@property (nonatomic, strong) UIScrollView *scrollView;

/**
 *  是否需要刷新
 */
@property (nonatomic,assign) BOOL needsReload;

/**
 *  一页的尺寸
 */
@property (nonatomic,assign) CGSize pageSize;
/**
 *  总页数
 */
@property (nonatomic,assign) NSInteger pageCount;

/**
 *  所有的cell
 */
@property (nonatomic,strong) NSMutableArray *cells;

/**
 *  可见的范围
 */
@property (nonatomic,assign) NSRange visibleRange;

/**
 *  如果以后需要支持reuseIdentifier，这边就得使用字典类型了
 */
@property (nonatomic,strong) NSMutableArray *reusableCells;

@property (nonatomic,assign)  id<NewPagedFlowViewDataSource> dataSource;
@property (nonatomic,assign)  id<NewPagedFlowViewDelegate> delegate;

/**
 *  指示器
 */
@property (nonatomic,retain)  UIPageControl *pageControl;

/**
 *  非当前页的透明比例
 */
@property (nonatomic, assign) CGFloat minimumPageAlpha;

/**
 *  非当前页的缩放比例
 */
@property (nonatomic, assign) CGFloat minimumPageScale;

/**
 *  是否开启自动滚动,默认为开启
 */
@property (nonatomic, assign) BOOL isOpenAutoScroll;

/**
 *  是否开启无限轮播,默认为开启
 */
@property (nonatomic, assign) BOOL isCarousel;

/**
 *  当前是第几页
 */
@property (nonatomic, assign, readonly) NSInteger currentPageIndex;

/**
 *  定时器
 */
@property (nonatomic, weak) NSTimer *timer;

/**
 *  自动切换视图的时间,默认是5.0
 */
@property (nonatomic, assign) CGFloat autoTime;

/**
 *  原始页数
 */
@property (nonatomic, assign) NSInteger orginPageCount;

/**
 *  刷新视图
 */
- (void)reloadData;

/**
 *  获取可重复使用的Cell
 *
 */
- (UIView *)dequeueReusableCell;

/**
 *  滚动到指定的页面
 */
- (void)scrollToPage:(NSUInteger)pageNumber;


/**
 *  关闭定时器,关闭自动滚动
 */
- (void)stopTimer;

@end


@protocol  NewPagedFlowViewDelegate<NSObject>

/**
 *  单个子控件的Size
 *
 */
- (CGSize)sizeForPageInFlowView:(HSPagedFlowView *)flowView;

@optional
/**
 *  滚动到了某一列
 *
 */
- (void)didScrollToPage:(NSInteger)pageNumber inFlowView:(HSPagedFlowView *)flowView;

/**
 *  点击了第几个cell
 *
 *  @param subView 点击的控件
 *  @param subIndex    点击控件的index
 */
- (void)didSelectCell:(UIView *)subView withSubViewIndex:(NSInteger)subIndex;

@end


@protocol NewPagedFlowViewDataSource <NSObject>

/**
 *  返回显示View的个数
 *
 */
- (NSInteger)numberOfPagesInFlowView:(HSPagedFlowView *)flowView;

/**
 *  给某一列设置属性
 *
 */
- (UIView *)flowView:(HSPagedFlowView *)flowView cellForPageAtIndex:(NSInteger)index;

@end
