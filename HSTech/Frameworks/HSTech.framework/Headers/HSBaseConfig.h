//
//  HSBaseConfig.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/3.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#ifndef HSBaseConfig_h
#define HSBaseConfig_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//----------------------APP常用单例----------------------------
#pragma mark - App 常用单例
#define HSApplication        [UIApplication sharedApplication]
#define HSAppDelegate        (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define HSKeyWindow          [UIApplication sharedApplication].keyWindow
#define HSMainScreen         [UIScreen mainScreen]
#define HSFileManager        [NSFileManager defaultManager]
#define HSNotificationCenter [NSNotificationCenter defaultCenter]
#define HSUserDefaults       [NSUserDefaults standardUserDefaults]
//----------------------APP常用单例----------------------------


//----------------------APP颜色相关----------------------------
#pragma mark - App 通用颜色
#define HSColorBlack     [UIColor blackColor]      // 0.0 white
#define HSColorDarkGray  [UIColor darkGrayColor]   // 0.333 white
#define HSColorLightGray [UIColor lightGrayColor]  // 0.667 white
#define HSColorWhite     [UIColor whiteColor]      // 1.0 white
#define HSColorGray      [UIColor grayColor]       // 0.5 white
#define HSColorRed       [UIColor redColor]        // 1.0, 0.0, 0.0 RGB
#define HSColorGreen     [UIColor greenColor]      // 0.0, 1.0, 0.0 RGB
#define HSColorBlue      [UIColor blueColor]       // 0.0, 0.0, 1.0 RGB
#define HSColorCyan      [UIColor cyanColor]       // 0.0, 1.0, 1.0 RGB
#define HSColorYellw     [UIColor yellowColor]     // 1.0, 1.0, 0.0 RGB
#define HSColorMagenta   [UIColor magentaColor]    // 1.0, 0.0, 1.0 RGB
#define HSColorOrange    [UIColor orangeColor]     // 1.0, 0.5, 0.0 RGB
#define HSColorPurple    [UIColor purpleColor]     // 0.5, 0.0, 0.5 RGB
#define HSColorBrown     [UIColor brownColor]      // 0.6, 0.4, 0.2 RGB
#define HSColorClear     [UIColor clearColor]      // 0.0 white, 0.0
#define HSColorRGBA(_r, _g, _b, _a) [UIColor colorWithRed:(_r)/255.0 green:(_g)/255.0 blue:(_b)/255.0 alpha:_a]
#define HSColorRGB(_r, _g, _b) HSColorRGBA(_r, _g, _b, 1.0f)
#define HSColorRGBSame(_c) [UIColor colorWithRed:(_c)/255.0 green:(_c)/255.0 blue:(_c)/255.0 alpha:1.0f]
#define HSColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0f]
//----------------------APP颜色相关----------------------------


//----------------------APP字体相关----------------------------
#pragma mark - App 通用字体

#define HSFontSystem(_size)   [UIFont systemFontOfSize:_size]
// 加粗字体
#define HSFontBoldSystem(_size) [UIFont boldSystemFontOfSize:_size]
#define HSFontBoldHelvetica(_size) [UIFont fontWithName:@"Helvetica-Bold" size:_size]

#define HSFont10 HSFontSystem(10)
#define HSFont11 HSFontSystem(11)
#define HSFont12 HSFontSystem(12)
#define HSFont13 HSFontSystem(13)
#define HSFont14 HSFontSystem(14)
#define HSFont15 HSFontSystem(15)
#define HSFont16 HSFontSystem(16)
#define HSFont17 HSFontSystem(17)
#define HSFont18 HSFontSystem(18)
#define HSFont19 HSFontSystem(19)
#define HSFont20 HSFontSystem(20)
#define HSFont22 HSFontSystem(22)
#define HSFont24 HSFontSystem(24)
//----------------------APP字体相关----------------------------


//----------------------图片相关-------------------------------
#pragma mark - App 加载图片

// HSBundle 图片名
#define HSBundleImageName(_name) [NSString stringWithFormat:@"HSTech.bundle/%@", (_name)]

// 读取本地图片
#define HSImageLocal(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]
// 读取本地png图片
#define HSImageLocalPng(_file) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:_file ofType:nil]]
// 定义UIImage对象
#define HSImageNamed(_name) [UIImage imageNamed:_name]
// 可拉伸的图片
#define HSImageResizable(name,top,left,bottom,right) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right)]
#define HSImageResizableWithMode(name,top,left,bottom,right,mode) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right) resizingMode:mode]
//----------------------图片相关-------------------------------


//----------------------输出日志-------------------------------
#pragma mark - 自定义Log
#ifdef DEBUG
#   define HSLog(fmt, ...) printf("%s[Line %d] %s\n", __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:(fmt), ##__VA_ARGS__] UTF8String])
#   define HSLogRect(rect)  HSLog(@"%@", NSStringFromCGRect(rect))
#   define HSLogPoint(pt) HSLog(@"%@", NSStringFromCGPoint(pt))
#   define HSLogSize(size) HSLog(@"%@", NSStringFromCGSize(size))
#   define HSLogColor(_COLOR) HSLog(@"%s h=%f, s=%f, v=%f", #_COLOR, _COLOR.hue, _COLOR.saturation, _COLOR.value)
#   define HSLogSuperViews(_VIEW) { for (UIView* view = _VIEW; view; view = view.superview) { GBLog(@"%@", view); } }
#   define HSLogSubViews(_VIEW) \
{ for (UIView* view in [_VIEW subviews]) { GBLog(@"%@", view); } }
#else
#   define HSLog(...)
#   define HSLogRect(rect)
#   define HSLogPoint(pt)
#   define HSLogSize(size)
#   define HSLogColor(_COLOR)
#   define HSLogSuperViews(_VIEW)
#   define HSLogSubViews(_VIEW)
#endif

// 用来计算代码运行时间
#define HSTICK   NSDate *startTime = [NSDate date];
#define HSTOCK   NSLog(@"Time: %f", -[startTime timeIntervalSinceNow]);
//----------------------输出日志-------------------------------


//----------------------通用基础宏-----------------------------
#pragma mark - 通用基础宏
// 使用__block来修饰在Block中实用的对象,仍然会被retain
#define HSBLOCK_SELF()  __block __typeof(self) blockSelf = self;
// 自身弱引用
#define HSWEAK_SELF()  __weak __typeof(self) weakSelf = self;
// 自身强引用
#define HSSTRONG_SELF()  __strong __typeof(weakSelf) strongSelf = weakSelf;

// NSString
#define HSSrtingEmpty @""

// UI heights
#define HSHeight_SatusBar (IsIPhonex?34:20)
#define HSHeight_NavigationBar (IsIPhonex?88:64)
#define HSHeight_TabBar (IsIPhonex?83:49)
#define HSHeight_NormalViewHeight (HSHeight_Screen - HSHeight_Status_Nav - HSHeight_TabBar)
#define HSHeight_Screen [UIScreen mainScreen].bounds.size.height
#define HSWidth_Screen [UIScreen mainScreen].bounds.size.width
#define HSWidthScaleSize(x) ((x/375.0)*MIN(HSWidth_Screen, HSHeight_Screen))
/** 宽度的倍率 */
#define HSWidthScale [UIScreen mainScreen].bounds.size.width/375
/** 高度的倍率 */
#define HSHeightScale [UIScreen mainScreen].bounds.size.height/667
//----------------------通用基础宏-----------------------------

typedef void(^voidBlock)();
typedef void(^idBlock)(id obj);
typedef void(^stringBlock)(NSString *result);
typedef void(^stringBlockTwo)(NSString *result,NSString *description);
typedef void(^boolBlock)(BOOL boolen);
typedef void(^intergerBlock)(NSInteger index);
typedef void(^floatBlock)(CGFloat vaule);
typedef void(^errorBlock)(NSError *error);
typedef void(^numberBlock)(NSNumber *result);
typedef void(^arrayWithErrorBlock)(NSArray *results,NSError *error);
typedef void(^arrayAndDescription)(NSArray *results,NSString *description);
typedef void(^arrayBlock)(NSArray *results);
typedef void(^successBlock)(id resultObj);
typedef void(^requestFishedBlock)(NSInteger code, id resultObj, NSError *error);

//----------------------单例申明和定义宏------------------------
#pragma mark - App 单例申明和定义宏
// 第二种方法，重写 allocWithZone，同时支持 arc 和 非arc
#define singleton_h(name) + (instancetype)shared##name;

#define singleton_m(name) \
static id _instance; \
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
\
+ (instancetype)shared##name \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
} \
\
+ (id)copyWithZone:(struct _NSZone *)zone \
{ \
return _instance; \
}
//----------------------单例申明和定义宏------------------------


#endif /* HSBaseConfig_h */
