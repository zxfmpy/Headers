//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEUserPickerViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AWESearchChallengeManager, NSMutableArray, NSRegularExpression, NSString, NSTimer, UIColor, UIFont, UIWindow;
@protocol AWETextInput, AWETextInputControllerDelegate;

@interface AWETextInputController : NSObject <AWEUserPickerViewControllerDelegate, UITextViewDelegate, UITextFieldDelegate>
{
    _Bool _enableHashTagDetection;
    unsigned long long _maxLength;
    unsigned long long _maxUserCount;
    id <AWETextInputControllerDelegate> _delegate;
    NSMutableArray *_extraInfo;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_extraColor;
    NSString *_itemID;
    NSString *_referString;
    id <AWETextInput> _textInput;
    UIWindow *_pickerWindow;
    UIWindow *_lastKeyWindow;
    NSTimer *_suggestionDelayTimer;
    NSRegularExpression *_hashTagRegExp;
    NSRegularExpression *_endWithHashTagRegExp;
    AWESearchChallengeManager *_searchChallengeManager;
    struct _NSRange _range;
    struct _NSRange _lastMarkedRange;
}

@property(retain, nonatomic) AWESearchChallengeManager *searchChallengeManager; // @synthesize searchChallengeManager=_searchChallengeManager;
@property(retain, nonatomic) NSRegularExpression *endWithHashTagRegExp; // @synthesize endWithHashTagRegExp=_endWithHashTagRegExp;
@property(retain, nonatomic) NSRegularExpression *hashTagRegExp; // @synthesize hashTagRegExp=_hashTagRegExp;
@property(retain, nonatomic) NSTimer *suggestionDelayTimer; // @synthesize suggestionDelayTimer=_suggestionDelayTimer;
@property(nonatomic) struct _NSRange lastMarkedRange; // @synthesize lastMarkedRange=_lastMarkedRange;
@property(retain, nonatomic) UIWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property(retain, nonatomic) UIWindow *pickerWindow; // @synthesize pickerWindow=_pickerWindow;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) __weak id <AWETextInput> textInput; // @synthesize textInput=_textInput;
@property(nonatomic) _Bool enableHashTagDetection; // @synthesize enableHashTagDetection=_enableHashTagDetection;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) UIColor *extraColor; // @synthesize extraColor=_extraColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSMutableArray *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) __weak id <AWETextInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxUserCount; // @synthesize maxUserCount=_maxUserCount;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (id)resolveHashTags;
- (void)textInput:(id)arg1 didSelectSuggestion:(id)arg2 withTextBeforeSelection:(id)arg3;
- (void)reloadSuggestions:(id)arg1;
- (id)validHashTagCharset;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (void)picker:(id)arg1 didPickUser:(id)arg2;
- (void)trimCharactersInSet:(id)arg1;
- (void)removeSuffixCharactersInSet:(id)arg1;
- (void)removePrefixCharactersInSet:(id)arg1;
- (void)textInputValueChanged:(id)arg1;
- (void)updateExtraInfoByMarkedRange;
- (id)attributeStringFromString:(id)arg1 extraInfo:(id)arg2;
- (id)updateExtraInfo:(id)arg1 withRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)willRange:(struct _NSRange)arg1 breakExtraInfo:(id)arg2;
- (_Bool)textInput:(id)arg1 processTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textInput:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)clearInputData;
- (void)updateDisplay;
- (void)showUserPicker:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

