//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQZoneNumberScrollAnimationView, UIColor, UIImageView;

@interface MQZoneBadgeAnimationView : UIView
{
    UIImageView *_roundRedImage;
    MQZoneNumberScrollAnimationView *_numberAnimationView;
    _Bool _prepared;
    CDUnknownBlockType _lastDelayBlock;
    double _fontSize;
    UIColor *_fontColor;
    unsigned long long _animationNumber;
}

@property(readonly, nonatomic) unsigned long long animationNumber; // @synthesize animationNumber=_animationNumber;
@property(readonly, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;

@end

