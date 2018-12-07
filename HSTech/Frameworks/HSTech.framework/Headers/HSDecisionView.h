//
//  HSDecisionView.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/17.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSDecisionView;
@protocol DecisionDelegate <NSObject>

@optional
-(void) DecisionDidSelectNow: (HSDecisionView *)decision;

-(void) DecisionDidSelectCancel: (HSDecisionView *)decision;

-(void) DecisionDidSelectAction: (HSDecisionView *)decision;

@end

@interface HSDecisionView : UIView

//初始化
-(void) generateDecision;

/** 代理 */
@property (nonatomic, assign) id<DecisionDelegate> delegate;

/** 按钮文字颜色 */
@property (nonatomic, copy) UIColor *textColor;
/** 点击按钮文字颜色 */
@property (nonatomic, copy) UIColor *selectColor;
@end

