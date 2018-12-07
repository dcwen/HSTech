//
//  HSCameraViewController.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/13.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPhotoModel.h"

typedef enum : NSUInteger {
    HSCameraTypePhoto = 0,
    HSCameraTypeVideo,
    HSCameraTypePhotoAndVideo
} HSCameraType;

@protocol HSCameraViewControllerDelegate <NSObject>

- (void)cameraDidNextClick:(HSPhotoModel *)model;

@end

@interface HSCameraViewController : UIViewController
@property (weak, nonatomic) id<HSCameraViewControllerDelegate> delegate;
@property (assign, nonatomic) BOOL isVideo;
@property (assign, nonatomic) HSCameraType type;
@end
