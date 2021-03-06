//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTStartupTask.h"

#import "CrashlyticsDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface TTFabricSDKRegister : TTStartupTask <CrashlyticsDelegate, UIApplicationDelegate>
{
}

+ (void)clearCrashCount;
+ (void)addOneCrashCount;
+ (long long)currentCrashCount;
+ (void)startSendExceptionInfoWithOutLog;
- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerCrashlyticsSDK;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startWithApplication:(id)arg1 options:(id)arg2;
- (_Bool)isConcurrent;
- (_Bool)isResident;
- (id)taskIdentifier;
- (_Bool)shouldExecuteForApplication:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

