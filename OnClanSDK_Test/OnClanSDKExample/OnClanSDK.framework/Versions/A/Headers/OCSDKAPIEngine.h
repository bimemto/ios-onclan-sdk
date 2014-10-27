//
//  APIEngine.h
//  AppotaMessager
//
//  Created by ToanDK on 3/17/14.
//  Copyright (c) 2014 ToanDK. All rights reserved.
//

#import "OCSDKAPIConfig.h"
#import "OCSDKConst.h"
#import "OCSDKNetworkEngine.h"

@interface OCSDKAPIEngine : OCSDKNetworkEngine

+(OCSDKAPIEngine *)sharedEngine;

+(NSString *)replaceTokenString:(NSString *)str;

-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
                   onComplete:(OCSDKDictionaryBlock) completionBlock
                      onError:(OCSDKErrorBlock) errorBlock;

-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
              withCacheEnable:(BOOL) cacheEnable
                   onComplete:(OCSDKDictionaryBlock) completionBlock
                      onError:(OCSDKErrorBlock) errorBlock;

-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
                    usingMKNK:(BOOL)isMK
              withCacheEnable:(BOOL) cacheEnable
                   onComplete:(OCSDKDictionaryBlock) completionBlock
                      onError:(OCSDKErrorBlock) errorBlock;

-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
              withCacheEnable:(BOOL) cacheEnable
         onCompleteWithString:(OCSDKStringBlock) completionBlock
                      onError:(OCSDKErrorBlock) errorBlock;

-(id)startOperationWithLink:(NSString *)url
             withParameters:(NSMutableDictionary *)params
                 httpMethod:(NSString *)method
                  usingMKNK:(BOOL)isMK
            withCacheEnable:(BOOL) cacheEnable
       onCompleteWithString:(OCSDKStringBlock) completionBlock
                    onError:(OCSDKErrorBlock) errorBlock;

@end
