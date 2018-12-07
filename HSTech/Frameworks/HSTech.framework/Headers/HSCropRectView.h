//
//  HSCropRectView.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol HSCropRectViewDelegate;

@interface HSCropRectView : UIView

@property (nonatomic, weak) id<HSCropRectViewDelegate> delegate;
@property (nonatomic) BOOL showsGridMajor;
@property (nonatomic) BOOL showsGridMinor;

@property (nonatomic) BOOL keepingAspectRatio;

@end

@protocol HSCropRectViewDelegate <NSObject>

- (void)cropRectViewDidBeginEditing:(HSCropRectView *)cropRectView;
- (void)cropRectViewEditingChanged:(HSCropRectView *)cropRectView;
- (void)cropRectViewDidEndEditing:(HSCropRectView *)cropRectView;

@end
