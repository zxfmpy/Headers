//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIImage;

@interface UTShareContent : NSObject
{
    _Bool _isAliUrl;
    _Bool _closeWeiboAsyncReqest;
    NSString *_description;
    NSString *_weixinAppId;
    NSString *_weixinMsgType;
    NSString *_businessId;
    NSString *_shareScene;
    unsigned long long _messageType;
    NSURL *_url;
    NSString *_title;
    UIImage *_imageSource;
    NSURL *_imageUrl;
    NSString *_fromAppName;
    long long _maxTextSize;
}

@property(nonatomic) _Bool closeWeiboAsyncReqest; // @synthesize closeWeiboAsyncReqest=_closeWeiboAsyncReqest;
@property(nonatomic) long long maxTextSize; // @synthesize maxTextSize=_maxTextSize;
@property(retain, nonatomic) NSString *fromAppName; // @synthesize fromAppName=_fromAppName;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *imageSource; // @synthesize imageSource=_imageSource;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAliUrl; // @synthesize isAliUrl=_isAliUrl;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *shareScene; // @synthesize shareScene=_shareScene;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *weixinMsgType; // @synthesize weixinMsgType=_weixinMsgType;
@property(retain, nonatomic) NSString *weixinAppId; // @synthesize weixinAppId=_weixinAppId;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;
- (id)init;

@end
