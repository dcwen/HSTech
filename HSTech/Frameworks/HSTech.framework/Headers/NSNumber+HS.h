//
//  NSNumber+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (HS)

/**
 *  将 num 四舍五入
 *
 *  @param position 在指定位数四舍五入
 *
 *  @return 新值的字符串
 */
- (NSString *)hs_roundAfterPoint:(int)position;

/**
 *  格式化小数 四舍五入类型
 *
 *  @param format 格式
 *
 *  @return 新值的字符串
 */
- (NSString *)hs_decimalwithFormat:(NSString *)format;


@end
