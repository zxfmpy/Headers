//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMComprehensiveSceneLayer.h"

@class FMComprehensiveExtFilter;

@interface FMComprehensiveExtSceneLayer : FMComprehensiveSceneLayer
{
    short *_pcm16Buffer;
    int _pcm16BufferLen;
    FMComprehensiveExtFilter *_comprehensiveExtFilter;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) FMComprehensiveExtFilter *comprehensiveExtFilter; // @synthesize comprehensiveExtFilter=_comprehensiveExtFilter;
- (void).cxx_destruct;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;

@end

