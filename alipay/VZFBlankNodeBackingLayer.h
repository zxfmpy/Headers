//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFAsyncLayer.h"

@class VZFBlankNodeRenderer;

@interface VZFBlankNodeBackingLayer : VZFAsyncLayer
{
    VZFBlankNodeRenderer *_renderer;
}

@property(retain, nonatomic) VZFBlankNodeRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
- (id)drawParameters;

@end

