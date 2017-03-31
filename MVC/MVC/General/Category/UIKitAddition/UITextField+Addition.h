//
//  UITextField+Addition.h
//  MVC
//
//  Created by 张坤 on 2017/3/29.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Addition)

/// 实例化 UITextField
///
/// @param placeHolder     占位文本
///
/// @return UITextField
+ (nonnull instancetype)textFieldWithPlaceHolder:(nonnull NSString *)placeHolder;

@end
