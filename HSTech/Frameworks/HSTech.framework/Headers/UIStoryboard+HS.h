//
//  UIStoryboard+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIStoryboard (HS)

/**
 初始化UIStoryboard

 @param name Storyboard名字

 @return Storyboard对象
 */
+ (UIStoryboard *)fromName:(NSString*)name;

@end
