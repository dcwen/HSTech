//
//  HSVideoConfig.h
//  HSDemo
//
//  Created by CWen、文 on 2017/3/14.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>

#define HSSCREEN_WIDTH      [UIScreen mainScreen].bounds.size.width
#define HSSCREEN_HEIGHT     [UIScreen mainScreen].bounds.size.height

#define HSThemeBlackColor   [UIColor blackColor]
#define HSThemeTineColor    [UIColor greenColor]

#define HSThemeWaringColor  [UIColor redColor]
#define HSThemeWhiteColor   [UIColor whiteColor]
#define HSThemeGraryColor   [UIColor grayColor]

// 视频保存路径
#define HSVideoDicName      @"HSSmailVideo"

// 视频录制 时长
#define HSRecordTime        10.0

// 视频的长宽按比例
#define HSVideo_w_h (4.0/3)

// 视频默认 宽的分辨率  高 = HSVideoWidthPX / HSVideo_w_h
#define HSVideoWidthPX  200.0

//控制条高度 小屏幕时
#define HSControViewHeight  120.0
// 是否保存到手机相册
//#define saveToLibrary   (0)


extern void HS_dispatch_after(float time, dispatch_block_t block);

typedef NS_ENUM(NSUInteger, HSVideoViewShowType) {
    HSVideoViewShowTypeSmall,  // 小屏幕 ...聊天界面的
    HSVideoViewShowTypeSingle, // 全屏 ... 朋友圈界面的
};

@interface HSVideoConfig : NSObject
// 录像 的 View 大小
+ (CGRect)viewFrameWithType:(HSVideoViewShowType)type;

//视频View的尺寸
+ (CGSize)videoViewDefaultSize;

// 默认视频分辨率
+ (CGSize)defualtVideoSize;
// 渐变色
+ (NSArray *)gradualColors;

// 模糊View
+ (void)motionBlurView:(UIView *)superView;


+ (void)showHinInfo:(NSString *)text inView:(UIView *)superView frame:(CGRect)frame timeLong:(NSTimeInterval)time;

@end

/*!
 *  视频对象 Model类
 */
@interface HSVideoModel : NSObject
/// 完整视频 本地路径
@property (nonatomic, copy) NSString *videoAbsolutePath;
/// 缩略图 路径
@property (nonatomic, copy) NSString *thumAbsolutePath;
// 录制时间
@property (nonatomic, strong) NSDate *recordTime;

@end

@interface HSVideoUtil : NSObject

/*!
 *  有视频的存在
 */
+ (BOOL)existVideo;

/*!
 *  时间倒序 后的视频列表
 */
+ (NSArray *)getSortVideoList;

/*!
 *  保存缩略图
 *
 *  @param videoUrl 视频路径
 *  @param second   第几秒的缩略图
 */
+ (void)saveThumImageWithVideoURL:(NSURL *)videoUrl second:(int64_t)second;

/*!
 *  产生新的对象
 */
+ (HSVideoModel *)createNewVideo;

/*!
 *  删除视频
 */
+ (void)deleteVideo:(NSString *)videoPath;

@end
