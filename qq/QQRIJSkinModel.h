//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQRIJSkinModel : NSObject
{
    unsigned int _beginTime;
    unsigned int _endTime;
    NSString *_skinID;
    NSString *_skinName;
    unsigned long long _seq;
    NSString *_skinURL;
}

+ (id)objectFromDict:(id)arg1;
@property(retain, nonatomic) NSString *skinURL; // @synthesize skinURL=_skinURL;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *skinName; // @synthesize skinName=_skinName;
@property(retain, nonatomic) NSString *skinID; // @synthesize skinID=_skinID;
- (void)dealloc;
- (id)convertToDict;

@end
