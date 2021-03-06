//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageNormalBlendFilter.h"

@class NSMutableArray;

@interface GPUImageFrameFilter : GPUImageNormalBlendFilter
{
    NSMutableArray *_framePicures;
    unsigned long long _frameIndex;
    unsigned long long _frameRenderingCount;
    CDUnknownBlockType _numberBlock;
    CDUnknownBlockType _imageBlock;
    double _frameDuration;
}

@property(nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(copy, nonatomic) CDUnknownBlockType numberBlock; // @synthesize numberBlock=_numberBlock;
- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)loadFrameImages;
- (void)setFramePicture;
- (void)nextFrameIndex;
- (void)setNumberOfFrames:(CDUnknownBlockType)arg1 imageForIndex:(CDUnknownBlockType)arg2 frameDuration:(double)arg3;
- (long long)nextAvailableTextureIndex;
- (id)init;
- (void)dealloc;

@end

