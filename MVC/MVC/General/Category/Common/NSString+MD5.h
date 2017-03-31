//
//  NSString+MD5.h
//  MVC
//
//  Created by 张坤 on 2017/3/24.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

+ (NSString *)md5:(NSString *)str;
- (NSString *)stringMd5;

@end
