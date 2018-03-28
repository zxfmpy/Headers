//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDSDKBaseReq, BDSDKBaseResp, NSString;

@interface BDSDKSession : NSObject
{
    NSString *_sessionId;
    BDSDKBaseReq *_request;
    BDSDKBaseResp *_response;
}

+ (id)sessionWithReq:(id)arg1;
@property(retain, nonatomic) BDSDKBaseResp *response; // @synthesize response=_response;
@property(retain, nonatomic) BDSDKBaseReq *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithReq:(id)arg1;
- (id)init;
- (void)dealloc;

@end
