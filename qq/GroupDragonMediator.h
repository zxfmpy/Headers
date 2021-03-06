//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/GDDataObserver-Protocol.h>

@class NSString, QQGroupChatViewController;
@protocol GroupDragonMediatorDataReportDelegate;

@interface GroupDragonMediator : NSObject <GDDataObserver>
{
    QQGroupChatViewController *_vc;
    NSString *_groupCode;
    id <GroupDragonMediatorDataReportDelegate> _reportDelegate;
}

@property(retain, nonatomic) id <GroupDragonMediatorDataReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) __weak QQGroupChatViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)onNewDataCome:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)unListenNotification;
- (void)listenNotification;
- (void)requestDragonData:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

