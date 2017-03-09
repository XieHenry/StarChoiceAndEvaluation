//
//  ViewController.m
//  星星等级选择
//
//  Created by Franta on 17/3/9.
//  Copyright © 2017年 Franta. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    ASStarRatingView *view = [[ASStarRatingView alloc]initWithFrame:CGRectMake(100, 100, 200, 50)];
    view.delegate = self;
    [self.view addSubview:view];


}

#pragma mark 代理方法
- (void)starNumber:(float)f{
    NSLog(@"点击的是%f颗星",f);
}




- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
