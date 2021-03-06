//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSBarrageContainer, KSBarrageViewCache, NSMutableArray, NSMutableDictionary;

@interface KSBarrageTrack : UIView
{
    _Bool _isLongPressBegined;
    double _barrageSpace;
    KSBarrageViewCache *_viewGenerator;
    CDUnknownBlockType _willEndDisplayView;
    NSMutableDictionary *_viewPrototypes;
    NSMutableArray *_barragesCache;
    NSMutableArray *_flyingBarrageContainers;
    KSBarrageContainer *_barrageContainerWillBeLongPressed;
}

@property _Bool isLongPressBegined; // @synthesize isLongPressBegined=_isLongPressBegined;
@property(retain, nonatomic) KSBarrageContainer *barrageContainerWillBeLongPressed; // @synthesize barrageContainerWillBeLongPressed=_barrageContainerWillBeLongPressed;
@property(retain, nonatomic) NSMutableArray *flyingBarrageContainers; // @synthesize flyingBarrageContainers=_flyingBarrageContainers;
@property(retain, nonatomic) NSMutableArray *barragesCache; // @synthesize barragesCache=_barragesCache;
@property(retain, nonatomic) NSMutableDictionary *viewPrototypes; // @synthesize viewPrototypes=_viewPrototypes;
@property(copy, nonatomic) CDUnknownBlockType willEndDisplayView; // @synthesize willEndDisplayView=_willEndDisplayView;
@property(retain, nonatomic) KSBarrageViewCache *viewGenerator; // @synthesize viewGenerator=_viewGenerator;
@property(nonatomic) double barrageSpace; // @synthesize barrageSpace=_barrageSpace;
- (void).cxx_destruct;
- (double)idleSpace;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)longPressDidBegin;
- (void)longPressWillBeginWithContainer:(id)arg1;
- (id)containerOnTouch:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)addBarrage:(id)arg1 withReuseIdentifier:(id)arg2;
- (_Bool)canAdBarrage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

