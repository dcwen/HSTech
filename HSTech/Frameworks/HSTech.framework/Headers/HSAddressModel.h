//
//  HSAddressModel.h
//  JiuYuanWu
//
//  Created by CWen、文 on 2017/1/4.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HSProvinceModel;
@interface HSAddressModel : NSObject

@property (nonatomic, strong) NSArray<HSProvinceModel *> *address;

@end

@class HSCityModel;
@interface HSProvinceModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSArray<HSCityModel *> *sub;

@end

@interface HSCityModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *zipcode;
@property (nonatomic, strong) NSArray *sub;

@end



//@interface HSAreaModel : NSObject
//
//@end
