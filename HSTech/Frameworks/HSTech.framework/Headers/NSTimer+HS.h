//
//  NSTimer+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (HS)

/**
 *  暂停定时器
 */
- (void)hs_pauseTimer;

/**
 *  恢复定时器
 */
- (void)hs_resumeTimer;

/**
 *  一定时间间隔后，恢复定时器
 *
 *  @param interval 时间间隔
 */
- (void)hs_resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end
