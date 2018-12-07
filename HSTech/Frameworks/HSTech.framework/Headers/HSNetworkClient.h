//
//  HSNetworkClient.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"
#import "HSHTTPSessionManager.h"

@class HSBaseAPI;

#pragma mark - 网络配置信息

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

/**
 *  网络状态block
 */
typedef void(^netStatusBlock)(AFNetworkReachabilityStatus status);


/**
 *  Network客户端
 */
@class HSNetworkClientFile;
@interface HSNetworkClient : NSObject

/**
 *  AFHTTPRequestOperationManager对象，负责管理和调度网络请求
 */
@property (nonatomic, strong) AFHTTPSessionManager *manager;

/**
 *  NSURLSessionDownloadTask对象，负责管理和调度下载任务
 */
@property (nonatomic, strong) NSURLSessionDownloadTask *task;

/**
 *  服务器返回Json数据映射模型
 */
//@property (nonatomic, strong) HSBaseAPI *baseAPI;

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

/**
 *  监测网络状态
 *
 *  @param status 网络状态block返回
 */
- (void)AFNetworkStatus:(netStatusBlock)status;


/*----------网络请求类重新整理，不影响之前方法------------------*/
/**
 *  get操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)getRequestWithUrl:(NSString *)url parameters:(NSDictionary *)parameters View:(UIView *)containerView successBlock:(APISuccessBlock)successBlock failureBlock:(APIFailureBlock)failureBlock;

/**
 *  post操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)postRequestWithUrl:(NSString *)url parameters:(NSDictionary *)parameters View:(UIView *)containerView successBlock:(APISuccessBlock)successBlock failureBlock:(APIFailureBlock)failureBlock;


/**
 上传文件

 @param url           请求地址
 @param parameters    参数
 @param file          文件流数组
 @param containerView 网络请求发生的view，hud位于其中心
 @param successBlock  成功回调
 */
- (void)uploadFileWithUrl:(NSString *)url parameters:(NSDictionary *)parameters file:(NSArray<HSNetworkClientFile *> *)file View:(UIView *)containerView successBlock:(idBlock)successBlock;
/*----------网络请求类重新整理，不影响之前方法------------------*/

@end

#pragma mark - 上传文件类

@interface HSNetworkClientFile : NSObject

/**
 *  文件数据
 */
@property (nonatomic, strong) NSData *fileData;

/**
 *  服务器接收参数名
 */
@property (nonatomic, copy) NSString *name;

/**
 *  文件名
 */
@property (nonatomic, copy) NSString *fileName;

/**
 *  文件类型
 */
@property (nonatomic, copy) NSString *mimeType;

/**
 *  初始化，文件名默认当前时间
 */
+ (instancetype)imageFileWithFileData:(NSData *)fileData name:(NSString *)name;

@end
