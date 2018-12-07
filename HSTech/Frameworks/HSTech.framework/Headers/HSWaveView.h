//
//  HSWaveView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/9.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSWaveStyle) {
    HSWaveStyleNone,
    HSWaveStyleTwoWave
};


@interface HSWaveView : UIView

// 水波样式
@property (nonatomic, assign) HSWaveStyle waveStyle;

// 默认0.6
@property (nonatomic, assign) CGFloat waveAlpha;

// 水波颜色
@property (nonatomic, strong) UIColor *wavesColor;

@end
