//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQLockDictionary;

@interface QQOfflineFileVerifyMgr : NSObject
{
    QQLockDictionary *_verifyJsonCacheDic;
}

+ (id)getInstance;
- (id)getVerifyJsonDic:(id)arg1 error:(id *)arg2;
- (_Bool)checkFileValid:(id)arg1 fileData:(id)arg2 relativePath:(id)arg3 packetInfo:(id)arg4;
- (id)init;

@end
