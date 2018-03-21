//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSTimer;

@interface QQControlBaseManager : NSObject
{
    NSRecursiveLock *_lock;
    long long _uin;
    NSMutableDictionary *_ioTaskDic;
    NSTimer *_delayGetTimer;
    NSTimer *_delaySaveTimer;
    _Bool _needToGetData;
    _Bool _needSaveData;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (id)onSaveCache;
- (void)onLoadCache:(id)arg1 forUin:(long long)arg2;
- (void)onClearCache;
- (void)onAppTerminate;
- (void)_onAppTerminate;
- (void)onAppCrash;
- (void)_onAppCrash;
- (void)onAppDidEnterBg;
- (void)_onAppDidEnterBg;
- (void)onAppWillEnterFg;
- (void)_onAppWillEnterFg;
- (void)onAccountChange;
- (void)_onAccountChange;
- (void)onForceOffLine;
- (void)_onForceOffLine;
- (void)doSaveCache:(id)arg1;
- (void)dispatchSaveCacheTask;
- (void)frequencyControlToSaveCache;
- (void)_saveCache;
- (void)dispatchGetCacheTask;
- (void)frequencyControlToGetCache;
- (void)markToSaveCache;
- (id)loadDataForUin:(long long)arg1;
- (id)fileNameForCacheData;
- (id)init;
- (void)dealloc;

@end
