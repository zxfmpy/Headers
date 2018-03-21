//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, TBTradeCreditAgreementModel, UITextView;

@interface TBExtCreditAgreementCell : TBExtBuyBaseCell <UITextViewDelegate>
{
    TBTradeCreditAgreementModel *_model;
    UITextView *_richLabel;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UITextView *richLabel; // @synthesize richLabel=_richLabel;
@property(retain, nonatomic) TBTradeCreditAgreementModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
