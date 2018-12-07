//
//  HSPhotoDispalyView.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/7.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSPhotoDispalyView : UIView


/**
 展示图片的collectionView
 */
@property (nonatomic, weak) UICollectionView *collectionView;
/**
 *  照片的数量，默认是3张
 */
@property (nonatomic, assign) NSUInteger maxPhotoCount;

// 相片宽度
@property (nonatomic, assign) CGFloat cellWidth;

// cell缩进，默认 UIEdgeInsetsMake(0, 0, 0, 0);
@property (nonatomic, assign) UIEdgeInsets cellEdgeInsets;

// 相片url数据
@property (nonatomic, strong) NSArray *imageUrlArray;

@property (nonatomic, strong) UIImage *placeholderImage;

//@property (nonatomic, assign) BOOL isAllowAddPhoto;
//
//@property (nonatomic, assign) BOOL isHiddenDeleteBtn;

//@property (nonatomic, copy) voidBlock addPhotoBlock;
//
//@property (nonatomic, copy) intergerBlock deletePhotoBlock;
@end
