//
//  HSEncryptHandler.h
//  HSTech
//
//  Created by CWen、文 on 2017/1/20.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSEncryptHandler : NSObject

// 偏移量 默认为空
@property (nonatomic, copy) NSString *giv;

/**
 *  MD5字符串加密 32位
 *
 *  @param originalStr  需要加密字符串
 */
+ (NSString *)hs_encryptMD5by32:(NSString*)originalStr;

/**
 *  MD5字符串加密 16位
 *
 *  @param originalStr  需要加密字符串
 */
+ (NSString *)hs_encryptMD5by16:(NSString *)originalStr;

/**
 *  base64字符串加密
 *
 *  @param originalStr  需要加密字符串
 */
+ (NSString*)hs_encryptBase64Str:(NSString *)originalStr;

/**
 *  base64字符串解密
 *
 *  @param encryptStr  需要解密字符串
 */
+ (NSString*)hs_decEncryptBase64Str:(NSString *)encryptStr;

/**
 *  DES字符串加密
 *
 *  @param originalStr  需要加密字符串
 *  @param keyStr 密钥
 */
- (NSString *)hs_encryptDESStr:(NSString *)originalStr WithKey:(NSString *)keyStr;

/**
 *  DES字符串解密
 *
 *  @param encryptStr  需要解密字符串
 *  @param keyStr 密钥
 */
- (NSString*)hs_decEncryptDESStr:(NSString *)encryptStr WithKey:(NSString *)keyStr;

/**
 *  3DES字符串加密
 *
 *  @param originalStr  需要加密字符串
 *  @param keyStr 密钥
 */
- (NSString *)hs_encrypt3DESStr:(NSString *)originalStr WithKey:(NSString *)keyStr;

/**
 *  3DES字符串解密
 *
 *  @param encryptStr  需要解密字符串
 *  @param keyStr 密钥
 */
- (NSString*)hs_decEncrypt3DESStr:(NSString *)encryptStr WithKey:(NSString *)keyStr;

/**
 *  十六进制加密
 *
 *  @param originalStr  需要解密字符串
 *  @param keyStr 密钥
 */
- (NSString *)hs_encryptHex:(NSString *)originalStr WithKey:(NSString *)keyStr;

/**
 *  十六进制解密
 *
 *  @param encryptStr  需要解密字符串
 *  @param keyStr 密钥
 */
- (NSString*)hs_decEncryptHex:(NSString *)encryptStr WithKey:(NSString *)keyStr;

/**
 *  HMACMD5加密
 *
 *  @param toEncryptStr  需要解密字符串
 *  @param keyStr 密钥
 */
- (NSString *)hs_encryptHMACMD5WithString:(NSString *)toEncryptStr WithKey:(NSString *)keyStr;

/**
 对参数进行ASCII排序，并且便接成key=value&key=value的格式

 @param param 参数
 @return 排序便接后的字符串
 */
+ (NSString *)hs_orderForASCIIWithParam:(NSDictionary *)param;

/**
 （key=value&key2=value2）类型的参数字符串转字典
 */
+ (NSDictionary *)hs_dictWithKeyValueSting:(NSString *)string;

@end
