//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBLiveColumnModel : TBJSONModel
{
    NSString *_identify;
    NSString *_title;
    NSArray *_allTags;
    NSArray *_extTags;
}

@property(retain, nonatomic) NSArray *extTags; // @synthesize extTags=_extTags;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (void).cxx_destruct;

@end

