//
//  UIButton+Block.h
//  MVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^actionBlock)();
typedef void(^actionBlockWithButton)(UIButton *btn);

@interface UIButton (Block)

/**
 *  给UIButton增加block
 *
 *  @param controlEvents 传入controllEvents
 *  @param action        要执行的block
 */
- (void)addTargetControlEvent:(UIControlEvents)controlEvents actionBlock:(actionBlock)action;
/**
 *  UIButton Block版本 在block中可以获取button
 *
 *  @param controlEvents 传入controlEvents
 *  @param block         要执行的block
 */
- (void)addTargetWithButtonControlEvent:(UIControlEvents)controlEvents actionBlock:(actionBlockWithButton)block;

@end
