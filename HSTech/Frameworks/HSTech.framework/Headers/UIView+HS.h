//
//  UIView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (HS) <UIWebViewDelegate>

/**
 *  初始化
 *
 *  @param rect      大小
 *  @param backColor 背景颜色
 *
 *  @return 实例
 */
+ (UIView *_Nullable)hs_viewWithFrame:(CGRect)rect backColor:(UIColor *_Nullable)backColor;

/**
 *  将视图转为图片
 *
 *  @return 图片
 */
- (UIImage *_Nullable)hs_toImage;

/**
 *  拨打电话号码，弹出提示框
 *
 *  @param phoneNumber 电话号码
 */
- (void)telWithPhoneNumber:(NSString *_Nullable)phoneNumber;

/**
 *  重设x起点
 *
 *  @param x        新的x坐标
 *  @param animated 是否允许动画
 */
- (void)hs_resetOriginX:(float)x animated:(BOOL)animated;

/**
 *  重设y起点
 *
 *  @param y        新的y坐标
 *  @param animated 是否允许动画
 */
- (void)hs_resetOriginY:(float)y animated:(BOOL)animated;

@end


#pragma mark - 圆角

@interface UIView (CornerRadius)

/**
 *  设置顶部两个圆角
 *
 *  @param radii 圆角大小
 */
- (void)hs_setUpRadii:(float)radii borderWidth:(float)borderWidth borderColor:(UIColor *_Nullable)borderColor;

/**
 *  设置底部两个圆角
 *
 *  @param radii 圆角大小
 */
- (void)hs_setDownRadii:(float)radii borderWidth:(float)borderWidth borderColor:(UIColor *_Nullable)borderColor;

/**
 *  设置四个圆角大小，边框宽度，边框颜色，-1 和 nil表示不设置
 *
 *  @param Radius      圆角大小
 *  @param Width 边框宽度
 *  @param BorderColor 边框颜色
 */
- (void)hs_setCornerRadius:(float)Radius borderWidth:(float)Width borderColor:(UIColor *_Nullable)BorderColor;

/**
 切割虚线圆角
 */
- (void)hs_setDashedCornerRadius:(float)Radius borderWidth:(float)Width borderColor:(UIColor *_Nullable)BorderColor;

@end


#pragma mark - 动画

@interface UIView (Animation)

/**
 *  震动
 */
- (void)hs_shake;

@end

@interface UIView (Layer)


/* The array of CGColorRef objects defining the color of each gradient
 * stop. Defaults to nil. Animatable. */

@property(nullable, copy) NSArray *hs_colors;

/* An optional array of NSNumber objects defining the location of each
 * gradient stop as a value in the range [0,1]. The values must be
 * monotonically increasing. If a nil array is given, the stops are
 * assumed to spread uniformly across the [0,1] range. When rendered,
 * the colors are mapped to the output colorspace before being
 * interpolated. Defaults to nil. Animatable. */

@property(nullable, copy) NSArray<NSNumber *> *hs_locations;

/* The start and end points of the gradient when drawn into the layer's
 * coordinate space. The start point corresponds to the first gradient
 * stop, the end point to the last gradient stop. Both points are
 * defined in a unit coordinate space that is then mapped to the
 * layer's bounds rectangle when drawn. (I.e. [0,0] is the bottom-left
 * corner of the layer, [1,1] is the top-right corner.) The default values
 * are [.5,0] and [.5,1] respectively. Both are animatable. */

@property CGPoint hs_startPoint;
@property CGPoint hs_endPoint;

+ (UIView *_Nullable)hs_gradientViewWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

- (void)hs_setGradientBackgroundWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

/**
 图层设置渐变色
 
 @param fromColor 左边开始颜色
 @param toColor 右边结束颜色
 */
- (void)hs_setGradualChangingColorFromColor:(UIColor *_Nullable)fromColor toColor:(UIColor *_Nullable)toColor;

@end


#pragma mark - 视图坐标扩展

@interface UIView (ViewFrameGeometry)

/**
 *  rect移动到中心点
 *
 *  @param rect   原矩形
 *  @param center 中心点
 *
 *  @return 新的矩形
 */
//CGRect  CGRectMoveToCenter(CGRect rect, CGPoint center);

/// 坐标
@property (assign, nonatomic) CGPoint hs_origin;
/// 大小
@property (assign, nonatomic) CGSize hs_size;

/// x坐标
@property (assign, nonatomic) CGFloat hs_left;
/// y坐标
@property (assign, nonatomic) CGFloat hs_top;

/// x坐标
@property (assign, nonatomic) CGFloat hs_x;
/// y坐标
@property (assign, nonatomic) CGFloat hs_y;

/// 宽度
@property (assign, nonatomic) CGFloat hs_width;
/// 高度
@property (assign, nonatomic) CGFloat hs_height;

/// 右面
@property (assign, nonatomic) CGFloat hs_right;
/// 下面
@property (assign, nonatomic) CGFloat hs_bottom;

/// y中心
@property (assign, nonatomic) CGFloat hs_centerY;

/// x中心
@property (nonatomic, assign) CGFloat hs_centerX;

/// 左下角
@property (assign, nonatomic, readonly) CGPoint hs_bottomLeft;
/// 右下角
@property (assign, nonatomic, readonly) CGPoint hs_bottomRight;
/// 右上角
@property (assign, nonatomic, readonly) CGPoint hs_topRight;


/**
 *  根据传入的子视图与当前视图计算出水平中心开始点
 *
 *  @param subView 子视图
 *
 *  @return 水平中心开始点
 */
- (CGFloat)hs_centerHorizontalWithSubView:(UIView *_Nullable)subView;

/**
 *  根据传入的子视图与当前视图计算出垂直中心开始点
 *
 *  @param subView 子视图
 *
 *  @return 垂直中心开始点
 */
- (CGFloat)hs_centerVerticalWithSubView:(UIView *_Nullable)subView;

/**
 *  根据传入的子视图与当前视图计算出中心点
 *
 *  @param subView 子视图
 *
 *  @return 中心点
 */
- (CGPoint)hs_centerWithSubView:(UIView *_Nullable)subView;


/**
 *  居中增加子视图
 *
 *  @param subView 子视图
 */
- (void)hs_addSubViewToCenter:(UIView *_Nullable)subView;

/**
 *  水平居中增加子视图
 *
 *  @param subView 子视图
 */
- (void)hs_addSubViewToHorizontalCenter:(UIView *_Nullable)subView;

/**
 *  垂直居中增加子视图
 *
 *  @param subView 子视图
 */
- (void)hs_addSubViewToVerticalCenter:(UIView *_Nullable)subView;

@end



#pragma mark - 视图层次扩展 -

@interface UIView (ZOrder)

/**
 *  获取当前视图在父视图中的索引
 *
 *  @return 索引值
 */
- (NSUInteger)hs_getSubviewIndex;

/**
 *  将视图置于父视图最上面
 */
- (void)hs_bringToFront;

/**
 *  将视图置于父视图最下面
 */
- (void)hs_sendToBack;

/**
 *  视图层次上移一层
 */
- (void)hs_bringOneLevelUp;

/**
 *  视图层次下移一层
 */
- (void)hs_sendOneLevelDown;

/**
 *  是否在最上面
 *
 *  @return 最上层视图 → YES
 */
- (BOOL)hs_isInFront;

/**
 *  是否在最下面
 *
 *  @return 最下层视图 → YES
 */
- (BOOL)hs_isAtBack;

/**
 *  视图交换层次
 *
 *  @param swapView 交换的视图
 */
- (void)hs_swapDepthsWithView:(UIView*_Nullable)swapView;

/**
 * 移除所有子控件
 */
- (void)hs_removeAllSubviews;

/**
 * Finds the first descendant view (including this view) that is a member of a particular class.
 */
- (UIView*_Nullable)hs_descendantOrSelfWithClass:(Class _Nullable )cls;

/**
 * Finds the first ancestor view (including this view) that is a member of a particular class.
 */
- (UIView*_Nullable)hs_ancestorOrSelfWithClass:(Class _Nullable )cls;


/**
 获取当前控制器
 */
- (UIViewController *_Nullable)hs_getCurrentVC;

#pragma mark - 视图响应 －

/**
 * 通过设置[self hs_setExclusiveTouch:YES];可以达到同一界面上多个控件接受事件时的排他性，从而避免一些问题。
 */
-(void)hs_exclusiveTouchForAllButtons;

#pragma mark - 视图添加手势操作 -

/**
 添加单击手势回调
 */
- (void)hs_setTapActionWithBlock:(void (^_Nullable)(void))block;

/**
 添加长按手势回调
 */
- (void)hs_setLongPressActionWithBlock:(void (^_Nullable)(void))block;

/**
 添加拖拽手势回调
 */
-(void)hs_setSwipeActionWithBlock:(void (^_Nullable)(void))block;

@end

@interface UIView(Create)


/**
 * create From Nib method , You can pass CGRectNull if you do not want to change the size of View in Nib
 *
 */
+ (id _Nullable )hs_createByFrame:(CGRect)frame;

@end

@interface UIView (Effects)
///**
// *  准备高斯模糊
// */
//- (void)prepareToBlur;
//
///**
// *  添加高斯模糊
// *
// *  @param block 点击模糊的范围触发的事件
// */
//- (void)blur;
//
///**
// *  撤销高斯模糊
// */
//- (void)unBlur;
//
//
/////**
//// *  点击模糊的范围触发的事件
//// */
////- (void)tapBlurView;
//
//
///**
// *  纯色设置高斯模糊
// *
// *  @param blurTintColor 颜色
// */
//- (void) setBlurTintColor:(UIColor *)blurTintColor;


@end

@interface UIView (LayoutConstraintHelper)

- (NSLayoutConstraint*_Nullable)widthConstraint;

- (NSLayoutConstraint*_Nullable)heightConstraint;

- (NSLayoutConstraint*_Nullable)top2SupviewConstraintWithTopLayoutGuideOwner:(UIViewController*_Nullable)controller;

- (NSLayoutConstraint*_Nullable)bottom2SupviewConstraintWithBottomLayoutGuideOwner:(UIViewController*_Nullable)controller;

- (NSLayoutConstraint*_Nullable)left2SupviewConstraint;

- (NSLayoutConstraint*_Nullable)right2SupviewConstraint;

@end

@interface UIView (SelfManager)

@property (nonatomic, copy) idBlock _Nullable tapActionHandler;

@end

/*------------------页面没有数据时可以配置提示的分类-------------*/
@class HSBlankPageView;
@interface UIView (blankPage)

@property (nonatomic, strong) HSBlankPageView * _Nullable blankPageView;


- (void)configBlankPageWithTitle:(NSString *_Nullable)title
                           image:(NSString *_Nullable)image
                         hasData:(BOOL)hasData
                  reloadBtnTitle:(NSString *_Nullable)reloadTitle
                  reloadBtnImage:(NSString *_Nullable)reloadImage
                  reloadBtnBlock:(voidBlock _Nullable )block;

@end

@interface HSBlankPageView : UIView

@property (strong, nonatomic) UIImageView * _Nullable monkeyView;
@property (strong, nonatomic) UILabel * _Nullable tipLabel;
@property (strong, nonatomic) UIButton * _Nullable reloadButton;
@property (copy, nonatomic) voidBlock _Nullable reloadButtonBlock;
@property (copy, nonatomic) void(^ _Nullable loadAndShowStatusBlock)();

- (void)configWithTitle:(NSString *_Nullable)title
                  image:(NSString *_Nullable)image
         reloadBtnTitle:(NSString *_Nullable)reloadTitle
         reloadBtnImage:(NSString *_Nullable)reloadImage
         reloadBtnBlock:(void(^_Nullable)(id _Nullable sender))block;

@end
/*------------------页面没有数据时可以配置提示的分类-------------*/


