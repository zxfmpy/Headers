//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel;

@interface QZCountdownView : UIView
{
    UILabel *_textLabel;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UILabel *_secLabel;
    UIView *_timeView;
    NSTimer *_timer;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;

@end

