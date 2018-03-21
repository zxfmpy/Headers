//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZCacheMonitorInfo.h"

@interface ZCacheRecoveryMonitorInfo : ZCacheMonitorInfo
{
    unsigned long long _reinstallCount;
    unsigned long long _cleanCount;
}

+ (id)monitorMeasureRange;
+ (id)monitorPoint;
@property(readonly, nonatomic) unsigned long long cleanCount; // @synthesize cleanCount=_cleanCount;
@property(readonly, nonatomic) unsigned long long reinstallCount; // @synthesize reinstallCount=_reinstallCount;
- (id)initWithReinstall:(unsigned long long)arg1 clean:(unsigned long long)arg2;

@end
