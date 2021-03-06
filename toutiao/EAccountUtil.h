//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EAccountUtil : NSObject
{
}

+ (id)newGetOperatorType;
+ (id)createErrorWithCode:(long long)arg1;
+ (void)setTimeStamp:(long long)arg1;
+ (id)getTimeString;
+ (id)getTimeStamp;
+ (id)getRandomUUIDShort;
+ (id)getRandomUUIDLong;
+ (void)setRandomUUID:(id)arg1;
+ (id)getUserAgent;
+ (void)setUserAgent:(id)arg1;
+ (id)getSdkVersion;
+ (void)setSdkVersion:(id)arg1;
+ (id)getServerVersion;
+ (void)setServerVersion:(id)arg1;
+ (void)setupVersion;
+ (id)getAppName;
+ (id)getAppSecret;
+ (id)getAppKey;
+ (void)setAppKeyAndSecret:(id)arg1 secret:(id)arg2 appName:(id)arg3;
+ (void)setGatewayData:(id)arg1;
+ (id)getGatewayData;
+ (id)getDeviceVersion;
+ (id)deviceType;
+ (long long)getOperatorsType;
+ (_Bool)isWWANOpen;
+ (id)getDeviceIPAddress:(_Bool)arg1;
+ (id)getIPAddresses;
+ (_Bool)reachableViaWWAN;
+ (_Bool)networkReachable;
+ (id)getNetworkStatus;
+ (id)getDictionary:(id)arg1;
+ (id)getJsonString:(id)arg1;
+ (id)removingPercentEncoding:(id)arg1;
+ (id)addingPercentEncoding:(id)arg1 withChartSet:(id)arg2;
+ (id)URLDecode:(id)arg1;
+ (id)URLEncode:(id)arg1;
+ (id)parseHtml:(id)arg1;
+ (id)createErrorWithDic:(id)arg1 code:(long long)arg2;
+ (id)createError:(id)arg1 code:(long long)arg2;
+ (id)createImageWithColor:(id)arg1;
+ (id)hmacSha1WithKey:(id)arg1 text:(id)arg2;
+ (id)dictionaryToJson:(id)arg1;
+ (id)convertUnitByString:(id)arg1 withRate:(double)arg2;
+ (id)getCurrentFee:(id)arg1;
+ (double)stringToNumber:(id)arg1;
+ (id)getCurrentFollow:(id)arg1;
+ (void)addParam:(id)arg1 paramName:(id)arg2;
+ (id)paramDic:(id)arg1 params:(id)arg2;
+ (id)getOpenId;
+ (void)saveOpenId:(id)arg1;

@end

