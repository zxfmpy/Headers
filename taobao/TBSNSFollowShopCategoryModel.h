//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSFollowBaseModel.h"

@class NSString;

@interface TBSNSFollowShopCategoryModel : TBSNSFollowBaseModel
{
    NSString *_catName;
    long long _followCount;
}

+ (id)requestWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)modelKeyMapperDictionary;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(copy, nonatomic) NSString *catName; // @synthesize catName=_catName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;

@end
