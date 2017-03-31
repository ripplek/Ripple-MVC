//
//  UITextField+Addition.m
//  MVC
//
//  Created by 张坤 on 2017/3/29.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import "UITextField+Addition.h"

@implementation UITextField (Addition)

+ (instancetype)textFieldWithPlaceHolder:(NSString *)placeHolder {
    
    UITextField *textField = [[self alloc] init];
    
    textField.borderStyle = UITextBorderStyleRoundedRect;
    textField.placeholder = placeHolder;
    
    return textField;
}

@end
