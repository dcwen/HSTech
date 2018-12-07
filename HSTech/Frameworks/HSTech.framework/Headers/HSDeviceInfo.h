//
//  HSDeviceInfo.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#ifndef HSDeviceInfo_h
#define HSDeviceInfo_h

//----------------------判断设备-------------------------------
#define HSIsPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define HSIsPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define HSIsPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
#define HSIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)  
#define HSIsRetina [UIScreen mainScreen].scale > 1

// iPhone4s 分辨率320x480，像素640x960，@2x
#define HSIs480         (([[UIScreen mainScreen] bounds].size.height == 480) ? YES : NO)
// iPhone5、5c、5s 分辨率320x568，像素640x1136，@2x
#define HSIs568         (([[UIScreen mainScreen] bounds].size.height == 568) ? YES : NO)
// iPhone6 分辨率375x667，像素750x1334，@2x
#define HSIs667         (([[UIScreen mainScreen] bounds].size.height == 667) ? YES : NO)
// iPhone6 Plus 分辨率414x736，像素1242x2208，@3x
#define HSIs736         (([[UIScreen mainScreen] bounds].size.height == 736) ? YES : NO)
//----------------------判断设备-------------------------------


//----------------------判断ios版本----------------------------
#define HSIsIOS7Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define HSIsIOS8Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define HSIsIOS9Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define HSIsIOS10Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define HSIsIOS11Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define HSIsIOS12Version ([[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0)
//----------------------判断ios版本----------------------------


//----------------------设备信息--------------------------------
#define HSPhoneModel [[UIDevice currentDevice] model]
#define HSPhoneName [[UIDevice currentDevice] systemName]
#define HSPhoneSystemVersion [[UIDevice currentDevice] systemVersion]
//----------------------设备信息--------------------------------


//----------------------应用信息--------------------------------
#define HSAppVersion    [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] // 内部标识号
#define HSCurrentAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] // 上架版本号
#define HSAPP_DOCUMENT  [NSSearchPathForDirectoriesInDomains (NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define HSAPP_LIBRARY   [NSSearchPathForDirectoriesInDomains (NSLibraryDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define HSAPP_CACHES_PATH [NSSearchPathForDirectoriesInDomains (NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]
//----------------------应用信息--------------------------------

#endif


