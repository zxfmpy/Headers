//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBDetailJHSTimerView, UIColor;

@protocol TBDetailJHSTimerViewDelegate <NSObject>

@optional
- (void)timerViewUpdateForegroudColor:(UIColor *)arg1;
- (void)timerViewUpdateBackgroudColor:(UIColor *)arg1;
- (void)timerViewUpdateTimer:(double)arg1;
- (double)timerViewScheduleInterval;
- (void)timerViewLayoutSubviews;
- (void)timerViewAddSubviews:(TBDetailJHSTimerView *)arg1;
- (struct CGSize)timerViewSize;
@end

