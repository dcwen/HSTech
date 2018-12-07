//
//  HSPhotoPreviewView.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/16.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSPhotoPreviewView : UIView

/**
 图片url数组
 */
@property (nonatomic, strong) NSArray *photoUrlArray;

/**
 当前是第几张图片
 */
@property (nonatomic, assign) NSInteger currentIndex;

@end
