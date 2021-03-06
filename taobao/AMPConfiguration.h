//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AMPDBOperator, AMPDataGroup, OS_dispatch_queue;

@interface AMPConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_proccessQueue;
    id <AMPDBOperator> _dbOperator;
    id <AMPDataGroup> _configValue;
}

+ (id)standardConfiguration;
- (void).cxx_destruct;
- (void)clear;
- (void)removeItemForKey:(id)arg1;
- (id)itemForKey:(id)arg1;
- (void)setItem:(id)arg1 forKey:(id)arg2;
- (void)setDBOperator:(id)arg1;
- (void)dispatchSafeSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

