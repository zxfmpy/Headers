//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface QQPushbannerConfiguration : NSObject <NSCoding>
{
    unsigned long long _channel;
    NSString *_imageURL;
    NSString *_md5;
    NSString *_digest;
    NSString *_linkURL;
    unsigned long long _weight;
    NSString *_begin;
    NSString *_end;
    int _xo;
}

+ (void)clearBannerFile;
+ (void)removeBannerPicFile;
+ (int)getPushBannerConfigCount;
+ (id)configurationSavePathWithIndex:(id)arg1;
+ (id)deserializeWithIndex:(id)arg1;
+ (_Bool)serializeWithNoException:(id)arg1 withIndex:(id)arg2;
+ (_Bool)serialize:(id)arg1 withIndex:(id)arg2;
+ (id)getPushbannerPicsPath;
- (void).cxx_destruct;
- (_Bool)isPushbannerValid;
- (_Bool)isPushbannerOutDate;
- (id)pushbannerPicSavePath;
- (void)downloadPushbannerPicture;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *begin; // @dynamic begin;
@property(nonatomic) unsigned long long channel; // @dynamic channel;
@property(copy, nonatomic) NSString *digest; // @dynamic digest;
@property(copy, nonatomic) NSString *end; // @dynamic end;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(copy, nonatomic) NSString *linkURL; // @dynamic linkURL;
@property(copy, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned long long weight; // @dynamic weight;

@end

