//
//  CloudKitManager.h
//  CloudKit-demo
//
//  Created by Maksim Usenko on 3/16/15.
//  Copyright (c) 2015 Yalantis. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CloudKitCompletionHandler)(NSArray *results, NSError *error);

@interface CloudKitManager : NSObject

+ (void)fetchAllCitiesWithCompletionHandler:(CloudKitCompletionHandler)handler;

+ (void)createRecord:(NSDictionary *)recordDic
   completionHandler:(CloudKitCompletionHandler)handler;

+ (void)updateRecordTextWithId:(NSString *)recordId
                          text:(NSString *)text
             completionHandler:(CloudKitCompletionHandler)handler;

+ (void)removeRecordWithId:(NSString *)recordId
         completionHandler:(CloudKitCompletionHandler)handler;

@end
