//
//  HSRequestHandler.h
//  HSTech
//
//  Created by CWen、文 on 2018/12/15.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import "HSTech.h"
#import "HSNetworkHandler.h"

#define HSNetworking [HSRequestHandler new]

@interface HSRequestHandler : HSNetworkHandler

/**
 *  AFHTTPRequestOperationManager对象，负责管理和调度网络请求
 */
@property (nonatomic, strong) HSHTTPSessionManager *manager;


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
                     view:(UIView *)containerView
             successBlock:(APISuccessBlock)successBlock
             failureBlock:(APIFailureBlock)failureBlock;

/**
 *  get操作，以json的方式请求
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)getRequestByJsonWithUrl:(NSString *)url
                     parameters:(NSDictionary *)parameters
                           view:(UIView *)containerView
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
 *  post操作，以json的方式请求
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param successBlock  返回字典类型
 *  @param failureBlock  返回错误
 */
- (void)postRequestByJsonWithUrl:(NSString *)url
                      parameters:(NSDictionary *)parameters
                            view:(UIView *)containerView
                    successBlock:(APISuccessBlock)successBlock
                    failureBlock:(APIFailureBlock)failureBlock;

@end
