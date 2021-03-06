//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSProgressReporting-Protocol.h"

@class NSError, NSProgress, NSRecursiveLock, NSString;

@interface ZCOperation : NSOperation <NSProgressReporting>
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSError *_error;
    id _value;
    NSProgress *_progress;
    NSRecursiveLock *_lock;
}

+ (id)operationWithAsyncBlock:(CDUnknownBlockType)arg1;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
+ (id)rejectedOperation:(id)arg1;
+ (id)resolvedOperation:(id)arg1;
+ (id)defaultQueue;
+ (id)createError:(long long)arg1 format:(id)arg2;
+ (id)createCancelledError:(id)arg1;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (void)finishedWithError:(id)arg1;
- (void)operationStartExecute;
- (void)finished;
- (void)cancelOperation;
- (void)executeOperation;
- (void)cancel;
- (_Bool)checkDependencies;
- (void)main;
- (void)start;
@property(readonly, copy, nonatomic) CDUnknownBlockType addDependencies;
@property(readonly, copy, nonatomic) CDUnknownBlockType useQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType finally;
@property(readonly, copy, nonatomic) CDUnknownBlockType recover;
@property(readonly, copy, nonatomic) CDUnknownBlockType then;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

