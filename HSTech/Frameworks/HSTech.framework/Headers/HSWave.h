//
//  HSWave.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/9.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSWave : UIView

@property (nonatomic, assign) CGFloat waveA; //水纹振幅;
@property (nonatomic, assign) CGFloat waveW ;//水纹周期
@property (nonatomic, assign) CGFloat offsetX; //位移
@property (nonatomic, assign) CGFloat currentK; //当前波浪高度Y
@property (nonatomic, assign) CGFloat wavesSpeed;//水纹速度
@property (nonatomic, assign) CGFloat WavesWidth; //水纹宽度

@property (nonatomic, strong) UIColor *wavesColor;

- (void)show;

@end
