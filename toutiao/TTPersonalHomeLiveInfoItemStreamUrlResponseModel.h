//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString;

@interface TTPersonalHomeLiveInfoItemStreamUrlResponseModel : TTResponseModel
{
    NSString *_stream_id;
    NSNumber *_create_time;
    NSString *_flv_pull_url;
    NSString *_alternate_pull_url;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *alternate_pull_url; // @synthesize alternate_pull_url=_alternate_pull_url;
@property(copy, nonatomic) NSString *flv_pull_url; // @synthesize flv_pull_url=_flv_pull_url;
@property(retain, nonatomic) NSNumber *create_time; // @synthesize create_time=_create_time;
@property(copy, nonatomic) NSString *stream_id; // @synthesize stream_id=_stream_id;
- (void).cxx_destruct;

@end
