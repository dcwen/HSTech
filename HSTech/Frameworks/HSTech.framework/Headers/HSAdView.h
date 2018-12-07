//
//  HSAdView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/3.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^endBlock)(NSString *clikImgUrl);

@interface HSAdView : UIView

/** 倒计时（默认3秒 */
@property (nonatomic,assign) NSUInteger showTime;


/** 点击图片回调block, 如果为空，则为倒计时结束回调 */
@property (nonatomic, copy) endBlock clickImg;

/** 初始化方法*/
- (instancetype)initWithFrame:(CGRect)frame imgUrl:(NSString *)img adUrl:(NSString *)ad clickImg:(endBlock)block;

/** 显示广告页面方法*/
- (void)show;

@end
