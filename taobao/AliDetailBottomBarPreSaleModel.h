//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class AliDetailPresaleModel, NSString;

@interface AliDetailBottomBarPreSaleModel : AliDetailBottomBarItemModel
{
    AliDetailPresaleModel *_presaleModel;
    long long _countTime;
    NSString *_itemId;
    NSString *_bgColorStart;
    NSString *_bgColorEnd;
}

@property(retain, nonatomic) NSString *bgColorEnd; // @synthesize bgColorEnd=_bgColorEnd;
@property(retain, nonatomic) NSString *bgColorStart; // @synthesize bgColorStart=_bgColorStart;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long countTime; // @synthesize countTime=_countTime;
@property(retain, nonatomic) AliDetailPresaleModel *presaleModel; // @synthesize presaleModel=_presaleModel;
- (void).cxx_destruct;
- (void)setPresaleBuy:(id)arg1;
- (void)setPresaleEnd:(id)arg1;
- (void)setPresaleOnGoing:(id)arg1;
- (void)setPresaleNotStart;
- (void)parseDataFromDetailModel:(id)arg1;

@end
