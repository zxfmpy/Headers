//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILESEARCHSearchRequest.h"

@class NSString;

@interface MOBILESEARCHKHomeSearchRequest : MOBILESEARCHSearchRequest
{
    int _partnerAggType;
    int _pageNo;
    NSString *_mapRange;
    NSString *_tags;
    NSString *_categories;
    NSString *_serviceLocation;
    NSString *_serviceDistrict;
    NSString *_partnerId;
}

@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(nonatomic) int partnerAggType; // @synthesize partnerAggType=_partnerAggType;
@property(retain, nonatomic) NSString *serviceDistrict; // @synthesize serviceDistrict=_serviceDistrict;
@property(retain, nonatomic) NSString *serviceLocation; // @synthesize serviceLocation=_serviceLocation;
@property(retain, nonatomic) NSString *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *mapRange; // @synthesize mapRange=_mapRange;
- (void).cxx_destruct;

@end

