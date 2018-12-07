//
//  HSViewController+NavigationBar.h
//  HSTech
//
//  Created by CWen、文 on 2017/7/13.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSViewController (NavigationBar)

@property (nonatomic, assign) BOOL hideTopBar;

@property (nonatomic, strong) UIView *topBar;

@property (nonatomic, copy) NSString *topTitle;
@property (nonatomic, strong) UIColor *topBarColor;
@property (nonatomic, strong) UIImage *topBarImage;

@property (nonatomic, strong) UIButton *topBarLeftButton;
@property (nonatomic, strong) NSMutableArray *topBarLeftButtons;
@property (nonatomic, strong) UIButton *topBarRightButton;
@property (nonatomic, strong) NSMutableArray *topBarRightButtons;

//@property (nonatomic, strong) UIView *titleView;

- (void)addTopBar;

@end
