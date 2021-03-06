//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString, NSTimer;

@interface NearbyActiveUserReporter : NSObject <IEngineDispatchDelegate>
{
    int _heartBeatInterval;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(nonatomic) int heartBeatInterval; // @synthesize heartBeatInterval=_heartBeatInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)createBuffWithCmd:(id)arg1;
- (void)finishHeartBeatReport;
- (void)startHeartBeatReport;
- (void)sendHeartBeatReport;
- (void)quitNearbyReport;
- (void)enterNearbyReport;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

