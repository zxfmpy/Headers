//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQShoppingPosAdInfo : NSObject
{
    int _ret;
    NSString *_msg;
    unsigned long long _posId;
    NSArray *_adInfoArr;
}

+ (id)initWithData:(struct CPBMessageDecoder *)arg1;
@property(readonly, retain, nonatomic) NSArray *adInfoArr; // @synthesize adInfoArr=_adInfoArr;
@property(readonly, nonatomic) unsigned long long posId; // @synthesize posId=_posId;
@property(readonly, copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) int ret; // @synthesize ret=_ret;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWith:(struct CPBMessageDecoder *)arg1;
- (id)init;

@end
