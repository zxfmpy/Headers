//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CPTFill, CPTLineStyle, CPTShadow;

@interface CPTPlotSymbol : NSObject <NSCoding, NSCopying>
{
    struct CGPoint anchorPoint;
    struct CGSize size;
    int symbolType;
    CPTLineStyle *lineStyle;
    CPTFill *fill;
    struct CGPath *cachedSymbolPath;
    struct CGPath *customSymbolPath;
    _Bool usesEvenOddClipRule;
    struct CGLayer *cachedLayer;
    double cachedScale;
    CPTShadow *shadow;
}

+ (id)starPlotSymbol;
+ (id)ellipsePlotSymbol;
+ (id)plotSymbol;
@property(nonatomic) double cachedScale; // @synthesize cachedScale;
@property(nonatomic) struct CGLayer *cachedLayer; // @synthesize cachedLayer;
@property(nonatomic) _Bool usesEvenOddClipRule; // @synthesize usesEvenOddClipRule;
@property(nonatomic) struct CGPath *customSymbolPath; // @synthesize customSymbolPath;
@property(copy, nonatomic) CPTShadow *shadow; // @synthesize shadow;
@property(retain, nonatomic) CPTFill *fill; // @synthesize fill;
@property(retain, nonatomic) CPTLineStyle *lineStyle; // @synthesize lineStyle;
@property(nonatomic) int symbolType; // @synthesize symbolType;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint;
- (struct CGPath *)newSymbolPath;
- (void)renderAsVectorInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 scale:(double)arg3;
- (void)renderInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2 scale:(double)arg3 alignToPixels:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct CGPath *cachedSymbolPath; // @dynamic cachedSymbolPath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

