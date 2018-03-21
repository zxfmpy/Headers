//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "O2OImageAnimatorProtocol-Protocol.h"

@class NSString, UIImageView, UIView;

@interface O2OImageTransitionAnimator : NSObject <O2OImageAnimatorProtocol>
{
    unsigned long long _transitionType;
    UIImageView *_originView;
    UIImageView *_endView;
    UIView *_renderView;
    CDUnknownBlockType _animationFinishBlock;
    double _percent;
    struct CGRect _originViewFrame;
}

@property struct CGRect originViewFrame; // @synthesize originViewFrame=_originViewFrame;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(copy, nonatomic) CDUnknownBlockType animationFinishBlock; // @synthesize animationFinishBlock=_animationFinishBlock;
@property(nonatomic) __weak UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIImageView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UIImageView *originView; // @synthesize originView=_originView;
@property unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void).cxx_destruct;
- (void)actionFadeInOutTransition;
- (void)actionMoveXTransition;
- (void)actionWaveTransition;
- (void)actionZoomTransition;
- (void)resetTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
