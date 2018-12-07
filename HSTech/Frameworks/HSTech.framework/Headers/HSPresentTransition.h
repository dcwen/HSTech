//
//  HSPresentTransition.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/21.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSPresentTransitionType) {
    HSPresentTransitionTypePresent = 0,
    HSPresentTransitionTypeDismiss
};

typedef NS_ENUM(NSUInteger, HSPresentTransitionVcType) {
    HSPresentTransitionVcTypePhoto = 0,
    HSPresentTransitionVcTypeVideo
};

@interface HSPresentTransition : NSObject<UIViewControllerAnimatedTransitioning>

+ (instancetype)transitionWithTransitionType:(HSPresentTransitionType)type VcType:(HSPresentTransitionVcType)vcType;

- (instancetype)initWithTransitionType:(HSPresentTransitionType)type VcType:(HSPresentTransitionVcType)vcType;

@end
