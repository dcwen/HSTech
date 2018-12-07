//
//  HSFunctionDefined.h
//  HSTech
//
//  Created by CWen、文 on 2017/8/2.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#ifndef HSFunctionDefined_h
#define HSFunctionDefined_h




/**
 *  滚动退出键盘
 */
#define  HSScrollViewDidScrollEndEditing \
- (void)scrollViewDidScroll:(UIScrollView *)scrollView \
{ \
[self.view endEditing:YES]; \
}

/**
 *  点击View退出键盘
 */
#define HSViewTouchBeganEndEditing \
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event \
{ \
[self.view endEditing:YES]; \
}


/**
 *  cell下划线完全显示
 */
#define HSCellBottonShowComplete \
- (void)viewDidLayoutSubviews \
{ \
if ([self.tableView respondsToSelector:@selector(setSeparatorInset:)]) { \
[self.tableView setSeparatorInset:UIEdgeInsetsZero]; \
} \
if ([self.tableView respondsToSelector:@selector(setLayoutMargins:)])  { \
[self.tableView setLayoutMargins:UIEdgeInsetsZero]; \
} \
} \
\
-(void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPat{ \
if ([cell respondsToSelector:@selector(setLayoutMargins:)]) { \
[cell setLayoutMargins:UIEdgeInsetsZero]; \
} \
if ([cell respondsToSelector:@selector(setSeparatorInset:)]){ \
[cell setSeparatorInset:UIEdgeInsetsZero]; \
} \
}

/**
 *  cell分组模式下section间距设置没有
 */
#define HSCellGroupeStyeClearSectionSpacing \
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section \
{ \
return 0.01; \
} \
\
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section \
{ \
return 0.01; \
}

/**
 *  限制某个textField的输入长度
 */
#define HSTextFieldLimitLength(textFieldOne, lengthOne) \
- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string \
{ \
NSInteger existedLength = textField.text.length; \
NSInteger selectedLength = range.length; \
NSInteger replaceLength = string.length; \
if (textField == textFieldOne) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthOne) { \
return NO; \
} \
} \
return YES; \
}

/**
 *  限制两个个textField的输入长度
 */
#define HSTextFieldLimitLengthTwo(textFieldOne, lengthOne, textFieldTwo, lengthTwo) \
- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string \
{ \
NSInteger existedLength = textField.text.length; \
NSInteger selectedLength = range.length; \
NSInteger replaceLength = string.length; \
if (textField == textFieldOne) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthOne) { \
return NO; \
} \
} \
\
if (textField == textFieldTwo) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthTwo) { \
return NO; \
} \
} \
return YES; \
}

/**
 *  限制三个个textField的输入长度
 */
#define HSTextFieldLimitLengthThree(textFieldOne, lengthOne, textFieldTwo, lengthTwo, textFieldThree, lengthThree) \
- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string \
{ \
NSInteger existedLength = textField.text.length; \
NSInteger selectedLength = range.length; \
NSInteger replaceLength = string.length; \
if (textField == textFieldOne) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthOne) { \
return NO; \
} \
} \
\
if (textField == textFieldTwo) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthTwo) { \
return NO; \
} \
} \
\
if (textField == textFieldThree) { \
if (string.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthThree) { \
return NO; \
} \
} \
return YES; \
}


#define HSTextViewLimitLength(textViewOne, lengthOne) \
- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text \
{ \
if (textView == textViewOne) { \
NSInteger existedLength = textView.text.length; \
NSInteger selectedLength = range.length; \
NSInteger replaceLength = text.length; \
if (text.length == 0) return YES; \
if (existedLength - selectedLength + replaceLength > lengthOne) { \
return NO; \
} \
} \
return YES; \
}



#endif /* HSFunctionDefined_h */
