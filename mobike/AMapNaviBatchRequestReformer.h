//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapRESTRequestReformer.h"

@class NSData;

@interface AMapNaviBatchRequestReformer : AMapRESTRequestReformer
{
    NSData *_postData;
}

- (void).cxx_destruct;
- (id)reformedParamsWithOriginal:(id)arg1;
- (id)initWithBatchRequest:(id)arg1;
- (id)postData;
- (id)url;
- (id)parameters;
- (id)baseURL;
- (id)method;

@end

