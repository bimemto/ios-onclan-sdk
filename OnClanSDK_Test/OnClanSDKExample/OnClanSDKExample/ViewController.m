//
//  ViewController.m
//  OnClanSDKExample
//
//  Created by Tue Nguyen on 10/10/14.
//  Copyright (c) 2014 Tue Nguyen. All rights reserved.
//

#import "ViewController.h"
#import <OnClanSDK/OCSDK.h>

@interface ViewController ()

@end

@implementation ViewController
            
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showLeaderBoard:(id)sender {
    [OCSDKConfigure showLeaderBoard];
}

- (IBAction)showUserProfile:(id)sender {
    [OCSDKConfigure showUser];
}

- (IBAction)showChat:(id)sender {
    [OCSDKConfigure showChat];
}

- (IBAction)submitScore:(id)sender {
    [OCSDKLeaderboard submitScore:1000];
}
@end
