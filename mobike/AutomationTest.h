//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AutomationTest : NSObject
{
}

+ (void)analysisPerformanceRecords;
+ (void)analysisEventsWithSuccessBlock:(CDUnknownBlockType)arg1 andFailureBlock:(CDUnknownBlockType)arg2;
+ (id)outputDictionaryWithSortedKeys:(id)arg1;
+ (id)filterDictionary:(id)arg1;
+ (void)onAutomationTestFinished;
+ (void)start;
+ (void)growingEventManagerWillAddEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;

@end
