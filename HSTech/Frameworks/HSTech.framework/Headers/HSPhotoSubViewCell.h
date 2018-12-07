//
//  HSPhotoSubViewCell.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/17.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HSPhotoSubViewCellDelegate <NSObject>

- (void)cellDidDeleteClcik:(UICollectionViewCell *)cell;

@end

@class HSPhotoModel;
@interface HSPhotoSubViewCell : UICollectionViewCell
@property (weak, nonatomic) id<HSPhotoSubViewCellDelegate> delegate;
@property (weak, nonatomic, readonly) UIImageView *imageView;
@property (strong, nonatomic) HSPhotoModel *model;
@end
