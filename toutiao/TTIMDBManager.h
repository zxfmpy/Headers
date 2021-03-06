//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTIMDatabaseQueue;
@protocol OS_dispatch_queue;

@interface TTIMDBManager : NSObject
{
    NSString *_currentDbName;
    TTIMDatabaseQueue *_currentDBQueue;
    NSObject<OS_dispatch_queue> *_dbTaskQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dbTaskQueue; // @synthesize dbTaskQueue=_dbTaskQueue;
@property(retain, nonatomic) TTIMDatabaseQueue *currentDBQueue; // @synthesize currentDBQueue=_currentDBQueue;
@property(retain, nonatomic) NSString *currentDbName; // @synthesize currentDbName=_currentDbName;
- (void).cxx_destruct;
- (id)getIMDataBasePathWithUserID:(id)arg1;
- (void)executeIMTask:(CDUnknownBlockType)arg1;
- (id)imdbQueue;
- (void)resetDB;
- (id)init;

@end

