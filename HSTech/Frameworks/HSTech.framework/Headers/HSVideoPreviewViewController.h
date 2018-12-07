//
//  HSVideoPreviewViewController.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/9.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPhotoModel.h"
#import "HSPhotoManager.h"

@protocol HSVideoPreviewViewControllerDelegate <NSObject>

- (void)previewVideoDidSelectedClick:(HSPhotoModel *)model;
- (void)previewVideoDidNextClick;

@end

@interface HSVideoPreviewViewController : UIViewController<UINavigationControllerDelegate>
@property (assign, nonatomic) BOOL isTouch;
@property (weak, nonatomic) id<HSVideoPreviewViewControllerDelegate> delegate;
@property (strong, nonatomic) HSPhotoModel *model;
@property (strong, nonatomic) HSPhotoManager *manager;
@property (strong, nonatomic) UIView *maskView;
@property (strong, nonatomic) AVPlayer *playVideo;
@property (strong, nonatomic) UIButton *playBtn;
@property (assign, nonatomic) BOOL isCamera;
@property (assign, nonatomic) BOOL selectedComplete;
- (void)selectClick;
@end
