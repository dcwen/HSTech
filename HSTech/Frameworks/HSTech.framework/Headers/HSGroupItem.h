//
//  HSGroupItem.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSGroupItem : NSObject

/** 头部标题 */
@property (strong, nonatomic) NSString * headerTitle;
/** 尾部标题 */
@property (strong, nonatomic) NSString * footerTitle;

/** 组中的行数组 */
@property (strong, nonatomic) NSArray * items;

@end
