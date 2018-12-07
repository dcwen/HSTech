//
//  UIButton+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (HS)

@property (nonatomic, copy) idBlock actionHandler;


/**
 *  初始化，无图无字
 *
 *  @param frame           大小
 *  @param target          对象
 *  @param action          事件
 *  @param backgroundColor 背景颜色
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action backgroundColor:(UIColor *)backgroundColor;

/**
 *  初始化，背景图片
 *
 *  @param frame           大小
 *  @param target          对象
 *  @param action          事件
 *  @param backgroundImage 背景图片
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action backgroundImage:(UIImage *)backgroundImage;

/**
 *  初始化，文字
 *
 *  @param frame           大小
 *  @param target          对象
 *  @param action          事件
 *  @param title           标题
 *  @param titleColor      标题颜色
 *  @param font            字体
 *  @param backgroundColor 背景颜色
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action title:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont *)font backgroundColor:(UIColor *)backgroundColor;

/**
 *  初始化，背景颜色 + 文字
 *
 *  @param frame           大小
 *  @param target          对象
 *  @param action          事件
 *  @param backgroundColor 背景颜色
 *  @param title           标题
 *  @param titleColor      标题颜色
 *  @param font            字体
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action backgroundColor:(UIColor *)backgroundColor title:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont *)font;

/**
 *  初始化，背景图 + 文字
 *
 *  @param frame           大小
 *  @param target          对象
 *  @param action          事件
 *  @param backgroundImage 背景图片
 *  @param title           标题
 *  @param titleColor      标题颜色
 *  @param font            字体
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action backgroundImage:(UIImage *)backgroundImage title:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont *)font;

/**
 *  初始化，图片 + 文字
 *
 *  @param frame      大小
 *  @param target     对象
 *  @param action     事件
 *  @param image      图片
 *  @param title      标题
 *  @param titleColor 标题颜色
 *  @param font       字体
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action image:(UIImage *)image title:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont *)font;

/**
 *  初始化，图片
 *
 *  @param frame  大小
 *  @param target 对象
 *  @param action 事件
 *  @param image  图片
 *
 *  @return 实例
 */
+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target action:(SEL)action image:(UIImage *)image;

+ (UIButton *)hs_buttonWithFrame:(CGRect)frame target:(id)target actionHandler:(idBlock)actionHandler image:(UIImage *)image;

/**
 交换按钮图片和文字的位置，按钮默认图片右边，文字左边；
 */
- (void)hs_exchangeImageAndTitlePositon;


- (void)hs_setImageTopAndTitleBottomWithMarge:(CGFloat)marge;

@end


#pragma mark - 不同状态的背景颜色

@interface UIButton (BackgroundState)

/**
 *  设置不同状态的背景颜色，实际上是设置背景图片
 *
 *  @param backgroundColor 背景颜色
 *  @param state           不同状态
 */
- (void)hs_setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

/**
 *  点击改变选中状态
 */
- (void)hs_changeSelectState;

#pragma mark - 倒数计时按钮

/**
 *  倒计时按钮
 *
 *  @param timeLine 倒计时总时间
 *  @param title    还没倒计时的title
 *  @param subTitle 倒计时中的子名字，如时、分
 *  @param mColor   还没倒计时的颜色
 *  @param color    倒计时中的颜色
 */
- (void)hs_startWithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color completed:(voidBlock)completed;

@end


static const char *UIControl_acceptEventInterval = "UIControl_acceptEventInterval";
static const void *BandNameKey = &BandNameKey;

@interface UIControl (recurClick)

// 设置多少时间间隔内无法重复点击
@property (nonatomic, assign) NSTimeInterval hs_acceptEventInterval;

// 是否忽略点击时间间隔设置
@property (nonatomic, assign) BOOL hs_ignoreEvent;
@end


typedef NS_ENUM(NSUInteger, HSButtonEdgeInsetsStyle) {
    HSButtonEdgeInsetsStyleTop, // image在上，label在下
    HSButtonEdgeInsetsStyleLeft, // image在左，label在右
    HSButtonEdgeInsetsStyleBottom, // image在下，label在上
    HSButtonEdgeInsetsStyleRight // image在右，label在左
};
@interface UIButton (ImageTitleSpacing)
/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(HSButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end

