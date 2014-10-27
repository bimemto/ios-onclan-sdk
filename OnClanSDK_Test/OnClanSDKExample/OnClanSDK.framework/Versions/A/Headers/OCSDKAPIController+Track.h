//
//  OCSDKAPIController+Track.h
//  OnClanSDK
//
//  Created by Tue Nguyen on 7/8/14.
//  Copyright (c) 2014 DB-Interactive. All rights reserved.
//

#import "OCSDKAPIController.h"

@interface OCSDKAPIController (Track)
- (void) getTrackInfoWithCompletionBlock:(OCSDKObjectBlock) completionBlock
                          withErrorBlock:(OCSDKErrorBlock) errorBlock;
@end
