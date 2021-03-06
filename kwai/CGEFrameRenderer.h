//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CGESharedGLContext, NSLock;

@interface CGEFrameRenderer : NSObject
{
    struct CGEVideoHandlerCV *_videoHandler;
    struct TextureDrawer *_textureDrawer;
    float _drawerFlipScaleX;
    float _drawerFlipScaleY;
    _Bool _isUsingMask;
    _Bool _reverseTargetSize;
    CGESharedGLContext *_sharedContext;
    NSLock *_renderLock;
}

@property(nonatomic) _Bool reverseTargetSize; // @synthesize reverseTargetSize=_reverseTargetSize;
@property(readonly, nonatomic) NSLock *renderLock; // @synthesize renderLock=_renderLock;
@property(readonly, nonatomic) CGESharedGLContext *sharedContext; // @synthesize sharedContext=_sharedContext;
@property(readonly, nonatomic) _Bool isUsingMask; // @synthesize isUsingMask=_isUsingMask;
- (void).cxx_destruct;
- (void)takeShot:(CDUnknownBlockType)arg1;
- (void)setMaskUIImage:(id)arg1;
- (void)setMaskTextureRatio:(float)arg1;
- (void)setMaskTexture:(unsigned int)arg1 textureAspectRatio:(float)arg2;
- (void)_setMaskTexture:(unsigned int)arg1 textureAspectRatio:(float)arg2;
- (void)setFilterWithAddress:(void *)arg1;
- (void)setFilterIntensity:(float)arg1;
- (void)setFilterWithConfig:(const char *)arg1;
- (void)replaceDrawer:(void *)arg1;
- (void)replaceYUVDrawer:(void *)arg1 deleteOlder:(_Bool)arg2;
- (unsigned int)getResultTexture;
- (void *)getVideoHandler;
- (void)setResultDrawerRotation:(float)arg1;
- (void)setResultDrawerFlipScale:(float)arg1 flipScaleY:(float)arg2;
- (void)setYUVDrawerRotation:(float)arg1;
- (void)setYUVDrawerFlipScale:(float)arg1 flipScaleY:(float)arg2;
- (void)drawTexture:(unsigned int)arg1;
- (void)fastDrawResult;
- (void)drawResult;
- (_Bool)setupRenderer;
- (void)clear;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

