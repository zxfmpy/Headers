//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWELiveStreamURLModel, AWEShareModel, AWEURLModel, AWEUserModel, NSNumber, NSString;

@interface AWELiveRoomModel : AWEBaseApiModel
{
    _Bool _inSandBox;
    NSNumber *_roomID;
    long long _status;
    AWEUserModel *_owner;
    NSString *_title;
    long long _userCount;
    long long _createTime;
    long long _finishTime;
    NSNumber *_streamID;
    AWELiveStreamURLModel *_streamURL;
    AWEShareModel *_shareInfo;
    long long _diggCount;
    long long _totalUserCount;
    long long _coins;
    AWEURLModel *_dynamicCoverURL;
    NSString *_enterFrom;
}

+ (id)dynamicCoverURLJSONTransformer;
+ (id)shareInfoJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)streamURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) AWEURLModel *dynamicCoverURL; // @synthesize dynamicCoverURL=_dynamicCoverURL;
@property(nonatomic) _Bool inSandBox; // @synthesize inSandBox=_inSandBox;
@property(nonatomic) long long coins; // @synthesize coins=_coins;
@property(nonatomic) long long totalUserCount; // @synthesize totalUserCount=_totalUserCount;
@property(nonatomic) long long diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) AWEShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) AWELiveStreamURLModel *streamURL; // @synthesize streamURL=_streamURL;
@property(retain, nonatomic) NSNumber *streamID; // @synthesize streamID=_streamID;
@property(nonatomic) long long finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEUserModel *owner; // @synthesize owner=_owner;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (id)initWithRoomID:(id)arg1;
@property(nonatomic) _Bool isRequestedCoverImage;

@end

