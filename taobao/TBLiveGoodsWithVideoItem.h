//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveBaseView.h"

@class NSString, UIImageView, UILabel, UIView;

@interface TBLiveGoodsWithVideoItem : TBLiveBaseView
{
    NSString *_itemId;
    NSString *_itemDetailURL;
    UIView *_backgrondView;
    UIView *_circleView;
    UIImageView *_iconImageView;
    UILabel *_durationTimeLabel;
    UILabel *_titleLabel;
    UIView *_whileBackView;
    UIImageView *_goodsImgView;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsPriceLabel;
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) UILabel *goodsPriceLabel; // @synthesize goodsPriceLabel=_goodsPriceLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *goodsImgView; // @synthesize goodsImgView=_goodsImgView;
@property(retain, nonatomic) UIView *whileBackView; // @synthesize whileBackView=_whileBackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *durationTimeLabel; // @synthesize durationTimeLabel=_durationTimeLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *backgrondView; // @synthesize backgrondView=_backgrondView;
@property(copy, nonatomic) NSString *itemDetailURL; // @synthesize itemDetailURL=_itemDetailURL;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)onTapGesture:(id)arg1;
- (void)refreshWithData:(id)arg1;
- (void)addAnimations;
- (void)setupInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

