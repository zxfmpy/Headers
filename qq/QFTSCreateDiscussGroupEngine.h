//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QFTSBaseEngine.h>

@class QQCreateDiscussGroupFilter;

@interface QFTSCreateDiscussGroupEngine : QFTSBaseEngine
{
    QQCreateDiscussGroupFilter *createDiscussGroupFilter;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)timerMonitor:(id)arg1;
- (void)endTimer;
- (void)startTimer;
- (void)searchRelationResultsHandle:(id)arg1 relationResults:(id)arg2 handledResults:(id)arg3;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (void)ftsDestructFTSEngine;
- (void)ftsConstructFTSEngine;

@end

