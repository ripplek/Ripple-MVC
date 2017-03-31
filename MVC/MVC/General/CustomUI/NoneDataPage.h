//
//  NoneDataPage.h
//  MVC
//
//  Created by 张坤 on 2017/3/24.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 无数据展示界面
 */
@interface NoneDataPage : UIView

// 直接使用页面
+ (void)showOnView:(UIView *)view;

// 创建无数据页面
+ (instancetype)instanceCreateNonePage;

@end
