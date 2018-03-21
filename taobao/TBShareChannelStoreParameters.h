//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBShareChannelStoreParameters : NSObject
{
    NSString *_shareType;
    NSString *_msgType;
    NSString *_shareSendName;
    NSString *_shareRemark;
    NSString *_sharePicUrl;
    NSString *_shareDesc;
    NSString *_shareUrl;
    NSString *_extendInfo;
    NSString *_businessId;
    NSString *_shareRequestId;
    NSString *_shareChannelType;
    NSDictionary *_extentInfoMap;
}

@property(retain, nonatomic) NSDictionary *extentInfoMap; // @synthesize extentInfoMap=_extentInfoMap;
@property(retain, nonatomic) NSString *shareChannelType; // @synthesize shareChannelType=_shareChannelType;
@property(retain, nonatomic) NSString *shareRequestId; // @synthesize shareRequestId=_shareRequestId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *sharePicUrl; // @synthesize sharePicUrl=_sharePicUrl;
@property(retain, nonatomic) NSString *shareRemark; // @synthesize shareRemark=_shareRemark;
@property(retain, nonatomic) NSString *shareSendName; // @synthesize shareSendName=_shareSendName;
@property(retain, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;

@end
