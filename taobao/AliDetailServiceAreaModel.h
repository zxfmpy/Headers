//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailRighsInfo;

@interface AliDetailServiceAreaModel : TBJSONModel
{
    NSString *_icon;
    NSString *_tid;
    NSString *_link;
    NSString *_name;
    NSArray<AliDetailRighsInfo> *_services;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSArray<AliDetailRighsInfo> *services; // @synthesize services=_services;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

