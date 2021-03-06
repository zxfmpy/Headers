//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol TTIMHttpSessionModel;

@interface TTIMHttpGetSessionListResponseModel : JSONModel
{
    _Bool _hasMore;
    NSArray<TTIMHttpSessionModel> *_sessionItemArray;
    long long _pageIndex;
    long long _sessionType;
    long long _errorCode;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSArray<TTIMHttpSessionModel> *sessionItemArray; // @synthesize sessionItemArray=_sessionItemArray;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

