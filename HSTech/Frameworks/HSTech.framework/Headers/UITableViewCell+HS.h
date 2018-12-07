//
//  UITableViewCell+HS.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/2.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (HS)

/**
 *  设置分割线为0，iOS8以上在代理方法 willDisplayCell 执行
 */
- (void)hs_setSeparatorInsetZero;

@end
