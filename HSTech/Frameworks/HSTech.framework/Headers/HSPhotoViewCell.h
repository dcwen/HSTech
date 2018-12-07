//
//  HSPhotoViewCell.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/8.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSPhotoModel.h"

@class HSPhotoViewCell;
@protocol HSPhotoViewCellDelegate <NSObject>

//- (void)didCameraClick;
- (void)cellDidSelectedBtnClick:(HSPhotoViewCell *)cell Model:(HSPhotoModel *)model;

@end

@interface HSPhotoViewCell : UICollectionViewCell
@property (weak, nonatomic) id<HSPhotoViewCellDelegate> delegate;
@property (strong, nonatomic) HSPhotoModel *model;
@property (weak, nonatomic, readonly) UIImageView *imageView;
@property (weak, nonatomic, readonly) UIView *maskView;
@property (weak, nonatomic, readonly) UIButton *selectBtn;
@end
