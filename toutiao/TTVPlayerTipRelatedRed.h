//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVPlayerTipRelatedView.h"

@class NSTimer, TTVPlayerTipRelatedEntity, UIButton, UIImageView, UILabel;

@interface TTVPlayerTipRelatedRed : TTVPlayerTipRelatedView
{
    UIButton *_button;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    NSTimer *_timer;
    TTVPlayerTipRelatedEntity *_entity;
}

@property(retain, nonatomic) TTVPlayerTipRelatedEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)clickAction;
- (void)pauseTimer;
- (void)startTimer;
- (void)layoutSubviews;
- (void)setEntitys:(id)arg1;
- (void)sendShowTrack:(id)arg1;
- (void)timeChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
