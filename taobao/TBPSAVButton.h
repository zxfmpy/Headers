//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSEdgeInsetUIButton.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface TBPSAVButton : TBPSEdgeInsetUIButton
{
    _Bool _isShowCircle;
    NSString *_iconFontName;
    NSString *_title;
    CAShapeLayer *_circleLayer;
    UILabel *_iconLabel;
    UIImageView *_iconView;
}

@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) _Bool isShowCircle; // @synthesize isShowCircle=_isShowCircle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconFontName; // @synthesize iconFontName=_iconFontName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)setTitleColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
