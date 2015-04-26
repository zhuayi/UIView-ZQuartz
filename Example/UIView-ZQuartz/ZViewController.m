//
//  ZViewController.m
//  UIView-ZQuartz
//
//  Created by zhuayi on 04/26/2015.
//  Copyright (c) 2014 zhuayi. All rights reserved.
//

#import "ZViewController.h"
#import "ZRectangle.h"
@interface ZViewController ()

@end

@implementation ZViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    ZRectangle *zrview = [[ZRectangle alloc] initWithFrame:CGRectMake(10, 10, 100, 100)];
    zrview.backgroundColor = [UIColor redColor];
    [self.view addSubview:zrview];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
