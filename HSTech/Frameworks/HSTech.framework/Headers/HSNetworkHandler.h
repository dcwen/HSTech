//
//  HSNetworkHandler.h
//  zzjl
//
//  Created by CWen、文 on 2018/4/16.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSHTTPSessionManager.h"

/**
 *  请求成功block
 */
typedef void (^APISuccessBlock)(NSDictionary *responseObject);

/**
 *  请求失败block
 */
typedef void (^APIFailureBlock) (NSError *error);


@interface HSNetworkHandler : NSObject

/**
 日志打印，默认开发环境打印日志，生产环境关闭日志
 */
@property (nonatomic, assign) BOOL logEnable;

/**
 接口请求超时时间，默认20s，上传默认60秒，下载没有设置超时时间
 */
@property (nonatomic, assign) NSTimeInterval requestTimeOut;

/**
 请求地址
 */
@property (nonatomic, copy) NSString *urlString;

/**
 请求参数
 */
@property (nonatomic, strong) NSDictionary *parameters;

/**
 容器，HUD父视图
 */
@property (strong, nonatomic) UIView *containerView;

/**
 *  加载中提示框
 */
@property (nonatomic, strong) MBProgressHUD *HUD;

/**
 显示加载框

 @param containerView 添加加载框的view
 */
- (void)readyForRequest:(UIView *)containerView;

/**
 *  请求完成后打印
 *
 *  @param response 返回对象
 *  @param error    错误
 */
- (void)logFinished:(NSDictionary *)response error:(NSError *)error;


@end
