//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummaryBaseCell.h>

@class NSMutableArray, NSString, UIImageView;

@interface UserSummaryLinkedLabelCell : UserSummaryBaseCell
{
    NSMutableArray *_linkedString;
    NSMutableArray *_linkedLabelArray;
    NSString *_linkedText;
    UIImageView *_rightImageView;
    NSMutableArray *_linkedStringArray;
}

@property(retain, nonatomic) NSMutableArray *linkedLabelArray; // @synthesize linkedLabelArray=_linkedLabelArray;
@property(retain, nonatomic) NSMutableArray *linkedStringArray; // @synthesize linkedStringArray=_linkedStringArray;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copyData:(id)arg1;
- (void)hidePendingMenu;
- (void)showPendingMenu;
- (void)setRightImage:(id)arg1;
- (void)changeToNormalBg;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setSumLinkedStringArrayInOneLine:(id)arg1;
- (void)setSumLinkedStringArray:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

