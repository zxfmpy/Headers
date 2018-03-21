//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEUserModel;

@interface AWELiveMyWalletModel : AWEBaseApiModel
{
    AWEUserModel *_user;
    long long _diamondCount;
    long long _totalIncome;
    long long _todayIncome;
    long long _withdrawLimit;
}

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long withdrawLimit; // @synthesize withdrawLimit=_withdrawLimit;
@property(nonatomic) long long todayIncome; // @synthesize todayIncome=_todayIncome;
@property(nonatomic) long long totalIncome; // @synthesize totalIncome=_totalIncome;
@property(nonatomic) long long diamondCount; // @synthesize diamondCount=_diamondCount;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;

@end
