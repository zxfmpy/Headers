//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSString;
@protocol Optional, WDOrderedItemStructModel><Optional;

@interface WDOrderedItemInfoStructModel : WDBaseModel
{
    NSArray<WDOrderedItemStructModel><Optional> *_data;
    NSString<Optional> *_name;
    NSString<Optional> *_ad_data;
    NSString<Optional> *_related_data;
}

@property(retain, nonatomic) NSString<Optional> *related_data; // @synthesize related_data=_related_data;
@property(retain, nonatomic) NSString<Optional> *ad_data; // @synthesize ad_data=_ad_data;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray<WDOrderedItemStructModel><Optional> *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

