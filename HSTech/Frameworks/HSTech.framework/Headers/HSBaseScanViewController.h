//
//  HSBaseScanViewController.h
//  HSTech
//
//  Created by CWen、文 on 2016/11/23.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "HSViewController.h"
#import <AVFoundation/AVFoundation.h>

@interface HSBaseScanViewController : HSViewController

@property (nonatomic, copy) NSString *jumpUrl;
@property (nonatomic, copy) NSString *scanResultJsCallBack;

// 扫码结果回调
@property (nonatomic, copy) idBlock scanResult;

// 链接对象
@property (strong,nonatomic) AVCaptureSession *session;

// 扫码框
@property (weak, nonatomic) UIImageView *scanView;

// 扫码线
@property (weak, nonatomic) UIImageView *scanLineView;

// 扫码框下面的提醒文字
@property (nonatomic, weak) UILabel *warnLabel;

// 手电筒开关，可设置普通和选中状态图片
@property (nonatomic, weak) UIButton *flashlightBtn;

// 导航栏右侧相册按钮
@property (nonatomic, weak) UIButton *rightBtn;

// 子类重写这个方法，获得扫描结果
- (void)getCodeString:(NSString *)string;

// 开始扫描
- (void)startRunning;

// 停止扫描
- (void)stopRunning;

@end
