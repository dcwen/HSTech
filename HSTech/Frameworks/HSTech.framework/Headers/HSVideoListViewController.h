//
//  HSVideoListViewController.h
//  HSDemo
//
//  Created by CWen、文 on 2017/3/14.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSVideoConfig.h"
@class HSVideoModel;
/*!
 *  视频列表
 */
@interface HSVideoListViewController : NSObject

@property (nonatomic, strong, readonly) UIView *actionView;

@property (nonatomic, copy) void(^selectBlock)(HSVideoModel *);

@property (nonatomic, copy) void(^didCloseBlock)(void);

- (void)showAnimationWithType:(HSVideoViewShowType)showType;

@end
