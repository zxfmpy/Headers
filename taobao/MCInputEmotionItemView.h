//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseInputView.h"

#import "MCChatPageSegmentedControlDelegate-Protocol.h"
#import "TBEmoticonSelectionViewControllerDelegate-Protocol.h"

@class CALayer, MCChatPageSegmentedControl, NSString, TBEmoticonSelectionViewController, UIButton;
@protocol MCCustomEmoticonPackageProtocol;

@interface MCInputEmotionItemView : MCBaseInputView <MCChatPageSegmentedControlDelegate, TBEmoticonSelectionViewControllerDelegate>
{
    _Bool _isHaveLoadedEmoticon;
    _Bool _userCustomEmotion;
    TBEmoticonSelectionViewController *_emoticonSelectionViewController;
    MCChatPageSegmentedControl *_segmentedControl;
    UIButton *_addEmotionBtn;
    UIButton *_sendMsgBtn;
    CALayer *_dividerLine;
    unsigned long long _currentIndex;
    id <MCCustomEmoticonPackageProtocol> _currentPack;
}

@property(retain, nonatomic) id <MCCustomEmoticonPackageProtocol> currentPack; // @synthesize currentPack=_currentPack;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool userCustomEmotion; // @synthesize userCustomEmotion=_userCustomEmotion;
@property(retain, nonatomic) CALayer *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) UIButton *sendMsgBtn; // @synthesize sendMsgBtn=_sendMsgBtn;
@property(retain, nonatomic) UIButton *addEmotionBtn; // @synthesize addEmotionBtn=_addEmotionBtn;
@property(retain, nonatomic) MCChatPageSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) TBEmoticonSelectionViewController *emoticonSelectionViewController; // @synthesize emoticonSelectionViewController=_emoticonSelectionViewController;
@property(nonatomic) _Bool isHaveLoadedEmoticon; // @synthesize isHaveLoadedEmoticon=_isHaveLoadedEmoticon;
- (void).cxx_destruct;
- (void)createCustomView;
- (void)sendMessage:(id)arg1;
- (void)addEmoticon:(id)arg1;
- (void)showEmoticonSelectControl:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 deleteEmoticon:(id)arg4 confirmEmoticon:(id)arg5 showTitle:(_Bool)arg6;
- (void)updateSegmentedView;
- (void)emoticonSelectionViewController:(id)arg1 didSelectEmoticon:(id)arg2;
- (void)segmentedButtonClicked:(unsigned long long)arg1;
- (void)onDataChanged;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

