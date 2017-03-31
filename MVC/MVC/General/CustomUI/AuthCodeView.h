//
//  AuthCodeView.h
//  MVC
//
//  Created by 张坤 on 2017/3/24.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>
/*本类用于生成随机验证码*/
@interface AuthCodeView : UIView

@property (strong, nonatomic) NSArray *dataArray;//字符素材数组
@property (strong, nonatomic) NSMutableString *authCodeStr;//验证码字符串

@end
