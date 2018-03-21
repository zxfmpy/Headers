//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MCMessageLinkMonitorModel : NSObject
{
    _Bool _lastStatus;
    NSString *_cvsType;
    NSString *_messageCode;
    NSString *_messageType;
    NSString *_netType;
    double _startSaveDB;
    double _endSaveDB;
    NSString *_code;
    NSString *_subCode;
    NSString *_info;
    double _startTime;
    double _endTime;
    NSMutableArray *_sendPath;
}

+ (void)loadInitial;
@property(retain, nonatomic) NSMutableArray *sendPath; // @synthesize sendPath=_sendPath;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) double endSaveDB; // @synthesize endSaveDB=_endSaveDB;
@property(nonatomic) double startSaveDB; // @synthesize startSaveDB=_startSaveDB;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(nonatomic) _Bool lastStatus; // @synthesize lastStatus=_lastStatus;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *messageCode; // @synthesize messageCode=_messageCode;
@property(retain, nonatomic) NSString *cvsType; // @synthesize cvsType=_cvsType;
- (void).cxx_destruct;
- (void)setMessageLinkByMessage:(id)arg1;
- (void)commit;
- (void)commitModelFailWithMessage:(id)arg1 code:(id)arg2 subCode:(id)arg3 info:(id)arg4;
- (void)commitModelSuccessWithMessage:(id)arg1;
- (void)addPath:(id)arg1;
- (id)init;

@end
