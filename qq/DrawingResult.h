//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIColor, UIFont, UIImage;

@interface DrawingResult : NSObject
{
    NSArray *_texts;
    struct CGRect *_rects;
    UIFont *_font;
    UIColor *_color;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property struct CGRect *rects; // @synthesize rects=_rects;
@property(retain, nonatomic) NSArray *texts; // @synthesize texts=_texts;
- (void)dealloc;
- (id)initWithTexts:(id)arg1 rects:(struct CGRect *)arg2;

@end
