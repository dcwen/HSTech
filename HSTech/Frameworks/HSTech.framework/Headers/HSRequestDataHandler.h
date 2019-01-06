//
//  HSDataHandler.h
//  HSTech
//
//  Created by CWen、文 on 2018/12/15.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

// 数据返回类型
typedef NS_ENUM(NSUInteger, HSResultType) {
    HSResultTypeNomal,         // 是什么类型数据就返回什么类型数据
    HSResultTypeDict,          // 返回字典
    HSResultTypeArrayDict,     // 返回字典数组
    HSResultTypeModel,         // 返回对象
    HSResultTypeArrayModel     // 返回数字对象
};

#define HSSuccessCode 10000

@interface HSResponseModel : NSObject

// 返回码
@property (nonatomic, copy) NSString *code;
// 返回码描述
@property (nonatomic, copy) NSString *msg;
// 明细返回码
@property (nonatomic, copy) NSString *subCode;
// 明细放回码描述
@property (nonatomic, copy) NSString *subMsg;
// 签名
@property (nonatomic, copy) NSString *sign;
// 返回数据
@property (nonatomic, copy) id data;

@end

#define commonParameters \
view:(UIView *)containerView \
resultClass:(Class)resultClass \
requestFished:(requestFishedBlock)requestFished \

@interface HSRequestDataHandler : NSObject

/**
 *  get操作，默认返回对象数据、或者对象数组数据
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView 网络请求发生的view，hud位于其中心
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)getRequestWithUrl:(NSString *)url
               parameters:(NSDictionary *)parameters
                     view:(UIView *)containerView
              resultClass:(Class)resultClass
            requestFished:(requestFishedBlock)requestFished;

/**
 *  get操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView 网络请求发生的view，hud位于其中心
 *  @param resultType 返回数据格式类型
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)getRequestWithUrl:(NSString *)url
               parameters:(NSDictionary *)parameters
                     view:(UIView *)containerView
               resultType:(HSResultType)resultType
              resultClass:(Class)resultClass
            requestFished:(requestFishedBlock)requestFished;


/**
 *  get操作，以json的方式请求，默认返回对象数据、或者对象数组数据
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)getRequestByJsonWith:(NSString *)url
                  parameters:(NSDictionary *)parameters
                        view:(UIView *)containerView
                 resultClass:(Class)resultClass
               requestFished:(requestFishedBlock)requestFished;


/**
 *  get操作，以json的方式请求
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultType 返回数据格式类型
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)getRequestByJsonWith:(NSString *)url
                  parameters:(NSDictionary *)parameters
                        view:(UIView *)containerView
                  resultType:(HSResultType)resultType
                 resultClass:(Class)resultClass
               requestFished:(requestFishedBlock)requestFished;


/**
 *  post操作，默认返回对象数据、或者对象数组数据
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)postRequestWithUrl:(NSString *)url
                parameters:(NSDictionary *)parameters
                      view:(UIView *)containerView
               resultClass:(Class)resultClass
             requestFished:(requestFishedBlock)requestFished;

/**
 *  post操作
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultType 返回数据格式类型
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)postRequestWithUrl:(NSString *)url
                parameters:(NSDictionary *)parameters
                      view:(UIView *)containerView
                resultType:(HSResultType)resultType
               resultClass:(Class)resultClass
             requestFished:(requestFishedBlock)requestFished;


/**
 *  post操作，以json的方式请求，默认返回对象数据、或者对象数组数据
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)postRequestByJsonWithUrl:(NSString *)url
                      parameters:(NSDictionary *)parameters
                            view:(UIView *)containerView
                     resultClass:(Class)resultClass
                   requestFished:(requestFishedBlock)requestFished;

/**
 *  post操作，以json的方式请求
 *  @param url  请求地址
 *  @param parameters 参数
 *  @param containerView  网络请求发生的view，hud位于其中心
 *  @param resultType 返回数据格式类型
 *  @param resultClass 返回数数据需要转成的类
 *  @param requestFished 请求完成调
 */
+ (void)postRequestByJsonWithUrl:(NSString *)url
                      parameters:(NSDictionary *)parameters
                            view:(UIView *)containerView
                      resultType:(HSResultType)resultType
                     resultClass:(Class)resultClass
                   requestFished:(requestFishedBlock)requestFished;


@end
