//
//  HSTitleScrollView.h
//  HSTech
//
//  Created by CWen、文 on 2016/11/28.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HSTitleScrollView : UIScrollView

// 设置当前button
@property (nonatomic, assign) NSInteger index;

// button宽度
@property (nonatomic, assign) CGFloat btnW;

// button高度
@property (nonatomic, assign) CGFloat btnH;

// button点击回调
@property (nonatomic, copy) intergerBlock selectedBlock;

// 选择button字体颜色
@property (nonatomic, strong) UIColor *selectBtnTitleColor;

// 未选择button字体颜色
@property (nonatomic, strong) UIColor *otherBtnTitleColor;

// 主题数组
@property (nonatomic ,strong) NSArray * titleArray;

@end
