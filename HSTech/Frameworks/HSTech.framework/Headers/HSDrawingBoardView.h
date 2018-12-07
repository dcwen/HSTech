//
//  HSDrawingBoardView.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/24.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSDrawingBoardView : UIView

// 线条颜色
@property (assign, nonatomic) CGFloat lineWidth;

// 线条宽度
@property (assign, nonatomic) UIColor *lineColor;

// 撒销
-(void)revocation;

// 重做
-(void)refrom;

// 清空
-(void)clear;

@end
