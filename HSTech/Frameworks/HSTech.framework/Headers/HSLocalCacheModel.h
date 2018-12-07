//
//  HSLocalCacheModel.h
//  test
//
//  Created by CWen、文 on 2016/11/8.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HSBaseModelReadWriteProtocol <NSCoding,NSCopying>
/**
 *  本地文件路径
 *
 *  @return 本地文件路径
 */
+ (NSString *)filePath;

/**
 *  读取本地
 *
 *  @return model
 */
+ (instancetype)read;

/**
 *  写入本地
 */
- (void)write;

@end


/**
 *  父 Model
 */
@interface HSLocalCacheModel : NSObject<HSBaseModelReadWriteProtocol>


@end
