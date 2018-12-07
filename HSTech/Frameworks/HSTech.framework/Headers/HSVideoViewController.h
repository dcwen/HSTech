//
//  HSVideoViewController.h
//  HSDemo
//
//  Created by CWen、文 on 2017/3/14.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSVideoConfig.h"
@protocol HSVideoViewControllerDelegate;

// 主类  更多自定义..修改HSVideoConfig.h里面的define
@interface HSVideoViewController : NSObject

@property (nonatomic, strong, readonly) UIView *view;

@property (nonatomic, strong, readonly) UIView *actionView;

// 是否保存到相册
@property (nonatomic, assign) BOOL savePhotoAlbum;

@property (nonatomic, assign) id<HSVideoViewControllerDelegate> delegate;

/**
 显示视频录制界面

 @param showType 视频录制类型（小屏和全屏）
 */
- (void)startAnimationWithType:(HSVideoViewShowType)showType;

//- (void)endAniamtion;

@end

@protocol HSVideoViewControllerDelegate <NSObject>

@required
- (void)videoViewController:(HSVideoViewController *)videoController didRecordVideo:(HSVideoModel *)videoModel;

@optional
- (void)videoViewControllerDidCancel:(HSVideoViewController *)videoController;

@end
