//
//  MBProgressHUD+Add.h
//  MVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <MBProgressHUD/MBProgressHUD.h>

@interface MBProgressHUD (Add)

+ (void)showError:(NSString *)error toView:(UIView *)view;
+ (void)showSuccess:(NSString *)success toView:(UIView *)view;

+ (MBProgressHUD *)showMessag:(NSString *)message toView:(UIView *)view;

/**
 *  自定义显示图片、文字、动画时间
 *  @param animatedTime 动画时间
 */
+ (void)showHUDAddedTo:(UIView *)view
               message:(NSString *)message
             imageName:(NSString *)imageName
          animatedTime:(NSTimeInterval)animatedTime;

@end
