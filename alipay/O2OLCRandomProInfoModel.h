//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSArray;

@interface O2OLCRandomProInfoModel : O2OHTTPModel
{
    unsigned long long _count;
    NSArray *_proInfos;
}

@property(readonly, nonatomic) NSArray *proInfos; // @synthesize proInfos=_proInfos;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (void)didStartLoading;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end
