//
//  HSVideoPresentTransition.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/22.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSVideoPresentTransitionType) {
    HSVideoPresentTransitionPresent = 0,
    HSVideoPresentTransitionDismiss
};

@interface HSVideoPresentTransition : NSObject<UIViewControllerAnimatedTransitioning>
+ (instancetype)transitionWithTransitionType:(HSVideoPresentTransitionType)type;

- (instancetype)initWithTransitionType:(HSVideoPresentTransitionType)type;
@end
