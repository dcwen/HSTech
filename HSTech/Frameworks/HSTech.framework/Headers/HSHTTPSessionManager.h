//
//  HSHTTPSessionManager.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/17.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import "AFHTTPSessionManager.h"

/**
 防止 AFHTTPSessionManager 内存泄漏
 */
@interface HSHTTPSessionManager : AFHTTPSessionManager

singleton_h(HTTPSessionManager)

@end
