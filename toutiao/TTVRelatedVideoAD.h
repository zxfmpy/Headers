//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TTVImageUrlList, TTVTrackUrlList, TTVVideoTrackUrlList;

@interface TTVRelatedVideoAD : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adId; // @dynamic adId;
@property(copy, nonatomic) NSString *appleId; // @dynamic appleId;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(copy, nonatomic) NSString *cardType; // @dynamic cardType;
@property(copy, nonatomic) NSString *creativeType; // @dynamic creativeType;
@property(nonatomic) int dialActionType; // @dynamic dialActionType;
@property(copy, nonatomic) NSString *downloadURL; // @dynamic downloadURL;
@property(nonatomic) float effectivePlayTime; // @dynamic effectivePlayTime;
@property(nonatomic) int formHeight; // @dynamic formHeight;
@property(copy, nonatomic) NSString *formURL; // @dynamic formURL;
@property(nonatomic) int formWidth; // @dynamic formWidth;
@property(nonatomic) _Bool hasMiddleImage; // @dynamic hasMiddleImage;
@property(nonatomic) _Bool hasTrackURL; // @dynamic hasTrackURL;
@property(nonatomic) _Bool hasVideoTrackURL; // @dynamic hasVideoTrackURL;
@property(nonatomic) _Bool hideIfExists; // @dynamic hideIfExists;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(copy, nonatomic) NSString *ipaURL; // @dynamic ipaURL;
@property(nonatomic) _Bool isPreview; // @dynamic isPreview;
@property(copy, nonatomic) NSString *logExtra; // @dynamic logExtra;
@property(retain, nonatomic) TTVImageUrlList *middleImage; // @dynamic middleImage;
@property(copy, nonatomic) NSString *openURL; // @dynamic openURL;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *showTag; // @dynamic showTag;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) TTVTrackUrlList *trackURL; // @dynamic trackURL;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(nonatomic) _Bool useSizeValidation; // @dynamic useSizeValidation;
@property(retain, nonatomic) TTVVideoTrackUrlList *videoTrackURL; // @dynamic videoTrackURL;
@property(copy, nonatomic) NSString *webURL; // @dynamic webURL;

@end
