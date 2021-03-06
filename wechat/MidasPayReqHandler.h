//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPPayDelegate-Protocol.h"

@class MidasIAPPayReq, NSString;
@protocol MidasPayReqHandlerDelegate;

@interface MidasPayReqHandler : NSObject <MidasIAPPayDelegate>
{
    unsigned int _reqId;
    MidasIAPPayReq *_req;
    id <MidasPayReqHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <MidasPayReqHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int reqId; // @synthesize reqId=_reqId;
@property(retain, nonatomic) MidasIAPPayReq *req; // @synthesize req=_req;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)needLogin;
- (id)initWithReq:(id)arg1 reqId:(unsigned int)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

