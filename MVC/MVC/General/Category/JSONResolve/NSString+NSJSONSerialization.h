//
//  NSString+NSJSONSerialization.h
//  BaseMVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 模仿JsonKit接口，使用系统Json解析
 默认UTF-8编码
 */

@interface NSString (NSJSONSerialization)

- (id)objectFromJSONString;
- (id)objectFromJSONStringWithParseOptions:(NSJSONReadingOptions)parseOptionFlags error:(NSError **)error;

@end
