//
//  HSDownloadHandler.h
//  HSTech
//
//  Created by CWen、文 on 2018/12/15.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import "HSTech.h"



@interface HSDownloadHandler : HSNetworkHandler

/**
 *  AFHTTPRequestOperationManager对象，负责管理和调度网络请求
 */
@property (nonatomic, strong) HSHTTPSessionManager *downloadManager;

/**
 *  NSURLSessionDownloadTask对象，负责管理和调度下载任务
 */
@property (nonatomic, strong) NSURLSessionDownloadTask *task;


/**
 *  下载文件操作
 *
 */
- (void)downLoadFileWithUrl:(NSString *)url
                   Progress:(void (^)(NSProgress *downloadProgress))downloadProgressBlock
                destination:(NSURL * (^)(NSURL *targetPath, NSURLResponse *response))destination
          completionHandler:(void (^)(NSURLResponse *response, NSURL *filePath, NSError *error))completionHandler;

@end
