//
//  NSDictionary+XJSONString.h
//  BaseMVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (XJSONString)

- (NSString*)x_jsonStringWithPrettyPrint:(BOOL) prettyPrint;

@end
