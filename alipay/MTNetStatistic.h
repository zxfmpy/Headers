//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface MTNetStatistic : NSObject
{
    NSMutableDictionary *_storage;
    NSTimer *_timerCheckRequest;
}

+ (_Bool)isNetHookEnable;
+ (void)doMTLoadWork;
- (void).cxx_destruct;
- (_Bool)isEnable_image_check;
- (_Bool)isEnable_request_log;
- (void)saveStatData;
- (void)deleteStatData;
- (id)readStatData;
- (void)clearThisRunNetReportData;
- (id)getAndClearReportData;
- (id)getAndClearScoreOverview;
- (id)getAndClearBundlesStat;
- (id)getDataFlowOverview;
- (id)getNetAverageScore;
- (id)calculateScore:(id)arg1;
- (void)writeLog:(id)arg1;
- (void)checkImage:(id)arg1;
- (void)doRecord:(id)arg1;
- (void)doStat:(id)arg1;
- (_Bool)doFilter:(id)arg1 withLoging:(_Bool)arg2;
- (id)init;
- (void)checkRequests;
- (void)onTimerCheckRequest:(id)arg1;
- (void)checkRequestsByMinute;

@end
