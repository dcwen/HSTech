//
//  HSWebViewConfig.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/13.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#ifndef HSWebViewConfig_h
#define HSWebViewConfig_h


#define HSCallJsFunctionNotifaction @"callJsFunctionNotifaction"
#define MTCreatJSContexNotification @"creatJSContexNotification"


// js交互空间命名
NSString * const huashi = @"huashi";

// 通过通知调用html中方法
NSString * const common_function = @"common_function";

// 打开页面
NSString * const page_open = @"page_open";
// 关闭页面
NSString * const page_close = @"page_close";
// 返回上一个页面
NSString * const page_back = @"page_back";

// 提示框（按钮个数、文字、事件最好可以配置）
NSString * const window_alert = @"window_alert";
// 打开提示框(自动消失)
NSString * const window_openToast = @"window_openToast";
// 关闭提示框
NSString * const window_closeToast = @"window_closeToast";
// 打开加载中提示(无法点击取消)
NSString * const window_openLoading = @"window_openLoading";
// 关闭加载中提示
NSString * const window_closeLoading = @"window_closeLoading";

// 保存图片
NSString * const file_saveImage = @"file_saveImage";
// 保存文件
NSString * const file_saveFile = @"file_saveFile";
// 打开文件
NSString * const file_openFile = @"file_openFile";

// 手机震动
NSString * const device_vibrate = @"device_vibrate";
// 取消手机震动
NSString * const device_cancelVibrate = @"device_cancelVibrate";
// 获取设备信息
NSString * const device_getInfo = @"device_getInfo";
// 拨通电话
NSString * const device_callPhone = @"device_callPhone";
// 打开扫描二维码
NSString * const device_openScanner = @"device_openScanner";
// 打开相机
NSString * const device_openCamera = @"device_openCamera";
// 打开相片预览器
NSString * const device_openPictureView = @"device_openPictureView";


#endif /* HSWebViewConfig_h */
