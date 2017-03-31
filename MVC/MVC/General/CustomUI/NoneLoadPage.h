//
//  NoneLoadPage.h
//  MVC
//
//  Created by 张坤 on 2017/3/24.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 加载失败界面展示
 */
@interface NoneLoadPage : UIView

// 一般初始化页面 执行点击事件后自动移除页面
+ (instancetype)instanceNonePage:(dispatch_block_t)reloadBlock;

// 直接使用页面 执行点击事件后自动移除页面
+ (void)showOnView:(UIView *)view reloadBlock:(dispatch_block_t)reloadBlock;

@end
