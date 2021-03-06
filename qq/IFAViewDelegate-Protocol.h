//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol IFAViewDelegate <NSObject>
- (void)onOpenByOtherAction;
- (void)onOperateAction;
- (void)onStopAction;
- (void)onOnlinePreviewAction:(id)arg1;
- (NSArray *)getViewDataInMode:(int)arg1;

@optional
- (int)getCurrentViewMode;
- (void)onBannerClicked;
- (void)onBannerClosed;
- (void)onWebviewFailLoad:(NSError *)arg1;
- (void)onOpenByQBrowserAction;
- (void)onVideoMenuClick;
- (void)onVideoStopPlay;
- (_Bool)onVideoPlayEnd:(long long)arg1;
- (void)onVideoPlayFailed:(NSError *)arg1;
@end

