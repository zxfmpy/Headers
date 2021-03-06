//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMusicPreviewTableViewCell.h"

#import "KSUsedItemCell-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UIColor, UILabel;

@interface KSUsedMusicCell : KSMusicPreviewTableViewCell <KSUsedItemCell>
{
    _Bool _showUseButton;
    CDUnknownBlockType _didMoveBlock;
    UIButton *_deleteButton;
    UILabel *_offlinePromptLabel;
    NSString *_artistObserver;
    NSLayoutConstraint *_delBtnRightConstraint;
    UIColor *_titleColor;
}

@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSLayoutConstraint *delBtnRightConstraint; // @synthesize delBtnRightConstraint=_delBtnRightConstraint;
@property(retain, nonatomic) NSString *artistObserver; // @synthesize artistObserver=_artistObserver;
@property(retain, nonatomic) UILabel *offlinePromptLabel; // @synthesize offlinePromptLabel=_offlinePromptLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) _Bool showUseButton; // @synthesize showUseButton=_showUseButton;
@property(copy, nonatomic) CDUnknownBlockType didMoveBlock; // @synthesize didMoveBlock=_didMoveBlock;
- (void).cxx_destruct;
- (void)_setupOfflineLabel;
- (void)_setupDeleteButton;
- (void)didTapDeleteBtn:(id)arg1;
@property(nonatomic) __weak UILabel *mainTitle;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)drawWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

