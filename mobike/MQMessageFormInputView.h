//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQMessageFormTextView, UILabel, UITextField;

@interface MQMessageFormInputView : UIView
{
    UILabel *tipLabel;
    UITextField *contentTf;
    MQMessageFormTextView *contentTv;
    UIView *topLine;
    UIView *bottomLine;
}

- (void).cxx_destruct;
- (id)getText;
- (void)refreshFrameWithScreenWidth:(double)arg1 andY:(double)arg2;
- (void)refreshcontentTvFrameWithScreenWidth:(double)arg1;
- (void)initContentTvWidthModel:(id)arg1 andScreenWidth:(double)arg2;
- (void)refreshcontentTfFrameWithScreenWidth:(double)arg1;
- (void)initContentTfWidthModel:(id)arg1 andScreenWidth:(double)arg2;
- (void)refreshTipLabelFrameWithScreenWidth:(double)arg1;
- (void)initTipLabelWithModel:(id)arg1 andScreenWidth:(double)arg2;
- (id)initWithScreenWidth:(double)arg1 andModel:(id)arg2;

@end

