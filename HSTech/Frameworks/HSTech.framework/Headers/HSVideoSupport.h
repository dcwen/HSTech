//
//  HSVideoSupport.h
//  HSDemo
//
//  Created by CWen、文 on 2017/3/14.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSVideoConfig.h"
@class HSVideoModel;

//************* 录视频 顶部 状态 条 ****************
@interface HSStatusBar : UIView

- (instancetype)initWithFrame:(CGRect)frame style:(HSVideoViewShowType)style;

- (void)addCancelTarget:(id)target selector:(SEL)selector;

@property (nonatomic, assign) BOOL isRecoding;

@end


//************* 关闭的下箭头按钮 ****************
@interface HSCloseBtn : UIButton

@property (nonatomic,strong) NSArray *gradientColors; //CGColorRef


@end

//************* 点击录制的按钮 ****************
@interface HSRecordBtn : UIView

- (instancetype)initWithFrame:(CGRect)frame style:(HSVideoViewShowType)style;

@end


//************* 聚焦的方框 ****************
@interface HSFocusView : UIView

- (void)focusing;

@end

//************* 眼睛 ****************
@interface HSEyeView : UIView

@end

//************* 录视频下部的控制条 ****************
typedef NS_ENUM(NSUInteger, HSRecordCancelReason) {
    HSRecordCancelReasonDefault,
    HSRecordCancelReasonTimeShort,
    HSRecordCancelReasonUnknown,
};

@class HSControllerBar;
@protocol HSControllerBarDelegate <NSObject>

@optional

- (void)ctrollVideoDidStart:(HSControllerBar *)controllerBar;

- (void)ctrollVideoDidEnd:(HSControllerBar *)controllerBar;

- (void)ctrollVideoDidCancel:(HSControllerBar *)controllerBar reason:(HSRecordCancelReason)reason;

- (void)ctrollVideoWillCancel:(HSControllerBar *)controllerBar;

- (void)ctrollVideoDidRecordSEC:(HSControllerBar *)controllerBar;

- (void)ctrollVideoDidClose:(HSControllerBar *)controllerBar;

- (void)ctrollVideoOpenVideoList:(HSControllerBar *)controllerBar;

@end
//************* 录视频下部的控制条 ****************
@interface HSControllerBar : UIView <UIGestureRecognizerDelegate>

@property (nonatomic, assign) id<HSControllerBarDelegate> delegate;

- (void)setupSubViewsWithStyle:(HSVideoViewShowType)style;

@end

//************************* Video List 控件 **************************

//************* 删除视频的圆形叉叉 ****************
@interface HSCircleCloseBtn : UIButton

@end

//************* 视频列表 ****************
@interface HSVideoListCell:UICollectionViewCell

@property (nonatomic, strong) HSVideoModel *videoModel;

@property (nonatomic, strong) void(^deleteVideoBlock)(HSVideoModel *);

- (void)setEdit:(BOOL)canEdit;

@end

//************* 视频列表的添加 ****************
@interface HSAddNewVideoCell : UICollectionViewCell

@end

