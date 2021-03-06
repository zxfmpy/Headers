//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZAnimation.h"

@class EZQuaternion;

@interface EZSlerpAnimation : EZAnimation
{
    EZQuaternion *mTmp1;
    EZQuaternion *mTmp2;
    EZQuaternion *_from;
    EZQuaternion *_to;
    EZQuaternion *_current;
}

@property(retain, nonatomic) EZQuaternion *current; // @synthesize current=_current;
@property(retain, nonatomic) EZQuaternion *to; // @synthesize to=_to;
@property(retain, nonatomic) EZQuaternion *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)slerpFromA:(id)arg1 toB:(id)arg2 withT:(double)arg3;
- (void)mixValueFrom:(float)arg1 to:(float)arg2;
- (id)init;

@end

