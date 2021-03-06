//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class FMFBOSwitcher, NSMutableDictionary, Tuple3, UIImage;

@interface FMIrisMakeupFilter : GPUImageFilter
{
    int mFaceCount;
    NSMutableDictionary *mFacePointDic;
    NSMutableDictionary *mLeftEyeWidth;
    NSMutableDictionary *mRightEyeWidth;
    NSMutableDictionary *mLeftEyeOpen;
    NSMutableDictionary *mRightEyeOpen;
    unsigned int mMaskMeshProgramId;
    int mMaskMeshVertexAttribute;
    int mMaskMeshTexCoordAttribute;
    int mMaskMeshImageUniform;
    unsigned int mBlendProgramId;
    int mBlendVertexAttribute;
    int mBlendIntensityUniform;
    int mBlendColorUniform;
    int mBgImageUniform;
    int mMakeupImageUniform;
    int mMaskImageUniform;
    unsigned int mIrisTextureId;
    unsigned int mMaskTextureId;
    FMFBOSwitcher *mIrisFBOSwitcher;
    FMFBOSwitcher *mMaskFBOSwitcher;
    float mBlendVertexBuffer[8];
    float mBlendTexCoordBuffer[8];
    float *mMeshVertexBuffer;
    float *mMeshTexCoordBuffer;
    NSMutableDictionary *mMeshTexCoordDic;
    int mWidth;
    int mHeight;
    float mRatio;
    float mIntensity;
    int mBlendMode;
    Tuple3 *mColor;
    UIImage *mIrisTexture;
    UIImage *mMaskTexture;
    int mMeshVertexIndex[72];
}

+ (id)irisMakeupFilterWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
- (void).cxx_destruct;
- (void)setColor:(float)arg1 g:(float)arg2 b:(float)arg3;
- (void)setBlend:(int)arg1;
- (void)updateCameraFacePoints:(struct CGPoint *)arg1 length:(int)arg2 roll:(float *)arg3 yaw:(float *)arg4 pitch:(float *)arg5;
- (void)onDraw:(int)arg1 vertices:(const float *)arg2 textureCoordinates:(const float *)arg3;
- (void)drawIris:(int)arg1 tuple2:(id)arg2 w:(float)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)onInit;
- (id)initWithMeshVertexShaderFromString:(id)arg1 meshFragmentShaderFromString:(id)arg2 blendVertexShaderFromString:(id)arg3 blendFragmentShaderFromString:(id)arg4 irisImagePath:(id)arg5 mask:(id)arg6 intensity:(float)arg7 size:(struct CGSize)arg8 textureCoordinates:(id)arg9;
- (void)dealloc;
- (void)updateWithFaceFeatures:(id)arg1 filterEnable:(_Bool)arg2;

@end

