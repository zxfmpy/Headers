//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKDataProviderDelegate-Protocol.h"
#import "MBKDataProviderProtocol-Protocol.h"

@class MBKMyAdoptionApi, MBKMyAdoptionModel, NSString;
@protocol MBKDataProviderDelegate;

@interface MBKMyAdoptionManager : NSObject <MBKDataProviderDelegate, MBKDataProviderProtocol>
{
    id <MBKDataProviderDelegate> _delegate;
    MBKMyAdoptionModel *_myAdoptionModel;
    MBKMyAdoptionApi *_api;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) MBKMyAdoptionApi *api; // @synthesize api=_api;
@property(retain, nonatomic) MBKMyAdoptionModel *myAdoptionModel; // @synthesize myAdoptionModel=_myAdoptionModel;
@property(nonatomic) __weak id <MBKDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestFailured:(id)arg1 error:(id)arg2;
- (void)requestSuccessed:(id)arg1;
- (_Bool)repeated;
- (void)configApi;
- (_Bool)isQuerying;
- (int)method;
- (void)startMBKRequest;
- (void)setParamsWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

