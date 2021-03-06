//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface QQRichOperatorBase : NSObject
{
    id _source;
    long long _status;
    _Bool _canceled;
    long long _tag;
    int _xo;
    _Bool _async;
    CDUnknownBlockType _handle;
    long long _dqpt;
    NSObject<OS_dispatch_queue> *_executContext;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executContext; // @synthesize executContext=_executContext;
@property(nonatomic) long long dqpt; // @synthesize dqpt=_dqpt;
@property(nonatomic) _Bool async; // @synthesize async=_async;
@property(copy, nonatomic) CDUnknownBlockType handle; // @synthesize handle=_handle;
- (id)description;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isFinish;
- (_Bool)canCancel;
- (_Bool)cancel;
- (_Bool)execut;
@property(nonatomic) long long status; // @dynamic status;
- (_Bool)fireStatusChange;
- (_Bool)executWarp;
- (_Bool)abort;
- (_Bool)start;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool canceled; // @dynamic canceled;
@property(retain, nonatomic) id source; // @dynamic source;
@property(nonatomic) long long tag; // @dynamic tag;

@end

