//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString;

@interface QzoneJSBridgeMusicPlugin : QQWebViewPluginQQBizBase <UIAlertViewDelegate>
{
    _Bool _canReturnValue;
}

+ (id)playStatus2Str:(long long)arg1;
+ (long long)getLoopPlayback:(long long)arg1;
+ (void)setLoopPlayback:(long long)arg1 uin:(long long)arg2;
+ (long long)getPlayMode:(long long)arg1;
+ (void)setPlayMode:(long long)arg1 uin:(long long)arg2;
+ (long long)getWifiAutoPlay;
+ (void)setWifiAutoPlay:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

