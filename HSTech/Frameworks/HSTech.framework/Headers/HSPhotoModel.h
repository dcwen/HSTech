//
//  HSPhotoModel.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/8.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

typedef enum : NSUInteger {
    HSPhotoModelMediaTypePhoto = 0, // 照片
    HSPhotoModelMediaTypeLivePhoto, // 预留的为以后支持LivePhoto做准备
    HSPhotoModelMediaTypePhotoGif,  // gif图
    HSPhotoModelMediaTypeVideo,     // 视频
    HSPhotoModelMediaTypeAudio,     // 预留
    HSPhotoModelMediaTypeCameraPhoto,   // 通过相机拍的照片
    HSPhotoModelMediaTypeCameraVideo,   // 通过相机录制的视频
    HSPhotoModelMediaTypeCamera         // 跳转相机
} HSPhotoModelMediaType;

@interface HSPhotoModel : NSObject

/**
 照片PHAsset对象
 */
@property (strong, nonatomic) PHAsset *asset;

/**
 视频AVAsset对象
 */
@property (strong, nonatomic) AVAsset *avAsset;
@property (strong, nonatomic) AVPlayerItem *playerItem;

/**
 照片类型
 */
@property (assign, nonatomic) HSPhotoModelMediaType type;

/**
 小图
 */
@property (strong, nonatomic) UIImage *thumbPhoto;

/**
 预览照片
 */
@property (strong, nonatomic) UIImage *previewPhoto;

/**
 GIF照片
 */
@property (strong, nonatomic) UIImage *gifImage;

/**
 视频时长
 */
@property (copy, nonatomic) NSString *videoTime;

/**
 选择的下标
 */
@property (assign, nonatomic) NSInteger selectedIndex;

/**
 是否选中
 */
@property (assign, nonatomic) BOOL selected;

/**
 为图片时的下标
 */
@property (assign, nonatomic) NSInteger photoIndex;

/**
 为视频时的下标
 */
@property (assign, nonatomic) NSInteger videoIndex;

/**
 照片在相册列表里的下标
 */
@property (assign, nonatomic) NSInteger albumListIndex;

/**
 图片宽高
 */
@property (assign, nonatomic) CGSize imageSize;

/**
 缩小之后的图片宽高
 */
@property (assign, nonatomic) CGSize endImageSize;

/**
 拍照之后的唯一标示
 */
@property (copy, nonatomic) NSString *cameraIdentifier;

/**
 通过相机摄像的视频URL
 */
@property (strong, nonatomic) NSURL *videoURL;

/**
 当前图片所在相册的下标
 */
@property (assign, nonatomic) NSInteger currentAlbumIndex;


/*** 以下属性是使用HSPhotoView时自定义转场动画时所需要的属性 ***/

/**
 选完点下一步之后在collectionView上的图片数组下标
 */
@property (assign, nonatomic) NSInteger endIndex;

/**
 选完点下一步之后在collectionView上的下标
 */
@property (assign, nonatomic) NSInteger endCollectionIndex;

@end
