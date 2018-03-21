//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NileCache, NileView;

@interface NileDataHelper : NSObject
{
    _Bool _isNetworkReturned;
    NileCache *_cache;
    NileView *_nileView;
    CDUnknownBlockType _succeedBlock;
    CDUnknownBlockType _succeedModelBlock;
    CDUnknownBlockType _preloadingViewBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _succeedComponentBlock;
    CDUnknownBlockType _invalidBlock;
    unsigned long long _networkState;
    CDUnknownBlockType _finishBlock;
    NSString *_bizName;
    NSString *_bizId;
    NSDictionary *_params;
    struct CGSize _size;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) _Bool isNetworkReturned; // @synthesize isNetworkReturned=_isNetworkReturned;
@property(nonatomic) unsigned long long networkState; // @synthesize networkState=_networkState;
@property(copy, nonatomic) CDUnknownBlockType invalidBlock; // @synthesize invalidBlock=_invalidBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedComponentBlock; // @synthesize succeedComponentBlock=_succeedComponentBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType preloadingViewBlock; // @synthesize preloadingViewBlock=_preloadingViewBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedModelBlock; // @synthesize succeedModelBlock=_succeedModelBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak NileView *nileView; // @synthesize nileView=_nileView;
@property(nonatomic) __weak NileCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)loadDataWithBizName:(id)arg1 id:(id)arg2 params:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)reloadData:(_Bool)arg1;
- (void)reloadData;

@end
