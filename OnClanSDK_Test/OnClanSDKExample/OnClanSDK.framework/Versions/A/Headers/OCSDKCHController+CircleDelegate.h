//
//  OCSDKCHController+CircleDelegate.h
//  OnClanSDK
//
//  Created by Tue Nguyen on 8/8/14.
//
//

#import "OCSDKCHController.h"
#import "AwesomeMenu.h"

@interface OCSDKCHController (CircleDelegate) <AwesomeMenuDelegate>
- (void) touchCircleMenu;
- (AwesomeMenu*) getCircleMenuViewWithPosition:(CGPoint) position;
@end
