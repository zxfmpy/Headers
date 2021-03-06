//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel;

@interface CountHintTextView : UITextView
{
    UILabel *_countHintLabel;
    UILabel *_placeHolderLabel;
    int _limitLength;
    NSString *_placeholder;
    UIColor *_placeholderColor;
}

@property(retain, nonatomic) UILabel *countHintLabel; // @synthesize countHintLabel=_countHintLabel;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) int limitLength; // @synthesize limitLength=_limitLength;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)textChanged:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

