//
//  UIView+HSExtension.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/16.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (HSExtension)

- (void)showImageHUDText:(NSString *)text;

@end


@interface HSHUD : UIView
- (instancetype)initWithFrame:(CGRect)frame imageName:(NSString *)imageName text:(NSString *)text;
@end
