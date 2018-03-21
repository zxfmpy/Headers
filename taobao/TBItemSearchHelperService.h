//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBItemSearchSuggestionModel, TBXSearchContext;

@interface TBItemSearchHelperService : NSObject
{
    NSString *_keyword;
    TBItemSearchSuggestionModel *_searchSuggestionModel;
    TBXSearchContext *_searchContext;
}

@property(retain, nonatomic) TBXSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(retain, nonatomic) TBItemSearchSuggestionModel *searchSuggestionModel; // @synthesize searchSuggestionModel=_searchSuggestionModel;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)suggestionList;
- (void)getSearchSuggestionListWithParams:(id)arg1 context:(id)arg2;
- (void)getSearchSuggestionListWithKeyword:(id)arg1 tab:(id)arg2 context:(id)arg3;
- (void)cleanDelegateAndCancel;
- (void)dealloc;

@end
