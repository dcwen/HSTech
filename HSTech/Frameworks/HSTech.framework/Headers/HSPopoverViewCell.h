//
//  HSPopoverViewCell.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/24.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPopoverAction.h"

UIKIT_EXTERN float const PopoverViewCellHorizontalMargin; ///< 水平间距边距
UIKIT_EXTERN float const PopoverViewCellVerticalMargin; ///< 垂直边距
UIKIT_EXTERN float const PopoverViewCellTitleLeftEdge; ///< 标题左边边距

@interface HSPopoverViewCell : UITableViewCell

@property (nonatomic, assign) HSPopoverViewStyle style;

/*! @brief 标题字体
 */
+ (UIFont *)titleFont;

/*! @brief 底部线条颜色
 */
+ (UIColor *)bottomLineColorForStyle:(HSPopoverViewStyle)style;

- (void)setAction:(HSPopoverAction *)action;

- (void)showBottomLine:(BOOL)show;

@end
