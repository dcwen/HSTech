//
//  HSWebViewController.h
//  HSTech
//
//  Created by CWen、文 on 2018/8/24.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import "HSViewController.h"
#import <WebKit/WebKit.h>
#import "HSWebProgressLayer.h"

typedef NS_ENUM(NSUInteger, HSWebLoadViewType) {
    HSWebLoadViewTypeProgressLayer,
    HSWebLoadViewTypeIndicator,
    HSWebLoadViewTypeHudWhite,
    HSWebLoadViewTypeHudBlack
};

@interface HSWebViewController : HSViewController

@property (nonatomic, strong) WKWebView *webView;

@property (nonatomic, copy) NSString *urlStr;

@property (nonatomic, assign) BOOL hideNavigationBar;

// 加载提示框
@property (nonatomic, strong) UIActivityIndicatorView *indicatorView;

// 加载提示框
@property (nonatomic, strong) MBProgressHUD *hud;

// 加载进度条
@property (nonatomic, strong) HSWebProgressLayer *webProgressLayer;

@property (nonatomic, assign) HSWebLoadViewType webLoadViewType;

@property (nonatomic, copy) NSString *urlString;

@property (nonatomic, copy) NSString *htmlName;

@property (nonatomic, copy) NSString *shareUrl;

@property (nonatomic, copy) NSString *shareTitle;

// 显示加载中视图
- (void)showLoadingView;

// 隐藏加载中视图
- (void)hideLoadingViewWithError:(NSError *)error;

@end
