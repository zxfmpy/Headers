//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class QQSF2018ActivityModel;

@interface QQSF2018ActivityTask : NSObject <NSCopying>
{
    unsigned long long _taskType;
    long long _promotionID;
    double _activityStartTime;
    double _activityEndTime;
    double _grabBeginTime;
    double _grabEndTime;
    unsigned long long _index;
    QQSF2018ActivityTask *_nextTask;
    QQSF2018ActivityTask *_preTask;
    QQSF2018ActivityModel *_activityModel;
}

@property(retain, nonatomic) QQSF2018ActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) QQSF2018ActivityTask *preTask; // @synthesize preTask=_preTask;
@property(retain, nonatomic) QQSF2018ActivityTask *nextTask; // @synthesize nextTask=_nextTask;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double grabEndTime; // @synthesize grabEndTime=_grabEndTime;
@property(nonatomic) double grabBeginTime; // @synthesize grabBeginTime=_grabBeginTime;
@property(nonatomic) double activityEndTime; // @synthesize activityEndTime=_activityEndTime;
@property(nonatomic) double activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(nonatomic) long long promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getNewYearTips;
- (id)getActivtyEveConfigData;
- (void)getAwardLogoBGImage:(CDUnknownBlockType)arg1;
- (void)getPendantImage:(CDUnknownBlockType)arg1;
- (void)setActivityModelWhenCopy:(id)arg1;
- (_Bool)isForbiddenPullDownAtTime:(double)arg1;
- (_Bool)canShowPendantAtTime:(double)arg1 timeOffset:(double)arg2;
- (id)getStartTimeBetweenPandantShowSectionAtTime:(double)arg1;
- (void)setPreActivityTask:(id)arg1;
- (void)setNextActivityTask:(id)arg1;
- (id)initWithPromotionID:(long long)arg1 TaskType:(unsigned long long)arg2;

@end
