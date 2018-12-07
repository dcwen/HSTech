//
//  HSSliderViewController.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import "HSViewController.h"

/*
 * 用于tabarController之间的左右滑动控制器，继承此控制器添加到tabarController中可自动实现左右滑动。
 */
@interface HSSliderViewController : HSViewController

// 自动滑动时间
@property (nonatomic, assign) CGFloat sliderTime;

@end
