//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQPicPreDownDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QQPicAutoDownDataStat;

@interface QQPicPreDownPolicy : NSObject <QQPicPreDownDelegate>
{
    QQPicAutoDownDataStat *_dataStatForAutoLearn;
    NSMutableDictionary *_dictAutoPic;
    NSString *_lockDictAutoPic;
    NSMutableDictionary *_dictWifiAutoPic;
    NSString *_lockDictWifiAutoPic;
    NSString *_uin;
    NSMutableDictionary *_dictAllPicNetFlow;
    NSString *_lockDictAllPicNetFlow;
    NSMutableDictionary *_dicGifAIOShow;
    NSString *_lockDicGifAIOShow;
    NSMutableDictionary *_dicGifClickShow;
    NSString *_lockDicGifClickShow;
}

+ (unsigned int)getLargePicLengthHelper:(id)arg1;
+ (_Bool)isPicSizeOverMax:(id)arg1 nPicSize:(unsigned int)arg2;
+ (id)getInstance;
- (unsigned int)getMaxPreDownArraryLength;
- (int)getPicAuDownTimePoint;
- (void)resetAutoLeranStat:(long long)arg1 nxGAppFlow:(int)arg2 nxGPicFlow:(int)arg3 nxGC2CPicFlow:(int)arg4;
- (void)reportPicAccuData;
- (void)StatAccuPreDownData;
- (void)recordAppxGFlows:(long long)arg1 nxGAppFlow:(unsigned long long)arg2 nxGPicFlow:(unsigned long long)arg3 nxGC2CPicFlow:(unsigned long long)arg4;
- (void)logAutoLearnParams:(id)arg1;
- (void)reportPicAutoLearnStat;
- (void)loadPicAutoLearnStat;
- (void)reportGifShowData;
- (_Bool)savePicAutoLearnStat;
- (void)loadAllGifClick;
- (void)loadAllGifShow;
- (void)loadPicAutoLearnUUidsWifi;
- (void)loadPicAutoLearnUUids;
- (_Bool)saveAllGifClick;
- (_Bool)saveAllGifShow;
- (_Bool)savePicAutoLearnUUidsWifi;
- (_Bool)savePicAutoLearnUUids;
- (id)getAllGifClickPath;
- (id)getAllGifShowPath;
- (id)getPicStatFilePath;
- (id)getPicSettingUUidsPathWifi;
- (id)getPicSettingUUidsPath;
- (id)getPicSettingPath;
- (void)initAutoLearnParamsDialy;
- (unsigned int)getPicAuLPicMaxSize;
- (unsigned int)getFDFlowShow;
- (unsigned int)getPicPreDownShowEnabled;
- (unsigned int)getFDFlowMiss;
- (unsigned int)getFDFlowHit;
- (unsigned int)getMaxLimitFlowFloat4G;
- (unsigned int)getMaxLimitFlow4G;
- (unsigned int)getMaxWasteFlow4G;
- (unsigned int)getMaxLimitFlowFloat3G;
- (unsigned int)getMaxLimitFlow3G;
- (unsigned int)getMaxWasteFlow3G;
- (void)didShowPic:(id)arg1;
- (void)didClickPic:(id)arg1 isGif:(_Bool)arg2;
- (void)onAutoDownFileSuccess:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)addAutoDownPic:(id)arg1 strUUid:(id)arg2 nPicSize:(int)arg3;
- (_Bool)canAutoDownPic:(id)arg1 nPicSize:(unsigned int)arg2;
- (_Bool)isPeakTime:(id)arg1;
- (_Bool)judgePeakFlow:(id)arg1;
- (int)getUseLocalFlowSet;
- (unsigned int)getMaxWifiFlow;
- (unsigned int)getMax4GFlow;
- (unsigned int)getMax3GFlow;
- (unsigned int)getMax2GFlow;
- (void)loadAllPicNetFlowDic;
- (void)getAllDayPicFlowWifi:(long long *)arg1 xgPicFlow:(long long *)arg2;
- (void)recordPicDownloadBytes:(long long)arg1;
- (_Bool)isOutMaxFlow;
- (long long)getAllPreDownPolicy;
- (int)getPreDownPolicy:(id)arg1;
- (_Bool)isPreDownPicOnlyPolicy:(id)arg1;
- (_Bool)isAddPreDown:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

