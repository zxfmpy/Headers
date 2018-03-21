//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NileCardFlowLayout, UIView;

@protocol CardFlowViewDelegate <NSObject>
- (UIView *)flowView:(NileCardFlowLayout *)arg1 cellForCardAtIndex:(long long)arg2 cardSize:(struct CGSize)arg3;
- (long long)numberOfCardsInFlowView:(NileCardFlowLayout *)arg1;

@optional
- (void)flowView:(NileCardFlowLayout *)arg1 cardSelectedIndexs:(NSArray *)arg2;
- (void)flowView:(NileCardFlowLayout *)arg1 cardClick:(long long)arg2;
@end
