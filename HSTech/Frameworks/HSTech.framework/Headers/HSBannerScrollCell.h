//
//  HSBannerScrollCell.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/4.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSBannerScrollCell : UICollectionViewCell

@property (weak, nonatomic) UIImageView *imageView;

@property (copy, nonatomic) NSString *title;

@property (nonatomic, strong) UIColor *titleLabelTextColor;

@property (nonatomic, strong) UIFont *titleLabelTextFont;

@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;

@property (nonatomic, assign) CGFloat titleLabelHeight;

@property (nonatomic, assign) BOOL hasConfigured;

/** 只展示文字轮播 */
@property (nonatomic, assign) BOOL onlyDisplayText;

@end
