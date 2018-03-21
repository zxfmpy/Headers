//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class APMidasExtendInfo, APMidasSpecialMPInfoReq, NSString, UIImage, UIViewController;

@interface APMidasBaseReq : QQGroupPropertyModel
{
    int _reqSaveType;
    APMidasSpecialMPInfoReq *specialMpInfoReq;
    APMidasExtendInfo *exInfo;
    NSString *_provideUin;
    NSString *_provideType;
}

@property(retain, nonatomic) NSString *provideType; // @synthesize provideType=_provideType;
@property(retain, nonatomic) NSString *provideUin; // @synthesize provideUin=_provideUin;
@property(readonly, nonatomic) APMidasExtendInfo *exInfo; // @synthesize exInfo;
@property(readonly, nonatomic) APMidasSpecialMPInfoReq *specialMpInfoReq; // @synthesize specialMpInfoReq;
@property(readonly, nonatomic) int reqSaveType; // @synthesize reqSaveType=_reqSaveType;
- (void)dealloc;
- (_Bool)validateParams;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *acctType; // @dynamic acctType;
@property(nonatomic) _Bool canChange; // @dynamic canChange;
@property(nonatomic) UIViewController *contextController; // @dynamic contextController;
@property(retain, nonatomic) NSString *offerId; // @dynamic offerId;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(retain, nonatomic) NSString *openKey; // @dynamic openKey;
@property(retain, nonatomic) NSString *pf; // @dynamic pf;
@property(retain, nonatomic) NSString *pfKey; // @dynamic pfKey;
@property(retain, nonatomic) UIImage *resImg; // @dynamic resImg;
@property(retain, nonatomic) NSString *reserve1; // @dynamic reserve1;
@property(retain, nonatomic) NSString *reserve2; // @dynamic reserve2;
@property(retain, nonatomic) NSString *reserve3; // @dynamic reserve3;
@property(retain, nonatomic) NSString *saveValue; // @dynamic saveValue;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSString *zoneId; // @dynamic zoneId;

@end
