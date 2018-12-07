//
//  HSNetworkHandler.h
//  zzjl
//
//  Created by CWen、文 on 2018/4/16.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSHTTPSessionManager.h"

#define HSNetworking [HSNetworkHandler new]

/**
 *  请求成功block
 */
typedef void (^APISuccessBlock)(NSDictionary *responseObject);

/**
 *  请求失败block
 */
typedef void (^APIFailureBlock) (NSError *error);

/**
 *  下载完成block
 */
typedef void(^APIDowdLoadFinishedBlock)(NSString *filePath, NSError *error);


@interface HSNetworkHandler : NSObject

/**
 *  AFHTTPRequestOperationManager对象，负责管理和调度网络请求
 */
@property (nonatomic, strong) HSHTTPSessionManager *manager;

/**
 接口请求超时时间
 */
@property (nonatomic, assign) NSTimeInterval requestTimeOut;


/**
 *  AFHTTPRequestOperationManager对象，负责文件上传
 */
@property (nonatomic, strong) HSHTTPSessionManager *uploadManager;
/**
 上传请求超时时间
 */
@property (nonatomic, assign) NSTimeInterval uploadTimeOut;

/**
 *  NSURLSessionDownloadTask对象，负责管理和调度下载任务
 */
@property (nonatomic, strong) NSURLSessionDownloadTask *task;


/**
 *  默认为YES,加载等待view居中
 */
@property (nonatomic, assign) BOOL hudCenter;

/**
 *  加载中提示框
 */
@property (nonatomic, strong) MBProgressHUD *HUD;


/**
 *  下载文件操作
 *
 */
- (void)downLoadFileWithUrl:(NSString *)url
                   Progress:(void (^)(NSProgress *downloadProgress))downloadProgressBlock
                destination:(NSURL * (^)(NSURL *targetPath, NSURLResponse *response))destination
          completionHandler:(void (^)(NSURLResponse *response, NSURL *filePath, NSError *error))completionHandler;


/*----------网络请求类重新整理，不影响之前方法------------------*/
/**
 *  get操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)getRequestWithUrl:(NSString *)url
               parameters:(NSDictionary *)parameters
                     View:(UIView *)containerView
             successBlock:(APISuccessBlock)successBlock
             failureBlock:(APIFailureBlock)failureBlock;

/**
 *  post操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)postRequestWithUrl:(NSString *)url
                parameters:(NSDictionary *)parameters
                      view:(UIView *)containerView
              successBlock:(APISuccessBlock)successBlock
              failureBlock:(APIFailureBlock)failureBlock;


/**
 上传文件

 @param url           请求地址
 @param parameters    参数
 @param file          文件流数组
 @param containerView 网络请求发生的view，hud位于其中心
 @param successBlock  成功回调
 */
- (void)uploadFileWithUrl:(NSString *)url
               parameters:(NSDictionary *)parameters
                     file:(NSArray<HSNetworkClientFile *> *)file
                     View:(UIView *)containerView
             successBlock:(idBlock)successBlock;
/*----------网络请求类重新整理，不影响之前方法------------------*/

@end
