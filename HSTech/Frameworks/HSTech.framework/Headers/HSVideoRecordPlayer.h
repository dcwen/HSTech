//
//  HSVideoRecordPlayer.h
//  HSDemo
//
//  Created by CWen、文 on 2017/3/14.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSVideoRecordPlayer : UIView

- (instancetype)initWithFrame:(CGRect)frame videoUrl:(NSURL *)videoUrl;

@property (nonatomic, strong, readonly) NSURL *videoUrl;

@property (nonatomic,assign) BOOL autoReplay; // 默认 YES

- (void)play;

- (void)stop;

@end
