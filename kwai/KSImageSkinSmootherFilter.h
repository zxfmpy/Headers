//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGPUImageFilterWrapper.h"

@interface KSImageSkinSmootherFilter : CGPUImageFilterWrapper
{
    struct SkinSmootherFilter _filter;
    double _bright;
    double _soften;
}

@property(nonatomic) double soften; // @synthesize soften=_soften;
@property(nonatomic) double bright; // @synthesize bright=_bright;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadLookupFromPath:(id)arg1;
- (id)init;

@end

