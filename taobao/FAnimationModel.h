//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlareModel.h"

@class NSString;

@interface FAnimationModel : FlareModel
{
    _Bool _autoreverses;
    double _beginTime;
    double _duration;
    double _speed;
    double _timeOffset;
    double _repeatCount;
    double _repeatDuration;
    NSString *_fillMode;
    NSString *_timingFunction;
}

@property(copy, nonatomic) NSString *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSString *fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) _Bool autoreverses; // @synthesize autoreverses=_autoreverses;
@property(nonatomic) double repeatDuration; // @synthesize repeatDuration=_repeatDuration;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;
- (double)floatValueWithData:(id)arg1 forKey:(id)arg2;
- (double)timeIntervalValueWithData:(id)arg1 forKey:(id)arg2;
- (void)parseMediaTimingWithData:(id)arg1;

@end

