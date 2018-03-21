//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class CTPlaceholderTextView, NSString, UIColor, UIFont;
@protocol CTGrowingTextViewDelegate, CTPasteboardDelegate;

@interface CTGrowingTextView : UIView <UITextViewDelegate>
{
    CTPlaceholderTextView *_internalTextView;
    _Bool _animateHeightChange;
    long long _maxNumberOfLines;
    long long _minNumberOfLines;
    id <CTGrowingTextViewDelegate> _delegate;
    id <CTPasteboardDelegate> _pasteItemDelegate;
    long long _minHeight;
    long long _maxHeight;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) long long minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <CTPasteboardDelegate> pasteItemDelegate; // @synthesize pasteItemDelegate=_pasteItemDelegate;
@property(nonatomic) __weak id <CTGrowingTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTPlaceholderTextView *internalTextView; // @synthesize internalTextView=_internalTextView;
@property(nonatomic) _Bool animateHeightChange; // @synthesize animateHeightChange=_animateHeightChange;
@property(nonatomic) long long minNumberOfLines; // @synthesize minNumberOfLines=_minNumberOfLines;
@property(nonatomic) long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
- (void).cxx_destruct;
- (void)pasteItem:(id)arg1 type:(id)arg2;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (_Bool)hasText;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSString *text;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)growDidStop;
- (void)resizeTextView:(long long)arg1;
- (double)resizeInputTextView:(long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)commonInitialiser;
- (void)setupTextViewProperty:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
