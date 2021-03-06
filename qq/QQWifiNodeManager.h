//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class IEngineDispatchDelegateNonRetian, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSTimer, QQWifiLRUCache;

@interface QQWifiNodeManager : NSObject <IEngineDispatchDelegate>
{
    IEngineDispatchDelegateNonRetian *_csDelegate;
    _Bool _hasWifiNodeReq;
    _Bool _needUpdateLBS;
    double _lastLBSTime;
    NSTimer *_delayReqTimer;
    NSMutableArray *_delayReqObjSet;
    NSRecursiveLock *_lbsLock;
    NSRecursiveLock *_delayReqLock;
    NSRecursiveLock *_callbackLock;
    QQWifiLRUCache *_wifiNodeLRUCache;
    QQWifiLRUCache *_apNodeInfoLRUCache;
    NSDictionary *_lbsCfg;
    NSMutableDictionary *_gpsCfg;
    NSMutableDictionary *_dictCallback;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dictCallback; // @synthesize dictCallback=_dictCallback;
@property(retain, nonatomic) NSMutableDictionary *gpsCfg; // @synthesize gpsCfg=_gpsCfg;
@property(retain, nonatomic) NSDictionary *lbsCfg; // @synthesize lbsCfg=_lbsCfg;
@property(retain, nonatomic) QQWifiLRUCache *apNodeInfoLRUCache; // @synthesize apNodeInfoLRUCache=_apNodeInfoLRUCache;
@property(retain, nonatomic) QQWifiLRUCache *wifiNodeLRUCache; // @synthesize wifiNodeLRUCache=_wifiNodeLRUCache;
@property(retain, nonatomic) NSRecursiveLock *callbackLock; // @synthesize callbackLock=_callbackLock;
@property(retain, nonatomic) NSRecursiveLock *delayReqLock; // @synthesize delayReqLock=_delayReqLock;
@property(retain, nonatomic) NSRecursiveLock *lbsLock; // @synthesize lbsLock=_lbsLock;
@property(retain, nonatomic) NSMutableArray *delayReqObjSet; // @synthesize delayReqObjSet=_delayReqObjSet;
@property(retain, nonatomic) NSTimer *delayReqTimer; // @synthesize delayReqTimer=_delayReqTimer;
@property double lastLBSTime; // @synthesize lastLBSTime=_lastLBSTime;
@property _Bool needUpdateLBS; // @synthesize needUpdateLBS=_needUpdateLBS;
@property _Bool hasWifiNodeReq; // @synthesize hasWifiNodeReq=_hasWifiNodeReq;
- (void)handleGetApNodeInfoList_Failed:(int)arg1;
- (void)handleGetApNodeInfo_Failed:(int)arg1;
- (void)notifyError:(id)arg1;
- (id)parseAPNodeCheckResp:(char *)arg1 bufferLength:(int)arg2;
- (void)handleGetApNodeInfoList_Succ:(CDStruct_7895f40e)arg1;
- (void)handleGetApNodeInfo_Succ:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)notifyApNodeInfoListCallBack:(int)arg1 isSuccess:(_Bool)arg2 ApNodeCheckResult:(id)arg3;
- (void)notifyApNodeInfoListCallBack_GetApNodeInfoList:(_Bool)arg1 delegates:(id)arg2 reqExtra:(id)arg3 ApNodeCheckResult:(id)arg4;
- (void)notifyApNodeInfoListCallBack_GetApNodeInfo:(_Bool)arg1 delegates:(id)arg2 reqExtra:(id)arg3 ApNodeCheckResult:(id)arg4;
- (void)requestApNodeInfo:(id)arg1 delegates:(id)arg2;
- (void)requestApNodeInfo:(id)arg1 delegate:(id)arg2;
- (_Bool)requestApNodeInfosInternal:(id)arg1 delegates:(id)arg2;
- (void)requestApNodeInfos:(id)arg1 delegate:(id)arg2;
- (_Bool)checkApNodeConfig;
- (void)parseXmlAsync:(id)arg1;
- (void)startParseXml_lbs:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleUpdateLocationEnd:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleGetLocFieldSucc:(id)arg1;
- (void)removeLbsNotification;
- (void)addLbsNotification;
- (void)handleGPSLocationRequest;
- (void)getGPSLocationInternal;
- (void)getGPSLocation;
- (void)onNotifyMSFLoginSucc:(id)arg1;
- (void)shouldHandleDelayReqWifiNodeSet;
- (void)handleDelayReqWifiNodeSet;
- (void)handleWifiNodeNextFragment;
- (void)handleWifiNodeFragment:(int)arg1;
- (void)addDelayReqWifiNodeSet:(id)arg1 delegate:(id)arg2 enableTimer:(_Bool)arg3;
- (void)onDelayReqTimer;
- (void)startDelayReqTimer:(unsigned long long)arg1;
- (void)clearDelayReqTimer;
- (id)findWifiNode:(id)arg1 signalStrength:(double)arg2;
- (void)updateWifiNodeSet:(id)arg1;
- (long long)queryApNodeState:(id)arg1 SSID:(id)arg2;
- (_Bool)queryApNodeInfo:(id *)arg1 BSSID:(id)arg2 SSID:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

