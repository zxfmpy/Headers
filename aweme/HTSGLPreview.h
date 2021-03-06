//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSGLInput-Protocol.h"

@class HTSGLFramebuffer, HTSGLProgram, NSString;

@interface HTSGLPreview : UIView <HTSGLInput>
{
    unsigned long long inputRotation;
    HTSGLFramebuffer *inputFramebufferForDisplay;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    HTSGLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize boundsSizeAtFrameBufferEpoch;
    HTSGLFramebuffer *cacheFramebufferForCapture;
    _Bool enabled;
    _Bool _foregroundFlag;
    _Bool _firstFrameEnable;
    unsigned long long aspectRatio;
    unsigned long long _fillMode;
    struct CGSize _sizeInPixels;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
@property(nonatomic) _Bool firstFrameEnable; // @synthesize firstFrameEnable=_firstFrameEnable;
@property(nonatomic) _Bool foregroundFlag; // @synthesize foregroundFlag=_foregroundFlag;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio;
- (void).cxx_destruct;
- (struct CGImage *)capturePreviewtoImage;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)presentFramebuffer;
- (void)setDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)createDisplayFramebuffer;
- (void)dealloc;
- (void)releaseDisplayFramebuffer;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

