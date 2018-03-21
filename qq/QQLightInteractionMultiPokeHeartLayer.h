//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQLightInteractionAnimationActor.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString;

@interface QQLightInteractionMultiPokeHeartLayer : QQLightInteractionAnimationActor <CAAnimationDelegate>
{
    double _animatDuration;
    NSArray *_scaleValues;
    NSArray *_scaleKeyTimes;
    double _delayTime;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSArray *scaleKeyTimes; // @synthesize scaleKeyTimes=_scaleKeyTimes;
@property(retain, nonatomic) NSArray *scaleValues; // @synthesize scaleValues=_scaleValues;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) double animatDuration; // @synthesize animatDuration=_animatDuration;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)replay;
- (id)getAnimation;
- (id)initWithContainerLayer:(id)arg1 direction:(unsigned long long)arg2 Delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
