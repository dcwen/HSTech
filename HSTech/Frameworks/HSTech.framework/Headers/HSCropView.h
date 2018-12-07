//
//  HSCropView.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVFoundation.h>

@interface HSCropView : UIView

@property (nonatomic) UIImage *image;
@property (nonatomic, readonly) UIImage *croppedImage;
@property (nonatomic, readonly) CGRect zoomedCropRect;
@property (nonatomic, readonly) CGAffineTransform rotation;
@property (nonatomic, readonly) BOOL userHasModifiedCropArea;

@property (nonatomic) BOOL keepingCropAspectRatio;
@property (nonatomic) CGFloat cropAspectRatio;

@property (nonatomic) CGRect cropRect;
@property (nonatomic) CGRect imageCropRect;

@property (nonatomic) CGFloat rotationAngle;

@property (nonatomic, weak, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;

- (void)resetCropRect;
- (void)resetCropRectAnimated:(BOOL)animated;

- (void)setRotationAngle:(CGFloat)rotationAngle snap:(BOOL)snap;

@property (nonatomic,assign) UIColor *overlayViewColor;//add by pzz,设置周围四view着色
-(void)addImageView_rotation:(CGFloat)rotationAngle;//add by pzz,手动增加设置期图片的旋转
//@property (nonatomic) PECropRectView *cropRectView;//放置外部可访问？

@end
