//
//  HSDeviceHandler.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/16.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

#define IsIPhonex [HSDeviceHandler hs_isiPhoneX]

@interface HSDeviceHandler : NSObject

 /**
  返回是否是iPhone X
  */
+ (BOOL)hs_isiPhoneX;

/**
 获取设备信息
 */
+ (NSDictionary *)hs_getDeviceInfo;

/**
 iPhone名称
 */
+ (NSString *)hs_getPhoneName;

/**
 app名
 */
+ (NSString *)hs_getAppName;

/**
 app版本号
 */
+ (NSString *)hs_getAppVerion;

/**
 电池电量
 */
+ (CGFloat)hs_getBatteryLevel;

/**
 当前系统名称
 */
+ (NSString *)hs_getSystemName;

/**
 当前系统版本号
 */
+ (NSString *)hs_getSystemVersion;

/**
 广告标识符
 */
+ (NSString *)hs_getIdfaString;

/**
 获取设备的UUID,该ID保存于Keychain中，去掉了“-”，全部转成了小写
 */
+ (NSString *)hs_getUuidString;

/**
 设备ip地址
 */
+ (NSString *)hs_getDeviceIPAddresses;

/**
 设备型号
 */
+ (NSString *)hs_getDeviceName;

/**
 获取图片缓存大小，通过SDWebImage缓存的图片

 @return 图片缓存大小，保留两位小数，单位是M
 */
+ (CGFloat)hs_getImageCacheSize;

/**
 清除硬盘图片缓存，通过SDWebImage缓存的图片

 @param completion 清除完成
 */
+ (void)clearDiskImageCache:(voidBlock)completion;

/**
 清除内存图片缓存，通过SDWebImage缓存的图片
 */
+ (void)clearMemoryImageCache;

/**
 获取系统毫秒时间
 */
+ (long long)systemMillisecondTime;

/**
 获取文件或者文件夹大小
 */
+ (NSInteger)fileSizeWithPath:(NSString *)path;

/**
 获取手机总的存储空间大小
 */
+ (NSString *)hs_getStorageSpace;

/**
 获取手机可用存储空间大小
 */
+ (NSString *)hs_getStorageSpaceAvailable;

/**
 是否获取了相机权限
 */
+ (BOOL)hs_allowAVAuthorization;

/**
 是否获取了相册权限
 */
+ (BOOL)hs_allowPhotoAlbumAuthorization;


@end
