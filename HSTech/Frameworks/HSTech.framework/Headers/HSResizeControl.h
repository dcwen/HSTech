//
//  HSResizeControl.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol HSResizeControlViewDelegate;

@interface HSResizeControl : UIView

@property (nonatomic, weak) id<HSResizeControlViewDelegate> delegate;
@property (nonatomic, readonly) CGPoint translation;

@end

@protocol HSResizeControlViewDelegate <NSObject>

- (void)resizeControlViewDidBeginResizing:(HSResizeControl *)resizeControlView;
- (void)resizeControlViewDidResize:(HSResizeControl *)resizeControlView;
- (void)resizeControlViewDidEndResizing:(HSResizeControl *)resizeControlView;

@end
