//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSThread;

@interface APMainDeadlockHelper : NSObject
{
    _Bool _awaitingResponse;
    _Bool _hasLaunchFinished;
    unsigned int _mainthread;
    NSThread *_monitorThread;
    unsigned long long _anrCount;
}

@property(nonatomic) unsigned long long anrCount; // @synthesize anrCount=_anrCount;
@property(nonatomic) _Bool hasLaunchFinished; // @synthesize hasLaunchFinished=_hasLaunchFinished;
@property(nonatomic) _Bool awaitingResponse; // @synthesize awaitingResponse=_awaitingResponse;
@property(nonatomic) unsigned int mainthread; // @synthesize mainthread=_mainthread;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
- (void).cxx_destruct;
- (void)writeAnrLog;
- (void)watchdogAnswer;
- (void)watchdogPulse;
- (void)handleDeadLockinMainthread;
- (void)runMonitor;
- (id)init;

@end

