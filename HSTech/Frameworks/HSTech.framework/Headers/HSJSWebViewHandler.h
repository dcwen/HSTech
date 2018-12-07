//
//  HSJSWebViewHandler.h
//  HSTech
//
//  Created by CWen、文 on 2017/1/4.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

/**
 *  JS交互说明：
 *  调用JS端执行某个JS方法：
 *  方式一：[webView stringByEvaluatingJavaScriptFromString:[NSString stringWithFormat:@"jpushGetTagsCallback('%@')", “oc调用js方法”]];
 *
 *  方式二：[context evaluateScript:[NSString stringWithFormat:@"jpushGetTagsCallback('%@')", “oc调用js方法”]];
 *
 *  注意事项：1.js调用oc方法处理刷新事件要放到主线程
 *          2.在项目中添加 JavaScriptCore 库文件
 */

// 添加这个通知，可以在收到通知的时候定义js方法，解决了h5页面在刷新的时候js方法失效的问题
#define HSCreatJSContexNotification @"HSCreatJSContexNotification"


typedef NSString* (^handleMethod)(NSString *JSSting);
typedef void (^voidHandleMethod)(NSString *JSSting);

@interface HSJSWebViewHandler : NSObject


@property (nonatomic, strong) JSContext *context;

/**
 *  初始化有返回值的js方法
 *
 *  @param webView          JS交互的webView
 *  @param JSBridgeName     跟andriod和h5相同的命名空间名
 *  @param methodName       跟andriod和h5相同的方法名
 *  @param handleMethod     返回值为string类型的block
 *
 *  @return 实例
 */
+ (instancetype)contextWithWebView:(UIWebView *)webView JSBridgeName:(NSString *)JSBridgeName methodName:(NSString *)methodName handleMethod:(handleMethod)handleMethod;

/**
 *  初始化没有返回值的js方法
 *
 *  @param webView          JS交互的webView
 *  @param JSBridgeName     跟andriod和h5相同的命名空间名
 *  @param methodName       跟andriod和h5相同的方法名
 *  @param voidHandleMethod  没有返回值的block
 *
 *  @return 实例
 */
+ (instancetype)contextWithWebView:(UIWebView *)webView JSBridgeName:(NSString *)JSBridgeName methodName:(NSString *)methodName voidHandleMethod:(voidHandleMethod)voidHandleMethod;

/**
 * 添加没有返回值的js方法
*  @param JSBridgeName     跟andriod和h5相同的命名空间名
*  @param methodName       跟andriod和h5相同的方法名
*  @param voidHandleMethod  没有返回值的block
*/
- (void)addJSBridgeName:(NSString *)JSBridgeName methodName:(NSString *)methodName voidHandleMethod:(voidHandleMethod)voidHandleMethod;

/**
 * 添加有返回值的js方法
*  @param JSBridgeName     跟andriod和h5相同的命名空间名
*  @param methodName       跟andriod和h5相同的方法名
*  @param handleMethod  返回值为string类型的block
*/
- (void)addJSBridgeName:(NSString *)JSBridgeName methodName:(NSString *)methodName handleMethod:(handleMethod)handleMethod;

@end


/**
 添加分类，接收context改变的回调方法，发送通知及时定义JS方法
 */
@interface NSObject (JSContextTracker)

@end


