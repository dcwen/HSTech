//
//  HSAlertManagerHeader.h
//  HSTech
//
//  Created by CWen、文 on 2017/3/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#ifndef HSAlertManagerHeader_h
#define HSAlertManagerHeader_h

#import "HSAlertViewController.h"
#import "HSAlertView.h"



//以下适配，只做提示用，实际使用，如果要适配iOS7，对应方法还是需要自行适配
#ifdef NSFoundationVersionNumber_iOS_8_0
#import "HSAlertController.h"
#endif


#endif /* HSAlertManagerHeader_h */
