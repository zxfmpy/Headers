//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>
#import <QQMainProject/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ODReportItem : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *_reportValueArr;
    _Bool _bRealTime;
    unsigned char _sendfailRetryCnt;
    NSString *_tid;
    NSString *_opername;
    NSString *_module;
    NSString *_action;
    NSString *_fromId;
    unsigned long long _actionTime;
    unsigned long long _actionOrder;
    unsigned long long _cycle;
    unsigned long long _dayCycle;
    unsigned long long _roomId;
    long long _channelType;
}

@property(nonatomic) unsigned char sendfailRetryCnt; // @synthesize sendfailRetryCnt=_sendfailRetryCnt;
@property(nonatomic) _Bool bRealTime; // @synthesize bRealTime=_bRealTime;
@property(nonatomic) long long channelType; // @synthesize channelType=_channelType;
@property(nonatomic) unsigned long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long dayCycle; // @synthesize dayCycle=_dayCycle;
@property(nonatomic) unsigned long long cycle; // @synthesize cycle=_cycle;
@property(nonatomic) unsigned long long actionOrder; // @synthesize actionOrder=_actionOrder;
@property(nonatomic) unsigned long long actionTime; // @synthesize actionTime=_actionTime;
@property(retain, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *opername; // @synthesize opername=_opername;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSMutableArray *reportValueArr; // @synthesize reportValueArr=_reportValueArr;
- (void).cxx_destruct;
- (void)addExtendColumnStringValue:(id)arg1 withColumn:(long long)arg2;
- (void)addExtendColumnDoubleValue:(double)arg1 withColumn:(long long)arg2;
- (void)addExtendColumnUIntValue:(unsigned int)arg1 withColumn:(long long)arg2;
- (id)getColNameByColumnIndex:(long long)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

