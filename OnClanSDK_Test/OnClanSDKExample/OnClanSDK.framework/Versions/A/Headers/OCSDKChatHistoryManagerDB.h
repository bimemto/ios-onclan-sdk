//
//  OCSDKSQLiteManager.h
//  OnClanSDK
//
//  Created by TienLe on 10/7/14.
//
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
#import "AMMessage.h"

@interface OCSDKChatHistoryManagerDB : NSObject

//@property (strong, nonatomic) FMDatabase *database;

+ (OCSDKChatHistoryManagerDB*) sharedInstance;

- (void) initializeDatabase;

- (void)saveChatHistoryWithObjects:(NSMutableArray*)arrayMessage inTopicId:(NSString*)topicId;

- (NSString *) databasePath;

- (NSMutableArray*)readChatHistoryFromDatabaseWithTopicId:(NSString *)topicId;

- (void)deleteChatHistoryAtIndex:(NSInteger)index withDatabase:(FMDatabase*)db;

- (void)deleteChatHistoryInTopic:(NSString*)topicId withDatabase:(FMDatabase*)db;
@end
