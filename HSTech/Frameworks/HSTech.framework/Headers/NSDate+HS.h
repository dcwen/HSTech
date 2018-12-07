//
//  NSDate+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/7.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (HS)

/**
 *  获取指定格式的显示时间
 *
 *  @param format 日期格式，比如：yyyy-MM-dd HH:mm:ss
 *
 *  @return 日期字符串
 */
- (NSString *)hs_stringWithFormat:(NSString *)format;

/**
 *  获取 日期+星期 字符串，比如：2011年4月4日 星期一
 *
 *  @return 日期+星期 字符串
 */
- (NSString *)hs_string_yyyyMMdd_EEEE;

/**
 *  获取 日期 字符串，比如：2011-4-4
 *
 *  @return 日期 字符串
 */
- (NSString *)hs_string_yyyyMMdd;

/**
 *  获取 日期时间 字符串，比如：20151107142223
 *
 *  @return 日期时间 字符串
 */
- (NSString *)hs_string_yyyyMMddHHmmss;

/**
 *  获取 日期+时间 字符串，比如：2015-11-07 14:22:23
 *
 *  @return 日期+时间 字符串
 */
- (NSString *)hs_string_yyyyMMdd_HHmmss;

/**
 *  获取日期距离现在年份
 *
 *  @return 日期距离现在年份
 */
- (NSUInteger)hs_YearsFromDate;

@end
