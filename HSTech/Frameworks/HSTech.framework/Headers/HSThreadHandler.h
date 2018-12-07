//
//  HSThreadHandler.h
//  HSTech
//
//  Created by CWen、文 on 2018/10/30.
//  Copyright © 2018 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

//GCD - 一次性执行
#define HSDISPATCH_ONCE_BLOCK(onceBlock) static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);

//GCD - 异步主线程
#define HSDISPATCH_MAIN_ASYNC(main_queue_block) dispatch_async(dispatch_get_main_queue(), main_queue_block)

//GCD - 异步子线程
#define HSDISPATCH_GLOBAL_QUEUE_ASYNC(global_queue_block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), global_queue_block)

//GCD - 延迟主线程执行
#define HSDISPATCH_AFTER_MAIN_QUEUE(time, main_queue_block)\
dispatch_time_t delayTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(time * NSEC_PER_SEC));\
dispatch_after(delayTime, dispatch_get_main_queue(), main_queue_block)


@interface HSThreadHandler : NSObject

@end
