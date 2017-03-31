//
//  NSArray+NSJSONSerialization.h
//  BaseMVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (NSJSONSerialization)

- (NSString *)JSONString;
- (NSString *)JSONStringWithOptions:(NSJSONWritingOptions)serializeOptions error:(NSError **)error;

@end
