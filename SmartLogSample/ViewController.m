//
//  ViewController.m
//  SmartLogSample
//
//  Created by liyazhou on 2019/3/25.
//  Copyright © 2019 达疆. All rights reserved.
//

#import "ViewController.h"
#import "SDManager.h"

@interface ViewController ()

@end



@implementation ViewController

+(void)load
{
    [SDManager shareInstance];
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


@end
