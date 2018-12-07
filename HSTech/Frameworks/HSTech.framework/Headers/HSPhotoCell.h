//
//  HSPhotoCell.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/7.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSPhotoCell : UICollectionViewCell

@property (nonatomic, weak) UIImageView *imageView;

@property (nonatomic, weak) UIButton *deleteBtn;

@property (nonatomic, assign) BOOL isAllowAddPhoto;

@property (nonatomic, assign) BOOL isHiddenDeleteBtn;

@end
