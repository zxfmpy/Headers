//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller;

@interface APBRPCManager : NSObject
{
    _Bool _isBusy;
    DTRpcAsyncCaller *_rpcCaller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(readonly, nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
- (void).cxx_destruct;
- (void)cancel;
- (void)upload:(id)arg1 withcompletionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

