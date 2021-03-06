//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NearbyEntranceItem : NSObject
{
    NSString *_iconUrl;
    NSString *_titleStr;
    NSString *_detailStr;
    long long _LvLimit;
    CDUnknownBlockType _actionBlock;
    NSString *_idStr;
    NSString *_detailNumStr;
    NSString *_jumpUrl;
    long long _type;
    long long _aniVersion;
    NSString *_aniUrl;
}

@property(copy, nonatomic) NSString *aniUrl; // @synthesize aniUrl=_aniUrl;
@property(nonatomic) long long aniVersion; // @synthesize aniVersion=_aniVersion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *detailNumStr; // @synthesize detailNumStr=_detailNumStr;
@property(copy, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long LvLimit; // @synthesize LvLimit=_LvLimit;
@property(copy, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

