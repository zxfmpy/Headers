//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WopcUtils : NSObject
{
}

+ (id)toWopcError:(id)arg1 msg:(id)arg2;
+ (_Bool)isOldMtopTidaApiName:(id)arg1 withMethodName:(id)arg2;
+ (id)buildNewAccessTokenInfo:(id)arg1 period:(id)arg2;
+ (id)getValidAccessToken:(id)arg1;
+ (id)trimmedString:(id)arg1;
+ (_Bool)matchesInString:(id)arg1 withRegularExpression:(id)arg2;
+ (double)currentTimeInterval;
+ (_Bool)timeExpired:(id)arg1;
+ (id)dicWithJsonString:(id)arg1;
- (id)parseJsonToDic:(id)arg1;
- (id)DataTOjsonString:(id)arg1;
- (id)getCurrentVC;

@end
