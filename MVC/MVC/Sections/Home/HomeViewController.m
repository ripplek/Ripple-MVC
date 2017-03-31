//
//  HomeViewController.m
//  MVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import "HomeViewController.h"
#import "XAFHttpClient.h"
#import "RequestManage.h"

@interface HomeViewController () <XAFAPIManagerParamSourceDelegate>
@property(nonatomic,strong) RequestManage *manager;
@property(nonatomic,strong) NSDictionary *sellParam;
@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
//    NSDictionary *sellParam = @{@"call":@"1"};
//    [[XAFHttpClient sharedClient] postUrl:@"http://iosapi.itcast.cn/loveBeen/focus.json.php" parameters:sellParam success:^(NSURLSessionDataTask *task, id responseObject) {
//        NSLog(@"cheng%@",responseObject);
//    } failure:^(NSError *error) {
//        NSLog(@"bai%@",error);
//    }];
    [self.manager startWithCompletionBlockWithSuccess:^(XAFAPIBaseManager *request) {
        NSLog(@"success%@",request.errorMessage);
        [request fetchDataWithReformer:nil];
    } failure:^(XAFAPIBaseManager *request) {
        NSLog(@"fail%@",request.errorMessage);
    }];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    self.sellParam = @{@"call":@"2"};
//    [self.manager loadData];
    [self.manager startWithCompletionBlockWithSuccess:^(XAFAPIBaseManager *request) {
        NSLog(@"success%@",request.errorMessage);
        id response = [request fetchDataWithReformer:(id <XAFAPIManagerCallbackDataReformer>)self.manager];
        NSLog(@"%@",response);
    } failure:^(XAFAPIBaseManager *request) {
        NSLog(@"fail%@",request.errorMessage);
    }];
}

- (NSDictionary *)paramsForApi:(XAFAPIBaseManager *)manager {
//    NSDictionary *sellParam = @{@"call":@"1"};
    return self.sellParam;
}

- (NSDictionary *)sellParam {
    if (!_sellParam) {
        _sellParam = @{@"call":@"1"};
    }
    return _sellParam;
}

- (RequestManage *)manager {
    if (!_manager) {
        _manager = [RequestManage new];
//        _manager.validator = self;
        _manager.paramSource = self;
    }
    return _manager;
}
@end
