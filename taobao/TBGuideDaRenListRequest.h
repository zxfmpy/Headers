//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideBaseListRequest.h"

@class NSString;

@interface TBGuideDaRenListRequest : TBGuideBaseListRequest
{
    NSString *_authorId;
    NSString *_authorPic;
    NSString *_authorNick;
    NSString *_authorDesc;
    NSString *_background;
}

@property(copy, nonatomic) NSString *background; // @synthesize background=_background;
@property(copy, nonatomic) NSString *authorDesc; // @synthesize authorDesc=_authorDesc;
@property(copy, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
- (void).cxx_destruct;
- (void)bottomLoadForAuthor:(id)arg1 withPage:(long long)arg2;
- (void)topFreshForAuthor:(id)arg1;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)init;
- (id)methodName;

@end

