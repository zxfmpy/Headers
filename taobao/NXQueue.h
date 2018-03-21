//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NXQueue : NSObject
{
    unsigned long long _type;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSLock *_lock;
    struct NSMutableArray *_requests;
}

+ (id)queue:(unsigned long long)arg1 identifier:(id)arg2;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;

@end
