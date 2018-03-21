//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSVideoBannerStorage.h"

@class NSArray, UIImage;

@interface KSVideoRoundBannerStorage : KSVideoBannerStorage
{
    double _lineHeight;
    double _radius;
    double _textHorMargin;
    UIImage *_backgroundImage;
    NSArray *_lineGroups;
}

@property(retain, nonatomic) NSArray *lineGroups; // @synthesize lineGroups=_lineGroups;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double textHorMargin; // @synthesize textHorMargin=_textHorMargin;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void).cxx_destruct;
- (_Bool)canMoveOutOfCanvas;
- (_Bool)supportsNewline;
- (struct CGSize)sizeThatFitsTextViewSize:(struct CGSize)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_drawBackgroundRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawTextInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawBackgroundInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)rebuildBackgroundImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrototype:(id)arg1 contentScaleFactor:(double)arg2;

@end
