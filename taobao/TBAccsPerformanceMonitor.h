//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBAccsPerformanceMonitor : NSObject
{
    NSMutableDictionary *_entityDict;
}

+ (void)commiteMonitorEntiryByDataID:(id)arg1;
+ (id)getMonitorEntiryByDataID:(id)arg1 ifNotExistCreate:(_Bool)arg2;
+ (id)shareInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *entityDict; // @synthesize entityDict=_entityDict;
- (void).cxx_destruct;
- (id)init;

@end
