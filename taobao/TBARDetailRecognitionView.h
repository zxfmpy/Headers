//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBARDetailMaskView, UILabel;

@interface TBARDetailRecognitionView : UIView
{
    _Bool _checkRecognitionTimeout;
    long long _recognitionStatus;
    NSString *_markerDesc;
    TBARDetailMaskView *_maskView;
    UILabel *_statusLabel;
    UILabel *_tipLabel;
    struct CGRect _recognitionRect;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) TBARDetailMaskView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) struct CGRect recognitionRect; // @synthesize recognitionRect=_recognitionRect;
@property(copy, nonatomic) NSString *markerDesc; // @synthesize markerDesc=_markerDesc;
@property(nonatomic) long long recognitionStatus; // @synthesize recognitionStatus=_recognitionStatus;
@property(nonatomic) _Bool checkRecognitionTimeout; // @synthesize checkRecognitionTimeout=_checkRecognitionTimeout;
- (void).cxx_destruct;
- (void)adjustStatusLabelFrame;
- (void)setRecognitionTimeoutStatusLabel;
- (void)setDefaultStatusLabel;
- (void)setupStatusLabel;
- (void)setupTipLabel;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 markerDesc:(id)arg2 recognitionRect:(struct CGRect)arg3;
- (id)initWithFrame:(struct CGRect)arg1 markerDesc:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

