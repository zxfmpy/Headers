//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPGroupQRCodeInGroupPacket : AMPNetPacket
{
    NSString *_groupUserInfoJSONString;
    NSString *_QRCodeKey;
}

@property(retain, nonatomic) NSString *QRCodeKey; // @synthesize QRCodeKey=_QRCodeKey;
@property(retain, nonatomic) NSString *groupUserInfoJSONString; // @synthesize groupUserInfoJSONString=_groupUserInfoJSONString;
- (void).cxx_destruct;
- (id)initWithGroupUserInfo:(id)arg1 QRCodeKey:(id)arg2;
- (id)generateMtopBody;
- (id)generateMtopHeader;

@end
