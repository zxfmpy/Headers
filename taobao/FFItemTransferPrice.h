//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDecimalNumber, NSString;

@interface FFItemTransferPrice : NSObject
{
    _Bool _priceUnavailable;
    NSDecimalNumber *_unitPrice;
    NSDecimalNumber *_promotionPrice;
    NSString *_sellUnit;
    NSString *_buyUnit;
}

@property(copy, nonatomic) NSString *buyUnit; // @synthesize buyUnit=_buyUnit;
@property(copy, nonatomic) NSString *sellUnit; // @synthesize sellUnit=_sellUnit;
@property(retain, nonatomic) NSDecimalNumber *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSDecimalNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(nonatomic) _Bool priceUnavailable; // @synthesize priceUnavailable=_priceUnavailable;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPromotion;

@end

