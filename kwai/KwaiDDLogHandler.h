//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KwaiBaseLogHandler-Protocol.h"

@class NSString;

@interface KwaiDDLogHandler : NSObject <KwaiBaseLogHandler>
{
    NSString *_logDirectory;
    long long _filterLevel;
}

@property(nonatomic) long long filterLevel; // @synthesize filterLevel=_filterLevel;
@property(retain, nonatomic) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
- (void).cxx_destruct;
- (void)kwai_logWithLevel:(long long)arg1 filterLevel:(long long)arg2 file:(id)arg3 function:(id)arg4 line:(int)arg5 message:(id)arg6;
- (void)kwai_logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;
- (void)setupDDLog;
- (id)defaultLogDirectory;
- (void)setupWithLogDirectory:(id)arg1;
- (void)customInit;
- (id)initWithLogDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
