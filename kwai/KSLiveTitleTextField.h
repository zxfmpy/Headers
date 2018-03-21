//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSNumber, NSTimer, UIColor, UIView;

@interface KSLiveTitleTextField : UITextField
{
    UIColor *_strokeColor;
    NSNumber *_strokeWidth;
    id _keyboardDidChangeTextObserver;
    UIView *_liveEmptyTitleCursorView;
    NSTimer *_flickTimer;
}

@property(retain, nonatomic) NSTimer *flickTimer; // @synthesize flickTimer=_flickTimer;
@property(retain, nonatomic) UIView *liveEmptyTitleCursorView; // @synthesize liveEmptyTitleCursorView=_liveEmptyTitleCursorView;
@property(retain, nonatomic) id keyboardDidChangeTextObserver; // @synthesize keyboardDidChangeTextObserver=_keyboardDidChangeTextObserver;
@property(retain, nonatomic) NSNumber *strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (void)beginFlick:(_Bool)arg1;
- (id)attributedString:(id)arg1;
- (void)drawWithContent:(id)arg1;
- (void)setEmptyHeadCursorHidden:(_Bool)arg1;
- (double)attributedContentWidth:(id)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end
