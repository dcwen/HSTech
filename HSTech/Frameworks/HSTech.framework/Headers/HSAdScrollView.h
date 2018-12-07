//
//  HSAdScrollView.h
//  HSTech
//
//  Created by CWen、文 on 2017/5/10.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSAdScrollView;

typedef enum : NSUInteger {
    HSAdScrollViewStyleNormal,
    HSAdScrollViewStyleTwo,
} HSAdScrollViewStyle;

/** delegate */
@protocol HSAdScrollViewDelegate <NSObject>
- (void)advertScrollView:(HSAdScrollView *)advertScrollView didSelectedItemAtIndex:(NSInteger)index;

@end

@interface HSAdScrollView : UIView

/** delegate_HS */
@property (nonatomic, weak) id<HSAdScrollViewDelegate> delegateAdvertScrollView;

/** HSAdScrollViewStyle */
@property (nonatomic, assign) HSAdScrollViewStyle advertScrollViewStyle;

/** 设置滚动时间间隔(默认 3s) */
@property (nonatomic, assign) CGFloat scrollTimeInterval;

/** 左边提示图片 */
@property (nonatomic, strong) NSString *leftImageString;

/** 右边标题数组，当 HSAdScrollViewStyle 为 HSAdScrollViewStyleTwo, 此标题数组为 topLabel 标题数组 */
@property (nonatomic, strong) NSArray *titles;

/** 左边标志图片数组，只有 HSAdScrollViewStyleTwo 样式时，才有效 */
@property (nonatomic, strong) NSArray *signImages;

/** 左边底部标题数组，只有 HSAdScrollViewStyleTwo 样式时，才有效 */
@property (nonatomic, strong) NSArray *bottomTitles;

/** 标题字体大小(默认 12), 当 HSAdScrollViewStyle 为 HSAdScrollViewStyleTwo, 此 titleFont 为 topLabel 文字颜色 */
@property (nonatomic, strong) UIFont *titleFont;

/** 标题字体颜色(默认 黑色), 当 HSAdScrollViewStyle 为 HSAdScrollViewStyleTwo, 此 titleColor 为 topLabel 文字颜色 */
@property (nonatomic, strong) UIColor *titleColor;

/** 标题字体大小(默认 12), 只有 HSAdScrollViewStyleTwo 样式时，才有效 */
@property (nonatomic, strong) UIFont *bottomTitleFont;

/** 标题字体颜色(默认 黑色), 只有 HSAdScrollViewStyleTwo 样式时，才有效 */
@property (nonatomic, strong) UIColor *bottomTitleColor;

/** 是否显示分割线(默认为 YES) */
@property (nonatomic, assign) BOOL isShowSeparator;
/** 分割线颜色(默认 浅灰色) */

@property (nonatomic, strong) UIColor *separatorColor;

/** 是否自动滚动(默认为 YES，不建议使用此属性，没有什么意义) */
@property (nonatomic, assign) BOOL isAutoScroll;

@end
