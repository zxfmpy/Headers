//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSArray, NSString;

@interface MOBILECSABaseCraftsmanInfo : MOBILECSAToString
{
    int _certificated;
    NSString *_craftsmanId;
    NSString *_shopId;
    NSString *_craftsmanImg;
    NSString *_craftsmanName;
    NSString *_praise;
    NSString *_craftsmanGrade;
    double _star;
    double _score;
    NSArray *_skill;
    NSString *_pageUrl;
}

+ (Class)skillElementClass;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSArray *skill; // @synthesize skill=_skill;
@property(nonatomic) int certificated; // @synthesize certificated=_certificated;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double star; // @synthesize star=_star;
@property(retain, nonatomic) NSString *craftsmanGrade; // @synthesize craftsmanGrade=_craftsmanGrade;
@property(retain, nonatomic) NSString *praise; // @synthesize praise=_praise;
@property(retain, nonatomic) NSString *craftsmanName; // @synthesize craftsmanName=_craftsmanName;
@property(retain, nonatomic) NSString *craftsmanImg; // @synthesize craftsmanImg=_craftsmanImg;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *craftsmanId; // @synthesize craftsmanId=_craftsmanId;
- (void).cxx_destruct;

@end
