//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BEECityBusiData : NSObject
{
    _Bool _canMockData;
    NSString *_title;
    NSArray *_allCities;
    NSArray *_hotCities;
    NSArray *_historyCities;
}

@property(retain, nonatomic) NSArray *historyCities; // @synthesize historyCities=_historyCities;
@property(retain, nonatomic) NSArray *hotCities; // @synthesize hotCities=_hotCities;
@property(retain, nonatomic) NSArray *allCities; // @synthesize allCities=_allCities;
@property(nonatomic) _Bool canMockData; // @synthesize canMockData=_canMockData;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

