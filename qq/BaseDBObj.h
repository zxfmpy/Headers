//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabase, NSString, QQDBTaskQueue;

@interface BaseDBObj : NSObject
{
    FMDatabase *_fmdb;
    NSString *_dbFilePath;
    unsigned int _myWorkID;
    QQDBTaskQueue *_taskQueue;
}

+ (id)setParametersExceptLastOne:(SEL)arg1 target:(id)arg2 va:(char *)arg3;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (void)dropIndex:(id)arg1 inDatabase:(id)arg2;
@property(retain) QQDBTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void).cxx_destruct;
- (void)asyncHighPriorityTask:(CDUnknownBlockType)arg1;
- (void)syncHighPriorityTask:(CDUnknownBlockType)arg1;
- (void)syncAllWithBlock:(CDUnknownBlockType)arg1;
- (void)doAsyncDBBlock:(CDUnknownBlockType)arg1 target:(id)arg2;
- (void)doSyncDBBlock:(CDUnknownBlockType)arg1 target:(id)arg2;
- (void)doAsyncDBBlock:(CDUnknownBlockType)arg1 target:(id)arg2 taskkey:(id)arg3;
- (void)doSyncDBBlock:(CDUnknownBlockType)arg1 target:(id)arg2 taskkey:(id)arg3;
- (id)invokationWithDBBlock:(CDUnknownBlockType)arg1;
- (void)executeDBBlock:(CDUnknownBlockType)arg1;
- (void)deleteDB;
- (void)cleanTasks;
- (void)removeTaskQueueObserver:(id)arg1;
- (void)addTaskQueueObserver:(id)arg1;
- (void)forceClose;
- (int)doAsyncOperation:(SEL)arg1 target:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (int)doAsyncOperation:(SEL)arg1 target:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (id)doDbOperation:(SEL)arg1 target:(id)arg2;
- (void)doAsyncWork:(id)arg1 userdata:(id)arg2 callback:(id)arg3 workId:(int)arg4 callThread:(id)arg5;
- (void)doCallback:(id)arg1;
- (id)GetDbInstance;
- (void)createDBFilePath;
- (void)dealloc;
- (void)flush;
- (void)setTaskQueueWorkMode:(int)arg1;
- (void)setTaskQueueOpen:(_Bool)arg1;
- (id)initWithDBPath:(id)arg1 key:(id)arg2 priority:(double)arg3;
- (id)initWithDBPath:(id)arg1;
- (int)doAsyncInvoke:(id)arg1 target:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (id)doDbOperation:(SEL)arg1 target:(id)arg2 va:(char *)arg3 async:(_Bool)arg4;
- (id)doDbOperationWithInvoke:(id)arg1 async:(_Bool)arg2;
- (void)releaseFmdb;
- (_Bool)initFmdb;

@end

