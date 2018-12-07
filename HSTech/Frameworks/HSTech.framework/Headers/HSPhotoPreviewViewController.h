//
//  HSPhotoPreviewViewController.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/9.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPhotoManager.h"

@protocol HSPhotoPreviewViewControllerDelegate <NSObject>

- (void)didSelectedClick:(HSPhotoModel *)model AddOrDelete:(BOOL)state;
- (void)previewDidNextClick;

@end

@interface HSPhotoPreviewViewController : UIViewController<UINavigationControllerDelegate>
@property (weak, nonatomic) id<HSPhotoPreviewViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *modelList;
@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) HSPhotoManager *manager;
@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (assign, nonatomic) BOOL selectedComplete;
- (void)selectClick;
@end
