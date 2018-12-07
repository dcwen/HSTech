//
//  HSSettingItem.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSSettingItem : NSObject

@property (strong, nonatomic) NSString * title;/**< 标题 */

@property (strong, nonatomic) NSString * detailTitle;/**< 标题 */

@property (strong, nonatomic) NSString * image;/**< 图片 */

@property (strong, nonatomic) NSString * inputString;

@property (unsafe_unretained, nonatomic) BOOL rightViewSelected;

+ (instancetype)itemWithtitle:(NSString *)title image:(NSString *)image;/**< 设置标题值 类方法 */

@end
