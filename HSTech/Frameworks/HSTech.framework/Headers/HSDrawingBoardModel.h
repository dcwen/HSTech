//
//  HSDrawingBoardModel.h
//  testSdk
//
//  Created by CWen、文 on 2016/11/24.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSDrawingBoardModel : NSObject

+ (id)viewModelWithColor:(UIColor *)color Path:(UIBezierPath *)path Width:(CGFloat)width;

@property (strong, nonatomic) UIColor *color;

@property (strong, nonatomic) UIBezierPath *path;

@property (assign, nonatomic) CGFloat width;

@end
