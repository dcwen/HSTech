//
//  HSNaviTransition.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/9.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HSTransitionType) {
    HSTransitionTypePush = 0,
    HSTransitionTypePop
};

typedef NS_ENUM(NSUInteger, HSTransitionVcType) {
    HSTransitionVcTypePhoto = 0,
    HSTransitionVcTypeVideo
};

@interface HSTransition : NSObject<UIViewControllerAnimatedTransitioning>
+ (instancetype)transitionWithType:(HSTransitionType)type VcType:(HSTransitionVcType)vcType;
- (instancetype)initWithTransitionType:(HSTransitionType)type VcType:(HSTransitionVcType)vcType;
@end
