//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseSingleton.h>

@class CFT_UILoadingView, NSString;

@interface CFT_TPLoadOCSPlugin : BaseSingleton
{
    _Bool _isDownLoading;
    CFT_UILoadingView *_loadingview;
    NSString *_strCurrentBid;
}

@property(retain, nonatomic) NSString *strCurrentBid; // @synthesize strCurrentBid=_strCurrentBid;
@property(nonatomic) _Bool isDownLoading; // @synthesize isDownLoading=_isDownLoading;
@property(retain, nonatomic) CFT_UILoadingView *loadingview; // @synthesize loadingview=_loadingview;
- (_Bool)isNewOcsPack:(id)arg1;
- (void)invokeOcsPluginBid:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)invokeOcsPluginLoadviewBid:(id)arg1 loadView:(id)arg2 showLoadSelector:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)removeLoadingview;
- (void)dealloc;
- (id)init;

@end

