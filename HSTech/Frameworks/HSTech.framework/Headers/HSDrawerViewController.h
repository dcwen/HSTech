//
//  HSDrawerViewController.h
//  GZMetro
//
//  Created by CWen、文 on 2017/10/25.
//
//

#import "HSViewController.h"

extern NSString * HS_DRAWER_SHOW_LEFT;
extern NSString * HS_DRAWER_SHOW_RIGHT;
extern NSString * HS_DRAWER_DISMISS;

#pragma clang diagnostic push
#pragma clang diagnostic ignored"-Wunused-function"
static void hs_showLeft(BOOL animated) {
    [[NSNotificationCenter defaultCenter]postNotificationName:HS_DRAWER_SHOW_LEFT object:nil userInfo:@{@"animated":@(animated)}];
};

static void hs_showRight(BOOL animated) {
    [[NSNotificationCenter defaultCenter]postNotificationName:HS_DRAWER_SHOW_RIGHT object:nil userInfo:@{@"animated":@(animated)}];
};

static void hs_dismiss(BOOL animated) {
    [[NSNotificationCenter defaultCenter]postNotificationName:HS_DRAWER_DISMISS object:nil userInfo:@{@"animated":@(animated)}];
};
#pragma clang diagnostic pop

@interface HSDrawerViewController : UIViewController

typedef NS_ENUM(NSInteger,HSDrawerType) {
    /** 默认,平行 */
    HSDrawerTypePlane,
};

@property(nonatomic,strong)UIViewController * leftVC;
@property(nonatomic,strong)UITabBarController * mainVC;
@property(nonatomic,strong)UIViewController * rightVC;

/**
 *  默认LSYDrawerTypePlane
 */
@property(nonatomic,assign)HSDrawerType drawerType;

/**
 *  默认300
 */
@property(nonatomic,assign)CGFloat leftViewWidth;

/**
 *  默认300
 */
@property(nonatomic,assign)CGFloat rightViewWidth;

/**
 *  默认YES
 */
@property(nonatomic,assign)BOOL canPan;

/**
 *  动画时间,默认0.5s
 */
@property(nonatomic,assign)CGFloat duration;
/**
 *  左右抽屉
 *
 *  @param leftVC  左vc
 *  @param mainVC  中间vc
 *  @param rightVC 右vc
 *
 *  @return WZXDrawerViewController对象
 */
+ (instancetype)hs_drawerViewControllerWithLeftViewController:(UIViewController *)leftVC mainViewController:(UITabBarController *)mainVC rightViewController:(UIViewController *)rightVC;
/**
 *  左抽屉
 *
 *  @param leftVC 左vc
 *  @param mainVC 中间vc
 *
 *  @return WZXDrawerViewController对象
 */
+ (HSDrawerViewController *)hs_drawerViewControllerWithLeftViewController:(UIViewController *)leftVC mainViewController:(UITabBarController *)mainVC;

/**
 *  右抽屉
 *
 *  @param mainVC  中间vc
 *  @param rightVC 右vc
 *
 *  @return WZXDrawerViewController对象
 */
+ (HSDrawerViewController *)hs_drawerViewControllerWithMainViewController:(UITabBarController *)mainVC rightViewController:(UIViewController *)rightVC;

- (instancetype)initWithLeftViewController:(UIViewController *)leftVC mainViewController:(UITabBarController *)mainVC rightViewController:(UIViewController *)rightVC;

@end
