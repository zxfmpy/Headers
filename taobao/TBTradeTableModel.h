//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSArray;

@interface TBTradeTableModel : TBTradeComponentModel
{
    NSArray *_meta;
}

@property(retain, nonatomic) NSArray *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (id)tableSlotWithRow:(int)arg1 Column:(int)arg2;
- (unsigned long long)columnNumWithRow:(int)arg1;
- (unsigned long long)rowNum;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end

