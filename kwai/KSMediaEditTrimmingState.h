//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWState.h"

@class KSETimeRange, KSMMediaProject, NSArray;

@interface KSMediaEditTrimmingState : LYWState
{
    KSETimeRange *_trimRange;
    NSArray *_deleteRange;
    KSMMediaProject *_project;
    double _maxTrimmingDuration;
    double _currentPlayTime;
}

@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) double maxTrimmingDuration; // @synthesize maxTrimmingDuration=_maxTrimmingDuration;
@property(retain, nonatomic) KSMMediaProject *project; // @synthesize project=_project;
@property(retain, nonatomic) NSArray *deleteRange; // @synthesize deleteRange=_deleteRange;
@property(retain, nonatomic) KSETimeRange *trimRange; // @synthesize trimRange=_trimRange;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

