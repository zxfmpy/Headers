//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber;
@protocol Optional, TTIMHttpSessionRefreshInfoModel><Optional;

@interface TTIMHttpSessionRefreshResponseModel : JSONModel
{
    NSArray<TTIMHttpSessionRefreshInfoModel><Optional> *_refreshedSessionArray;
    NSNumber<Optional> *_errorCode;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSArray<TTIMHttpSessionRefreshInfoModel><Optional> *refreshedSessionArray; // @synthesize refreshedSessionArray=_refreshedSessionArray;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end
