//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALIJTipsProtocol-Protocol.h"

@class HUDActivityView, NSString;

@interface ALIJTaobaoTipsImplement : NSObject <ALIJTipsProtocol>
{
    HUDActivityView *_loadingView;
}

@property(retain, nonatomic) HUDActivityView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)hideTipsImmediately:(_Bool)arg1;
- (void)hideTips;
- (void)showMsg:(id)arg1 overTime:(double)arg2;
- (void)showMsg:(id)arg1;
- (void)showErrorMsg:(id)arg1;
- (void)showSuccessMsg:(id)arg1;
- (void)endLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

