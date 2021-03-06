//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class KSNumberPointView, KSPointView, UIColor, UIImage, UIImageView, UILabel;

@interface KSMenuCell : UIControl
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    KSPointView *_badgeView;
    KSNumberPointView *_numberPointView;
    UIImage *_normalImage;
    UIImage *_highlightImage;
    UIColor *_highlightColor;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) KSNumberPointView *numberPointView; // @synthesize numberPointView=_numberPointView;
@property(retain, nonatomic) KSPointView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 highlightImage:(id)arg2 title:(id)arg3;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

