//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEAwemeModel, AWEVideoLabelView, CAGradientLayer, UIButton, UIImageView, YYAnimatedImageView;

@interface AWEUserWorkCollectionViewCell : UICollectionViewCell
{
    _Bool _isMine;
    YYAnimatedImageView *_imageView;
    UIImageView *_stateImageView;
    UIButton *_numberBtn;
    UIImageView *_privacyIconImageView;
    AWEVideoLabelView *_topLabel;
    UIImageView *_mediaTypeView;
    long long _type;
    AWEAwemeModel *_model;
    CAGradientLayer *_maskLayer;
}

+ (id)identifier;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *mediaTypeView; // @synthesize mediaTypeView=_mediaTypeView;
@property(retain, nonatomic) AWEVideoLabelView *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *privacyIconImageView; // @synthesize privacyIconImageView=_privacyIconImageView;
@property(retain, nonatomic) UIButton *numberBtn; // @synthesize numberBtn=_numberBtn;
@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(retain, nonatomic) YYAnimatedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)configWithModel:(id)arg1 isMine:(_Bool)arg2;
- (void)configWithModel:(id)arg1;
- (void)configWithType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

