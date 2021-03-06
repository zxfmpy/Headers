//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TMNativeCacheCenterData;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TMNativeCacheCenter : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_data_transition_queue;
    TMNativeCacheCenterData *_data;
    NSDictionary *_dict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) TMNativeCacheCenterData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *data_transition_queue; // @synthesize data_transition_queue=_data_transition_queue;
- (id)dataToObjects:(id)arg1;
- (void)dataToObjects:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)dataToObject:(id)arg1;
- (void)dataToObject:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)objectToData:(id)arg1;
- (void)objectToData:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)dataWithKey:(id)arg1 value:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

