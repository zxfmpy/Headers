//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZUploadPOI.h>

@class NSData, NSMutableDictionary, NSString, QZExifInfo, QZUppPhotoSepcInfo;

@interface QZUploadQunUpp : QZUploadPOI
{
    long long _picType;
    NSString *_picTitle;
    NSString *_picDesc;
    NSString *_appid;
    NSString *_userid;
    NSString *_albumid;
    int _type;
    QZUppPhotoSepcInfo *_photoSpecInfo;
    QZExifInfo *_exifInfo;
    NSMutableDictionary *_mapExt;
    long long _needFeeds;
    NSData *_realA2;
    long long _batchIndex;
    long long _batchTotolCount;
    long long _batchID;
    long long _rolation;
    long long _picWidth;
    long long _picHeight;
    int _xo;
}

- (void).cxx_destruct;
- (id)packetRespWithRspData:(id)arg1;
- (id)getControlDataWithError:(id *)arg1;
- (id)sliceUploadAppId;
- (id)ipMgrKey;
- (void)setFilePath:(id)arg1;
- (void)initPicturePOIInfo_OC:(id)arg1;
- (void)initPictureExif_OC:(id)arg1;
- (void)initUploadPicExtendInfo_OC:(id)arg1;
- (id)hexStringFromData:(id)arg1;
- (void)initUploadPicInfo_OC:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *albumid; // @dynamic albumid;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) long long batchID; // @dynamic batchID;
@property(nonatomic) long long batchIndex; // @dynamic batchIndex;
@property(nonatomic) long long batchTotolCount; // @dynamic batchTotolCount;
@property(retain, nonatomic) QZExifInfo *exifInfo; // @dynamic exifInfo;
@property(retain, nonatomic) NSMutableDictionary *mapExt; // @dynamic mapExt;
@property(retain, nonatomic) NSString *picDesc; // @dynamic picDesc;
@property(nonatomic) long long picHeight; // @dynamic picHeight;
@property(retain, nonatomic) NSString *picTitle; // @dynamic picTitle;
@property(nonatomic) long long picType; // @dynamic picType;
@property(nonatomic) long long picWidth; // @dynamic picWidth;
@property(retain, nonatomic) NSData *realA2; // @dynamic realA2;
@property(nonatomic) long long rolation; // @dynamic rolation;
@property(retain, nonatomic) NSString *userid; // @dynamic userid;

@end

