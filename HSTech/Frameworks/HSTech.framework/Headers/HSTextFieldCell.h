//
//  HSTextFieldCell.h
//  baseProduct
//
//  Created by CWen、文 on 2016/11/4.
//  Copyright © 2016年 huashitech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSSettingItem.h"

typedef NS_ENUM(NSUInteger, HJTextFieldCellType) {
    HSTextFieldCellTypePhone = 1,       // 限制11位
    HSTextFieldCellTypePwd,             // 限制20位
    HSTextFieldCellTypeSelectAddress,   // 地址选择
    HSTextFieldCellTypeName,            // 普通输入，限制20位
    HSTextFieldCellTypeNameMoney        // 输入金钱，限制11位，数字限制
};

@interface HSTextFieldCell : UITableViewCell

// textField距离cell左边的间距，不设置则默认距离左边标题的距离
@property (nonatomic, assign) CGFloat leftSpace;

// 文本输入框是否能用
@property (nonatomic, unsafe_unretained) BOOL showActionSheet;

// 文本输入框
@property (nonatomic, strong) UITextField *detailTextField;

// 文本输入cell的输入类型
@property (nonatomic, assign) HJTextFieldCellType textFieldCellType;

// 文本输入限制，如果设置了这个值，则以这个为主
@property (nonatomic, assign) NSInteger limitCount;

// 输入内容改变block，参数为改变后的字段
@property (nonatomic, copy) stringBlock inputChangeBlock;

// 初始化cell
+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
