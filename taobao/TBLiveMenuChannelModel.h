//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveMenuChannelModel : TBJSONModel
{
    _Bool _newOne;
    NSString *_title;
    NSString *_imgUrl;
    NSString *_channelId;
    NSString *_channelType;
    NSString *_tab2Url;
    NSString *_avatarHeadImg;
    NSString *_avatarNumber;
}

@property(copy, nonatomic) NSString *avatarNumber; // @synthesize avatarNumber=_avatarNumber;
@property(copy, nonatomic) NSString *avatarHeadImg; // @synthesize avatarHeadImg=_avatarHeadImg;
@property(copy, nonatomic) NSString *tab2Url; // @synthesize tab2Url=_tab2Url;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) _Bool newOne; // @synthesize newOne=_newOne;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

