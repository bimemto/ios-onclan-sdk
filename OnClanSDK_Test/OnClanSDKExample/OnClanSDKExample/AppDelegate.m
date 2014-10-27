//
//  AppDelegate.m
//  OnClanSDKExample
//
//  Created by Tue Nguyen on 10/10/14.
//  Copyright (c) 2014 Tue Nguyen. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import <OnClanSDK/OCSDK.h>

#define CLIENT_ID @"e7e51971a84e5bf97e9ac02d8dff5991053bf6358"
#define API_KEY @"de36bb8ea04a3387543110f52b21476b053bf6358"

@interface AppDelegate ()

@end

@implementation AppDelegate
            

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.viewController = [[ViewController alloc] initWithNibName:@"ViewController" bundle:nil];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    //    _navigation = [[UINavigationController alloc] initWithRootViewController:_viewController];
    //    [self.window setRootViewController:self.navigation];
    [self.window setRootViewController:self.viewController];
    [self.window makeKeyAndVisible];
    [OCSDKConfigure configWithAPIKey:@"de36bb8ea04a3387543110f52b21476b053bf6358"];
    
    return YES;
}

- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [OCSDKConfigure handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
