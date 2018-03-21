//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FGBrushParameters : NSObject
{
    _Bool _hasColor;
    _Bool _scatter;
    float _randomOffset;
    float _pixelsBetweenSplats;
    unsigned int _minimumSplatsBetweenControlPoints;
    float _minimumSize;
    float _maximumSize;
    float _audioPumpSpeed;
    float _audioPumpScale;
    int _audioColorStyle;
    unsigned int _blendFuncSource;
    unsigned int _blendFuncDestination;
    unsigned int _maxParticleCount;
    float _brushWidthScale;
    unsigned long long _brush;
    NSDictionary *_particleEmitterSettings;
    NSString *_emoji;
}

+ (unsigned long long)defaultBrush;
+ (id)cacheKeyForParticleTexture:(id)arg1;
+ (id)cacheKeyForBrushParameters:(id)arg1;
+ (id)nameForBrush:(unsigned long long)arg1;
+ (id)brushParametersForBrush:(unsigned long long)arg1 widthScale:(float)arg2;
+ (id)availableBrushes;
@property(nonatomic) float brushWidthScale; // @synthesize brushWidthScale=_brushWidthScale;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(nonatomic) unsigned int maxParticleCount; // @synthesize maxParticleCount=_maxParticleCount;
@property(retain, nonatomic) NSDictionary *particleEmitterSettings; // @synthesize particleEmitterSettings=_particleEmitterSettings;
@property(nonatomic) unsigned int blendFuncDestination; // @synthesize blendFuncDestination=_blendFuncDestination;
@property(nonatomic) unsigned int blendFuncSource; // @synthesize blendFuncSource=_blendFuncSource;
@property(nonatomic) int audioColorStyle; // @synthesize audioColorStyle=_audioColorStyle;
@property(nonatomic) float audioPumpScale; // @synthesize audioPumpScale=_audioPumpScale;
@property(nonatomic) float audioPumpSpeed; // @synthesize audioPumpSpeed=_audioPumpSpeed;
@property(nonatomic) float maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) float minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) unsigned int minimumSplatsBetweenControlPoints; // @synthesize minimumSplatsBetweenControlPoints=_minimumSplatsBetweenControlPoints;
@property(nonatomic) float pixelsBetweenSplats; // @synthesize pixelsBetweenSplats=_pixelsBetweenSplats;
@property(nonatomic) float randomOffset; // @synthesize randomOffset=_randomOffset;
@property(nonatomic) _Bool scatter; // @synthesize scatter=_scatter;
@property(nonatomic) _Bool hasColor; // @synthesize hasColor=_hasColor;
@property(readonly, nonatomic) unsigned long long brush; // @synthesize brush=_brush;
- (void).cxx_destruct;
- (id)textureForImage:(id)arg1 flippedYAxis:(_Bool)arg2;
- (id)textureForImageURL:(id)arg1 flippedYAxis:(_Bool)arg2;
- (id)particleTextureInfoWithFlippedYAxis:(_Bool)arg1;
- (id)brushTextureInfoWithFlippedYAxis:(_Bool)arg1;
- (id)initWithBrush:(unsigned long long)arg1 widthScale:(float)arg2;

@end
