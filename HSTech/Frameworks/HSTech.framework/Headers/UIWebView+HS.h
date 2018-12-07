//
//  UIWebView+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^WebViewContentFrameBlock)(CGRect frame);

@interface UIWebView (HS) <UIWebViewDelegate>

/**
 *  调用 javascript，即时执行
 *
 *  @param jsString js代码
 */
- (void)hs_evaluatingJavaScript:(NSString *)jsString;

- (void)hs_setFrameAdaptWebViewContent:(WebViewContentFrameBlock)webViewContentFrameBlcok;

@end
