//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "TTVDetailRelatedADInfoDataProtocol-Protocol.h"
#import "TTVDetailRelatedVideoInfoDataProtocol-Protocol.h"

@class NSDictionary, NSNumber, NSString, TTImageInfosModel, TTVRelatedVideoAD, TTVRelatedVideoExtraInfo, TTVUserInfo, TTVVideoAlbum, TTVVideoArticle;
@protocol TTVDetailRelatedADInfoDataProtocol;

@interface TTVRelatedVideoItem : GPBMessage <TTVDetailRelatedADInfoDataProtocol, TTVDetailRelatedVideoInfoDataProtocol>
{
}

+ (id)descriptor;
- (id)adModel;
@property(readonly, nonatomic) int ui_type;
@property(readonly, nonatomic) NSString *uniqueIDStr;
@property(readonly, nonatomic) NSString *ad_id;
@property(readonly, nonatomic) NSString *button_text;
@property(readonly, nonatomic) TTImageInfosModel *middleImageInfosModel;
@property(readonly, nonatomic) NSString *creative_type;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *show_tag;
@property(readonly, nonatomic) NSString *card_type;
- (id)listMiddleImageModel;
@property(readonly, nonatomic) id <TTVDetailRelatedADInfoDataProtocol> videoAdExtra;
@property(readonly, retain, nonatomic) NSNumber *hasRead;
@property(readonly, retain, nonatomic) NSNumber *videoDuration;
@property(readonly, nonatomic) NSString *relatedVideoExtraInfoShowTag;
@property(readonly, retain, nonatomic) NSDictionary *videoDetailInfo;
@property(readonly, retain, nonatomic) NSString *mediaName;
@property(readonly, retain, nonatomic) NSNumber *commentCount;
@property(readonly, nonatomic) NSNumber *groupFlags;

// Remaining properties
@property(retain, nonatomic) TTVRelatedVideoAD *ad; // @dynamic ad;
@property(retain, nonatomic) TTVVideoAlbum *album; // @dynamic album;
@property(retain, nonatomic) TTVVideoArticle *article; // @dynamic article;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAd; // @dynamic hasAd;
@property(nonatomic) _Bool hasAlbum; // @dynamic hasAlbum;
@property(nonatomic) _Bool hasArticle; // @dynamic hasArticle;
@property(nonatomic) _Bool hasRelatedVideoExtraInfo; // @dynamic hasRelatedVideoExtraInfo;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *logPb; // @dynamic logPb;
@property(retain, nonatomic) TTVRelatedVideoExtraInfo *relatedVideoExtraInfo; // @dynamic relatedVideoExtraInfo;
@property(readonly) Class superclass;
@property(retain, nonatomic) TTVUserInfo *userInfo; // @dynamic userInfo;

@end

