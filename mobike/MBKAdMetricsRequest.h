//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKAdMetricsRequest : MBKMobikeRequest
{
    NSString *_platform;
    NSString *_h5Channel;
    NSString *_version;
    NSString *_lang;
    long long _longitude;
    long long _latitude;
    NSString *_citycode;
    double _screenwidth;
    unsigned long long _businessId;
    long long _spotId;
    NSString *_orderId;
}

@property(nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long spotId; // @synthesize spotId=_spotId;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(nonatomic) double screenwidth; // @synthesize screenwidth=_screenwidth;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) NSString *h5Channel; // @synthesize h5Channel=_h5Channel;
@property(nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)init;

@end

