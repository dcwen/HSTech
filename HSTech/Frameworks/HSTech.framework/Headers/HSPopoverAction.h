//
//  HSPopoverAction.h
//  HSTech
//
//  Created by CWen、文 on 2017/2/24.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSPopoverViewStyle) {
    HSPopoverViewStyleDefault = 0, // 默认风格, 白色
    HSPopoverViewStyleDark, // 黑色风格
};

@interface HSPopoverAction : NSObject

// < 图标 (建议使用 60pix*60pix 的图片)
@property (nonatomic, strong, readonly) UIImage *image;

// < 标题
@property (nonatomic, copy, readonly) NSString *title;

// < 选择回调, 该Block不会导致内存泄露, Block内代码无需刻意去设置弱引用.
@property (nonatomic, copy, readonly) void(^handler)(HSPopoverAction *action);

+ (instancetype)actionWithTitle:(NSString *)title handler:(void (^)(HSPopoverAction *action))handler;

+ (instancetype)actionWithImage:(UIImage *)image title:(NSString *)title handler:(void (^)(HSPopoverAction *action))handler;

@end
