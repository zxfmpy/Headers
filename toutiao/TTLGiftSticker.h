//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TTLGiftSticker : NSObject
{
    NSNumber *_giftID;
    NSString *_name;
    NSString *_path;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
- (void).cxx_destruct;

@end

