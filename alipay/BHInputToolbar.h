//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

#import "BHExpandingTextViewDelegate-Protocol.h"

@class BHExpandingTextView, NSString, UIBarButtonItem, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol BHInputToolbarDelegate;

@interface BHInputToolbar : UIToolbar <BHExpandingTextViewDelegate>
{
    BHExpandingTextView *_textView;
    UIBarButtonItem *_inputButton;
    id <BHInputToolbarDelegate> _inputDelegate;
    UIView *_containerView;
    UIView *_maskView;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <BHInputToolbarDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) UIBarButtonItem *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) BHExpandingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)expandingTextViewDidChangeSelection:(id)arg1;
- (void)expandingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (_Bool)expandingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)expandingTextViewDidEndEditing:(id)arg1;
- (void)expandingTextViewDidBeginEditing:(id)arg1;
- (_Bool)expandingTextViewShouldEndEditing:(id)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(id)arg1;
- (_Bool)expandingTextViewShouldReturn:(id)arg1;
- (void)expandingTextViewDidChange:(id)arg1;
- (void)expandingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)hide;
- (void)show;
- (void)drawRect:(struct CGRect)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotifications;
- (void)inputButtonPressed;
- (void)gestureEvent;
- (void)registerGestures;
- (void)setupToolbar:(id)arg1;
- (id)initWithContainerView:(id)arg1 inputDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

