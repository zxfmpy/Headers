//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQLockDictionary;

@interface FTSNetDynamicSearchEngine : NSObject
{
    QQLockDictionary *_requestInfoDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQLockDictionary *requestInfoDict; // @synthesize requestInfoDict=_requestInfoDict;
- (void).cxx_destruct;
- (int)countAllResultNumber:(id)arg1;
- (int)reqUniteSearchKeyword:(id)arg1 cookie:(id)arg2 otherParam:(id)arg3;
- (int)reqSubSearchKeyword:(id)arg1 groupMasks:(id)arg2 cookie:(id)arg3;
- (_Bool)subTabSearchTryWork:(id)arg1 resultDict:(id)arg2;
- (void)qqDynamicSearchTabSearchResultsUpdate:(id)arg1;
- (_Bool)uniteSearchSearchTryWork:(id)arg1 resultDict:(id)arg2;
- (void)qqDynamicSearchUniteSearchResultsUpdate:(id)arg1;
- (void)ftsCancelNetDynamicSearch;
- (void)ftsGetNetSubTabDynamicSearchResultsWithSearchKeyword:(id)arg1 groupMasks:(id)arg2 cookie:(id)arg3 completitonBlock:(CDUnknownBlockType)arg4;
- (void)ftsGetNetDynamicSearchResultsWithSearchKeyword:(id)arg1 cookie:(id)arg2 otherParam:(id)arg3 completitonBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end
