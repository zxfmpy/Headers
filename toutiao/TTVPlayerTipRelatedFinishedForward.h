//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerTipFinished-Protocol.h"

@class NSDictionary, NSError, NSString, TTVPlayerTipRelatedFinished, TTVPlayerTipShareFinished, TTVVideoPlayerStateStore, TTVideoFinishRelatedViewService;

@interface TTVPlayerTipRelatedFinishedForward : UIView <TTVPlayerTipFinished>
{
    _Bool _isFullScreen;
    _Bool _canContinueRequest;
    float _requestPercent;
    float _preRemainderTime;
    CDUnknownBlockType _finishAction;
    TTVVideoPlayerStateStore *_playerStateStore;
    TTVPlayerTipRelatedFinished *_relatedView;
    TTVPlayerTipShareFinished *_shareView;
    NSDictionary *_dataInfo;
    NSError *_netError;
    TTVideoFinishRelatedViewService *_netService;
}

@property(retain, nonatomic) TTVideoFinishRelatedViewService *netService; // @synthesize netService=_netService;
@property(retain, nonatomic) NSError *netError; // @synthesize netError=_netError;
@property(retain, nonatomic) NSDictionary *dataInfo; // @synthesize dataInfo=_dataInfo;
@property(nonatomic) float preRemainderTime; // @synthesize preRemainderTime=_preRemainderTime;
@property(nonatomic) _Bool canContinueRequest; // @synthesize canContinueRequest=_canContinueRequest;
@property(nonatomic) float requestPercent; // @synthesize requestPercent=_requestPercent;
@property(retain, nonatomic) TTVPlayerTipShareFinished *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) TTVPlayerTipRelatedFinished *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)playPasterWhenRemainderTime:(double)arg1;
- (id)currentTimeStr;
- (void)ttv_kvo;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

