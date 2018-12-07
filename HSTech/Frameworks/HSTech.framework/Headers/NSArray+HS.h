//
//  NSArray+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (HS)

- (NSString *)hs_synthetiseStringFromInsideWithBreakString:(NSString *)breakString;

/**
 *  将字典中所有的value存到数组
 *
 *  @param dictionary 要取值的字典
 *
 *  @return 存在所有value的数组
 */
+ (NSArray *)hs_ArrayWithallValuesFromDictionary:(NSDictionary *)dictionary;


+ (instancetype)arrayByRepeatObject:(id)object time:(NSUInteger)time;

@end
