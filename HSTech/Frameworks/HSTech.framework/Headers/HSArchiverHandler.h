//
//  HSArchiverHandler.h
//  metroLearn
//
//  Created by CWen、文 on 2016/12/20.
//  Copyright © 2016年 HSTech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSArchiverHandler : NSObject

/**
 *  数组归档
 *
 *  @param fileName 文件名
 *  @param key 键值
 */
+ (void)writeArray:(NSArray *)array fileName:(NSString *)fileName key:(NSString *)key;

/**
 *  数组解档
 *
 *  @param fileName 文件名
 *  @param key 键值
 */
+ (NSArray *)readArrayWithFileName:(NSString *)fileName key:(NSString *)key;


@end
