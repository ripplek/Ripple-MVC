//
//  HomeModel.h
//  MVC
//
//  Created by 张坤 on 2017/3/27.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomeModel : NSObject

@property(nonatomic,assign) NSInteger code;
@property(nonatomic,strong) NSDictionary *data;
@property(nonatomic,copy) NSString *msg;

@end
