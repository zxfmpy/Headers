//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class NSMutableArray, TBTradeShopPromotionDetailModel, UIButton;

@interface TBExtBuyShopPromotionDetailCell : TBExtBuyBaseCell
{
    TBTradeShopPromotionDetailModel *_model;
    NSMutableArray *_rowArray;
    UIButton *_moreButton;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSMutableArray *rowArray; // @synthesize rowArray=_rowArray;
@property(retain, nonatomic) TBTradeShopPromotionDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

