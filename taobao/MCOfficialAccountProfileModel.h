//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCOfficialAccountProfileModelProtocol-Protocol.h"
#import "MCOfficialDataSourceDelegate-Protocol.h"

@class IMOfficalAccountInfo, NSString;
@protocol MCOfficialAccountProfileModelDelegate, MCOfficialDataSourceProtocol;

@interface MCOfficialAccountProfileModel : NSObject <MCOfficialDataSourceDelegate, MCOfficialAccountProfileModelProtocol>
{
    id <MCOfficialAccountProfileModelDelegate> _delegate;
    NSString *_officialID;
    NSString *_utPageName;
    NSString *_spmA;
    NSString *_spmB;
    id <MCOfficialDataSourceProtocol> _officialDataSource;
    IMOfficalAccountInfo *_innerAccountInfo;
}

@property(retain, nonatomic) IMOfficalAccountInfo *innerAccountInfo; // @synthesize innerAccountInfo=_innerAccountInfo;
@property(nonatomic) __weak id <MCOfficialDataSourceProtocol> officialDataSource; // @synthesize officialDataSource=_officialDataSource;
@property(copy, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(copy, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(copy, nonatomic) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property(copy, nonatomic) NSString *officialID; // @synthesize officialID=_officialID;
@property(nonatomic) __weak id <MCOfficialAccountProfileModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)officalAccountInfoUpdateReceiveFailed:(id)arg1;
- (void)officalAccountInfoUpdateDisturbFailed:(id)arg1;
- (void)officalAccountInfoSubscribedFail:(id)arg1 error:(id)arg2;
- (void)officalAccountInfoSubscribed:(id)arg1;
- (void)officalAccountInfoUpdated:(id)arg1;
- (void)setReceiveStatus:(long long)arg1 isNotify:(int)arg2;
- (void)setPushStatus:(long long)arg1;
- (void)subcribe;
- (void)loadOfficialAccountInfo;
- (id)officialAccountInfo;
- (void)dealloc;
- (id)initWithOfficialID:(id)arg1 bizKey:(id)arg2 utPageName:(id)arg3 spmA:(id)arg4 spmB:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

