//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, QZGDTCanvasPageInfo;

@protocol QZGDTCanvasPageCellDelegate <NSObject>

@optional
- (void)onVideoBottomBarShow:(_Bool)arg1 page:(QZGDTCanvasPageInfo *)arg2;
- (void)openWebView:(NSString *)arg1;
- (void)notifySecondAnimationComplete;
- (void)notifyFirstAnimationComplete;
@end
