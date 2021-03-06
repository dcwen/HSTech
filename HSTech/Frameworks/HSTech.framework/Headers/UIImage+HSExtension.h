//
//  UIImage+HSExtension.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/15.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HSExtension)
+ (UIImage *)animatedGIFWithData:(NSData *)data;
- (UIImage *)animatedImageByScalingAndCroppingToSize:(CGSize)size;
- (UIImage *)normalizedImage;
@end
