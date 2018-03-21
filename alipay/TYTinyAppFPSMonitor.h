//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSString;

@interface TYTinyAppFPSMonitor : NSObject
{
    double _firstLevelLagTime;
    double _secondLevelLagTime;
    double _thirdLevelLagTime;
    double _fourthLevelLagTime;
    CADisplayLink *_displayLink;
    double _lastTimestamp;
    double _totalTime;
    double _fgStayTime;
    double _beginTime;
    _Bool _shouldMonitor;
    NSString *_appId;
    unsigned long long _appType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned int)calculateFpsScore:(double)arg1 secondLevelLagTime:(double)arg2 thirdLevelLagTime:(double)arg3 fourthLevelLagTime:(double)arg4 interval:(double)arg5;
- (void)updateIsShouldMonitor;
- (void)resetLagParam;
- (void)displayLinkTick;
- (void)dealloc;
- (void)stopMonitor;
- (void)createDisplayLink;
- (void)uploadScore;
- (void)didEnterBackground;
- (void)updateMonitorTime;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)startMonitor:(id)arg1 appType:(unsigned long long)arg2;
- (unsigned int)wholeFpsScoreWithFgTime:(double)arg1;
- (_Bool)isShouldMonitor;
- (id)init;

@end
