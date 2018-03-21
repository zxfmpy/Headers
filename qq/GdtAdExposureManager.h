//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UIView;

@interface GdtAdExposureManager : NSObject
{
    CDUnknownBlockType _adviewDidExpouse;
    CDUnknownBlockType _adviewWillExposure;
    UIView *_adView;
    NSTimer *_timer;
    double _startTime;
}

+ (id)shareInstance;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(copy, nonatomic) CDUnknownBlockType adviewWillExposure; // @synthesize adviewWillExposure=_adviewWillExposure;
@property(copy, nonatomic) CDUnknownBlockType adviewDidExpouse; // @synthesize adviewDidExpouse=_adviewDidExpouse;
- (void).cxx_destruct;
- (double)adViewPercentInWindow;
- (void)timerSelector;
- (void)adViewDidEndDisplay:(id)arg1;
- (void)adViewWillDisplay:(id)arg1;
- (void)dealloc;

@end
