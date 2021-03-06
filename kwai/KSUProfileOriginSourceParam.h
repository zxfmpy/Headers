//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSULiveStreamParam, KSUOtherSourceParam, KSUPhotoParam, KSUPymkParam, KSUUserSearchParam;

@interface KSUProfileOriginSourceParam : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveStreamParam; // @dynamic hasLiveStreamParam;
@property(nonatomic) _Bool hasOtherSourceParam; // @dynamic hasOtherSourceParam;
@property(nonatomic) _Bool hasPhotoParam; // @dynamic hasPhotoParam;
@property(nonatomic) _Bool hasPymkParam; // @dynamic hasPymkParam;
@property(nonatomic) _Bool hasUserSearchParam; // @dynamic hasUserSearchParam;
@property(retain, nonatomic) KSULiveStreamParam *liveStreamParam; // @dynamic liveStreamParam;
@property(retain, nonatomic) KSUOtherSourceParam *otherSourceParam; // @dynamic otherSourceParam;
@property(retain, nonatomic) KSUPhotoParam *photoParam; // @dynamic photoParam;
@property(retain, nonatomic) KSUPymkParam *pymkParam; // @dynamic pymkParam;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) KSUUserSearchParam *userSearchParam; // @dynamic userSearchParam;

@end

