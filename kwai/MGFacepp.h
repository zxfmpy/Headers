//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGFaceppConfig, MGImageData;

@interface MGFacepp : NSObject
{
    struct _MG_FPP_API *_apiHandle;
    struct _MG_FPP_IMAGE *_imageHandle;
    _Bool _currentFrameIsImage;
    _Bool _canDetect;
    int _iwidth;
    int _iHeight;
    unsigned long long _status;
    MGImageData *_tempImageData;
    MGFaceppConfig *_faceppConfig;
    long long _pixelFormatType;
}

+ (id)getSDKAlgorithmInfoWithModel:(id)arg1;
+ (id)getSDKVersion;
+ (id)getJenkinsNumber;
@property(nonatomic) int iHeight; // @synthesize iHeight=_iHeight;
@property(nonatomic) int iwidth; // @synthesize iwidth=_iwidth;
@property(nonatomic) long long pixelFormatType; // @synthesize pixelFormatType=_pixelFormatType;
@property(retain, nonatomic, getter=getFaceppConfig) MGFaceppConfig *faceppConfig; // @synthesize faceppConfig=_faceppConfig;
@property(nonatomic) _Bool canDetect; // @synthesize canDetect=_canDetect;
@property(nonatomic) _Bool currentFrameIsImage; // @synthesize currentFrameIsImage=_currentFrameIsImage;
@property(retain, nonatomic) MGImageData *tempImageData; // @synthesize tempImageData=_tempImageData;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isMapSDKBundleID:(id)arg1;
- (_Bool)resetTrack;
- (void)stopAllDetection;
- (void)endDetectionFrame;
- (void)beginDetectionFrame;
- (_Bool)shutDown;
- (float)faceCompareWithFeatureData:(id)arg1 featureData2:(id)arg2;
- (float)faceCompareWithFaceInfo:(id)arg1 faceInf2:(id)arg2;
- (_Bool)GetFeatureData:(id)arg1;
- (_Bool)getFaceAttribute:(id)arg1 property:(int)arg2;
- (_Bool)GetMinorityStatus:(id)arg1;
- (_Bool)GetBlurnessStatus:(id)arg1;
- (_Bool)GetAttributeAgeGenderStatus:(id)arg1;
- (_Bool)GetAttributeMouseStatus:(id)arg1;
- (_Bool)GetAttributeEyeStatus:(id)arg1;
- (_Bool)GetAttribute3D:(id)arg1;
- (id)GetRectAtIndex:(int)arg1 isSmooth:(_Bool)arg2;
- (_Bool)GetGetLandmark:(id)arg1 isSmooth:(_Bool)arg2 pointsNumber:(int)arg3;
- (id)getFaceInfoWithFaceCount:(long long)arg1 mgApiHandle:(struct _MG_FPP_API *)arg2;
- (long long)getFaceNumberWithImageData:(id)arg1;
- (id)detectWithImageData:(id)arg1;
- (int)getImageModel;
- (int)getDetectModel:(unsigned long long)arg1;
- (_Bool)updateFaceppSetting:(CDUnknownBlockType)arg1;
- (id)initWithModel:(id)arg1 faceppSetting:(CDUnknownBlockType)arg2;
- (id)initWithModel:(id)arg1 maxFaceCount:(long long)arg2 faceppSetting:(CDUnknownBlockType)arg3;
- (id)init;

@end
