//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QQMsgMultiSendTextChecker, QQMsgMutilSendPackBase;

@interface QQMsgMutilSendEngine : NSObject <IEngineDispatchDelegate>
{
    QQMsgMutilSendPackBase *_packBase;
    NSMutableDictionary *_resendCache;
    QQMsgMultiSendTextChecker *_textChecker;
    NSMutableDictionary *_sendCache;
}

+ (id)shareInstance;
- (void)stopSendMsg:(int)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)sendPbPicMessageMutil:(id)arg1 offlineImgInfo:(id)arg2 uinList:(id)arg3 extra:(id)arg4;
- (int)sendPbSVedioMessageMutil:(id)arg1 videoMsgInfo:(id)arg2 uinList:(id)arg3 extra:(id)arg4;
- (int)sendPbTextMessageMutil:(id)arg1 shareAppInfo:(id)arg2 uinList:(id)arg3 extra:(id)arg4 multiSendType:(unsigned long long)arg5;
- (id)getTextChecker;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

