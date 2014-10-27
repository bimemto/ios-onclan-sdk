//
//  OCSDKCHCoordinator.h
//  OnClanSDK
//
//  Created by Tue Nguyen on 8/8/14.
//
//

#import "CHDraggingCoordinator.h"

@protocol CHDraggableViewDelegate;

@interface OCSDKCHCoordinator : CHDraggingCoordinator <CHDraggableViewDelegate>
{
    
}
- (CGRect) _dropAreaWithReleasePoint:(CGPoint) releasePoint;
@end
