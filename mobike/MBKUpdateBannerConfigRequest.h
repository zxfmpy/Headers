//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKUpdateBannerConfigRequest : MBKMobikeRequest
{
    NSString *_update_time;
    NSString *_city_code;
    double _screen_width;
    NSString *_user_id;
    NSString *_lang;
}

@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) double screen_width; // @synthesize screen_width=_screen_width;
@property(copy, nonatomic) NSString *city_code; // @synthesize city_code=_city_code;
@property(copy, nonatomic) NSString *update_time; // @synthesize update_time=_update_time;
- (void).cxx_destruct;
- (id)init;

@end

