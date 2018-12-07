//
//  UILabel+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HS)

/**
 初始化
 
 *  @param text            文本
 *  @param textColor       文本颜色
 *  @param font            字体 */
+ (UILabel *)hs_labelWithText:(NSString *)text textColor:(UIColor *)textColor font:(UIFont *)font;

/**
 初始化

 *  @param frame           大小
 *  @param text            文本
 *  @param textColor       文本颜色
 *  @param font            字体 */
+ (UILabel *)hs_labelWithFrame:(CGRect)frame text:(NSString *)text textColor:(UIColor *)textColor font:(UIFont *)font;

/**
 *  初始化
 *
 *  @param frame           大小
 *  @param text            文本
 *  @param textColor       文本颜色
 *  @param font            字体
 *  @param textAlignment   文本对齐方式
 *  @param backgroundColor 背景颜色
 *
 *  @return 实例
 */
+ (UILabel *)hs_labelWithFrame:(CGRect)frame text:(NSString *)text textColor:(UIColor *)textColor font:(UIFont *)font textAlignment:(NSTextAlignment)textAlignment backgroundColor:(UIColor *)backgroundColor;

/**
 *  创建自适应高度的label，frame的高度将会被忽略
 *
 *  @param frame         大小
 *  @param text          文本
 *  @param textColor     文本颜色
 *  @param font          字体
 *  @param textAlignment 文本对齐方式
 *
 *  @return 实例
 */
+ (UILabel *)hs_labelAdaptionWithFrame:(CGRect)frame text:(NSString *)text textColor:(UIColor *)textColor font:(UIFont *)font textAlignment:(NSTextAlignment)textAlignment;

@end

#pragma mark - 对齐样式

@interface UILabel (VerticalAlign)

/**
 *  顶部对齐
 */
- (void)hs_alignTop;

/**
 *  底部对齐
 */
- (void)hs_alignBottom;

@end

@interface UILabel (FormattedText)


/**
 设置从某个字符串开始到后面的颜色

 @param textColor 颜色
 @param location  开始位置
 */
- (void)hs_setTextColor:(UIColor *)textColor fromStringLocation:(NSUInteger)location;

/**
 *  设置某个范围内字符串颜色
 *
 *  @param textColor 颜色
 */
- (void)hs_setTextColor:(UIColor *)textColor range:(NSRange)range;


/**
 *  设置某个范围内字符串字体
 *
 */
- (void)hs_setFont:(UIFont *)font range:(NSRange)range;

/**
 *  设置行距
 *
 *  @param space 行距
 */
- (void)hs_setLineSpace:(CGFloat)space;

/**
 设置首行缩进，设置text后调用

 @param indent 缩进距离
 */
- (void)hs_setFirstLineHeadIndent:(CGFloat)indent;

/**
 *  设置某个字符串颜色
 *
 *  @param textColor 颜色
 *  @param subString 字符串
 */
- (void)hs_setTextColor:(UIColor *)textColor subString:(NSString *)subString;

/**
 *  设置某个字符串字体
 *
 *  @param textFont 字体
 *  @param subString 字符串
 */
- (void)hs_setTextFont:(UIFont *)textFont subString:(NSString *)subString;

/**
 给label的文字添加下滑线
 */
- (void)hs_addUnderLine;

/**
 给label的文字添加中滑线
 */
- (void)hs_addCenterLine;

/**
 获取内容高度

 @return 内容高度
 */
- (CGFloat)hs_contentHeight;

/**
 获取内容宽度

 @return 内容宽度
 */
- (CGFloat)hs_contentWeigh;

/**
 尾部添加字符串

 @param addString 要添加的字符串
 */
- (void)hs_headBaseStringAddString:(NSString *)addString;

@property (nonatomic, copy) NSString *hs_headBaseString;

@end

@interface UILabel (hs_ShopCart)

- (void)hs_shopCartNumIncrease;

- (void)hs_shopCartNumReduce;

@end

@interface UILabel (hs_timer)


/**
 设置倒计时显示

 @param time 倒计时总秒数
 */
- (void)hs_startCountDownWithTime:(NSInteger)time;

@end
