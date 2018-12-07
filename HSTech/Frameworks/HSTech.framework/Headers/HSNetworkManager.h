//
//  HSNetworkManager.h
//  zzjl
//
//  Created by CWen、文 on 2018/6/8.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HSNetworkStatus) {
    HSNetworkStatusUnknown          = -1,
    HSNetworkStatusNotReachable     = 0,
    HSNetworkStatusReachableViaWWAN = 1,
    HSNetworkStatusReachableViaWiFi = 2,
};

#define HSNetworkEnabel [HSNetworkManager sharedNetworkManager].networkEnable

@interface HSNetworkManager : NSObject

@property (nonatomic, assign) BOOL networkEnable;
@property (nonatomic, assign) HSNetworkStatus netStatus;
@property (nonatomic, copy) void(^netStatusChangeBlock)(HSNetworkStatus status);

singleton_h(NetworkManager)

/**
 开始网络监听
 */
- (void)startMonitoring;

/**
 提示用户网络状态，主要是提示网络不可用
 */
- (void)warnNetworkStatus;

@end
