//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/WeiyunModel.h>

@class NSString;

@interface WeiyunPOI : WeiyunModel
{
    NSString *_showName;
    NSString *_poi_id;
    NSString *_city_name;
    NSString *_nation_name;
    NSString *_name;
    NSString *_addr;
}

+ (id)poiWithAddr:(const struct AddrMsg *)arg1;
@property(retain, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nation_name; // @synthesize nation_name=_nation_name;
@property(retain, nonatomic) NSString *city_name; // @synthesize city_name=_city_name;
@property(retain, nonatomic) NSString *poi_id; // @synthesize poi_id=_poi_id;
- (void).cxx_destruct;
- (id)showName;

@end

