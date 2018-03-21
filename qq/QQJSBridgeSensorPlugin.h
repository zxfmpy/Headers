//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/AVAudioPlayerDelegate-Protocol.h>
#import <QQMainProject/CLLocationManagerDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQJSBridgeSensorPlugin : QQWebViewPluginQQBizBase <CLLocationManagerDelegate, AVAudioPlayerDelegate, QQAudioSessionManagerDelegate>
{
    NSMutableDictionary *_aioGameSettings;
}

- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)unloadAIOGameRes;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)restoreCategoryForKey:(id)arg1;
- (void)saveCategoryForKey:(id)arg1 overwrite:(_Bool)arg2;
- (void)addPlayer:(id)arg1;
- (id)allocRecorder;
- (void)recordingTimerCallback:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)recorderUnavailable:(id)arg1;
- (void)compassUnavailable:(id)arg1;
- (void)accUnavailable:(id)arg1;
- (void)evaluateJavascript:(id)arg1 paramsText:(id)arg2;
- (id)handleJsBridgeRequest_sensor_preloadSound:(id)arg1;
- (id)handleJsBridgeRequest_sensor_playLocalSound:(id)arg1;
- (id)handleJsBridgeRequest_sensor_stopListen:(id)arg1;
- (id)handleJsBridgeRequest_sensor_startListen:(id)arg1;
- (id)handleJsBridgeRequest_sensor_vibrate:(id)arg1;
- (id)handleJsBridgeRequest_sensor_stopCompass:(id)arg1;
- (id)handleJsBridgeRequest_sensor_startCompass:(id)arg1;
- (id)handleJsBridgeRequest_sensor_stopAccelerometer:(id)arg1;
- (id)handleJsBridgeRequest_sensor_startAccelerometer:(id)arg1;
- (void)motionUnavailable:(id)arg1;
- (id)handleJsBridgeRequest_sensor_stopMotion:(id)arg1;
- (id)handleJsBridgeRequest_sensor_startMotion:(id)arg1;
- (void)handleJsBridgeRequest_sensor_getSensorStatus:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (_Bool)handleSchemaRequest:(id)arg1 schema:(id)arg2 fromEnv:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
