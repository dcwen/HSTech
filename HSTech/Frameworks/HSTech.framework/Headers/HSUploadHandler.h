//
//  HSUploadHandler.h
//  HSTech
//
//  Created by CWen、文 on 2018/12/15.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSNetworkHandler.h"

#pragma mark - 上传文件类

@interface HSUploadFile : NSObject

/**
 *  文件数据
 */
@property (nonatomic, strong) NSData * _Nullable fileData;

/**
 *  服务器接收参数名
 */
@property (nonatomic, copy, nullable) NSString * name;

/**
 *  文件名
 */
@property (nonatomic, copy, nullable) NSString *fileName;

/**
 *  文件类型
 */
@property (nonatomic, copy, nullable) NSString *mimeType;

/**
 *  初始化，文件名默认当前时间
 */
+ (instancetype _Nullable )imageFileWithFileData:(NSData *_Nullable)fileData name:(NSString *_Nullable)name;

@end

@interface HSUploadHandler : HSNetworkHandler

/**
 *  AFHTTPRequestOperationManager对象，负责文件上传
 */
@property (nonatomic, strong) HSHTTPSessionManager * _Nonnull uploadManager;


/**
 上传文件
 
 @param url           请求地址
 @param parameters    参数
 @param file          文件流数组
 @param containerView 网络请求发生的view，hud位于其中心
 @param successBlock  成功回调
 */
- (void)uploadFileWithUrl:(NSString *_Nonnull)url
               parameters:(NSDictionary *_Nullable)parameters
                     file:(NSArray<HSUploadFile *> *_Nullable)file
                     View:(UIView *_Nullable)containerView
             successBlock:(idBlock _Nullable )successBlock;

/**
 上传文件
 
 @param url           请求地址
 @param parameters    参数
 @param file          文件流数组
 @param containerView 网络请求发生的view，hud位于其中心
 @param progress      上传进度
 @param successBlock  成功回调
 */
- (void)uploadFileWithUrl:(NSString *_Nonnull)url
               parameters:(NSDictionary *_Nullable)parameters
                     file:(NSArray<HSUploadFile *> *_Nonnull)file
                     View:(UIView *_Nullable)containerView
                 progress:(nullable void (^)(NSProgress * _Nonnull))progress
             successBlock:(idBlock _Nullable )successBlock;

@end
