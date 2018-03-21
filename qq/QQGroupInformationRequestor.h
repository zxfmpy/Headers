//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;

@interface QQGroupInformationRequestor : NSObject <IEngineDispatchDelegate>
{
}

+ (id)sharedInstance;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestSetGroupLocation:(unsigned long long)arg1 Location:(id)arg2;
- (void)requestGroupListOnLogin;
- (int)requestGroupList:(_Bool)arg1;
- (void)didGetGroupListV2:(id)arg1;
- (void)didGetGroupList:(id)arg1;
- (void)internalDidGetGroupList:(_Bool)arg1 byLogin:(_Bool)arg2 refreshGroupInfo:(_Bool)arg3;
- (void)internalRequestGroupList:(_Bool)arg1;
- (void)didGetOneGroupInformation:(id)arg1;
- (void)delaySaveGroupExInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
