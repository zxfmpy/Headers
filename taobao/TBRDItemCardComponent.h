//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class UIImageView, UILabel;

@interface TBRDItemCardComponent : TBCBaseComponent
{
    UIImageView *_itemImage;
    UILabel *_lbItem;
    UILabel *_lbMoney;
    UILabel *_lbRateLevel;
}

+ (id)defaultFields;
+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) UILabel *lbRateLevel; // @synthesize lbRateLevel=_lbRateLevel;
@property(retain, nonatomic) UILabel *lbMoney; // @synthesize lbMoney=_lbMoney;
@property(retain, nonatomic) UILabel *lbItem; // @synthesize lbItem=_lbItem;
@property(retain, nonatomic) UIImageView *itemImage; // @synthesize itemImage=_itemImage;
- (void).cxx_destruct;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

