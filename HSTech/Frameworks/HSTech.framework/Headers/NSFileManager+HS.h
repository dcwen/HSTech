//
//  NSFileManager+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSFileManager (HS)

/**
 *  计算文件大小
 *
 *  @param path 文件路径
 *
 *  @return 文件大小
 */
+ (long long)hs_fileSizeAtPath:(NSString *)path;

/**
 *  计算文件夹大小
 *
 *  @param folderPath 文件夹路径
 *
 *  @return 文件夹大小
 */
+ (CGFloat)hs_folderSizeAtPath:(NSString *)folderPath;

/**
 *  清除缓存
 *
 *  @param path 文件路径
 */
+ (void)hs_clearCache:(NSString *)path;

@end
