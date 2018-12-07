//
//  UIView+badgeView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/8.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSBadgePositionType)
{
    HSBadgePositionTypeUpperRight = 0, 
    HSBadgePositionTypeRight
};

typedef NS_ENUM(NSUInteger, HSBadgeStyle)
{
    HSBadgeStyleRedDot = 0,          /* red dot style */
    HSBadgeStyleNumber,              /* badge with number */
    HSBadgeStyleNew                  /* badge with a fixed text "new" */
};

typedef NS_ENUM(NSUInteger, HSBadgeAnimType)
{
    HSBadgeAnimTypeNone = 0,         /* without animation, badge stays still */
    //HSBadgeAnimTypeRotate,           /* rotate effect */
    HSBadgeAnimTypeScale,
    HSBadgeAnimTypeShake,            /* shake around top anchor point */
    HSBadgeAnimTypeBreathe           /* breathing light effect, which makes badge more apparent */
};

@interface UIView (badgeView)

/**
 提示label
 */
@property (nonatomic, strong) UILabel *badge;

/**
 提示label的背景颜色，默认红色
 */
@property (nonatomic, strong) UIColor *badgeBgColor;

/**
 提示label的字体颜色，默认白色
 */
@property (nonatomic, strong) UIColor *badgeTextColor;

/**
 提示label的frame
 */
@property (nonatomic, assign) CGRect badgeFrame;

/**
 动画类型
 */
@property (nonatomic, assign) HSBadgeAnimType aniType;


/**
 提示label显示的位置
 */
@property (nonatomic, assign) HSBadgePositionType positionType;

/**
 *  显示badge，默认红色小点，没有动画
 */
- (void)showBadge;

/**
 *  显示badge，自定义badge类型，动画类型，位置
 */
- (void)showBadgeWithStyle:(HSBadgeStyle)style value:(NSInteger)value animationType:(HSBadgeAnimType)aniType position:(HSBadgePositionType)positionType;


/**
 *  清除badge
 */
- (void)clearBadge;


@end
