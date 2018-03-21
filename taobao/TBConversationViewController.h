//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MCRecentContactFragment, NSArray, NSString, TBConversationTitleView, UIImageView, UILabel;

@interface TBConversationViewController : UIViewController
{
    _Bool _isRootVc;
    _Bool _isShowCustomMenu;
    _Bool _isShowAreetingCardsMenu;
    _Bool _isAssociateAreetingCardShow;
    MCRecentContactFragment *_recentContactFragment;
    TBConversationTitleView *_conversationTitleView;
    NSString *_selfUserNick;
    long long _unReadCount;
    UILabel *_showAreetingCardLeading;
    UIImageView *_showAreetingCardLeadingBc;
    NSArray *_tabMenu;
}

@property(retain, nonatomic) NSArray *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(retain, nonatomic) UIImageView *showAreetingCardLeadingBc; // @synthesize showAreetingCardLeadingBc=_showAreetingCardLeadingBc;
@property(retain, nonatomic) UILabel *showAreetingCardLeading; // @synthesize showAreetingCardLeading=_showAreetingCardLeading;
@property(nonatomic) _Bool isAssociateAreetingCardShow; // @synthesize isAssociateAreetingCardShow=_isAssociateAreetingCardShow;
@property(nonatomic) _Bool isShowAreetingCardsMenu; // @synthesize isShowAreetingCardsMenu=_isShowAreetingCardsMenu;
@property(nonatomic) _Bool isShowCustomMenu; // @synthesize isShowCustomMenu=_isShowCustomMenu;
@property(nonatomic) long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool isRootVc; // @synthesize isRootVc=_isRootVc;
@property(retain, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(retain, nonatomic) TBConversationTitleView *conversationTitleView; // @synthesize conversationTitleView=_conversationTitleView;
@property(retain, nonatomic) MCRecentContactFragment *recentContactFragment; // @synthesize recentContactFragment=_recentContactFragment;
- (void).cxx_destruct;
- (void)updateTitleView;
- (void)networkStatusNotification:(id)arg1;
- (void)messageCenterEndInit;
- (void)messageCenterBeginInit;
- (void)reflushStyle;
- (long long)tbfestival_defaultStatusBarStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)messageCountChangedNotification:(id)arg1;
- (void)taobaoLogoutNotification:(id)arg1;
- (void)clickNaviFriend:(id)arg1;
- (void)moreItemClicked:(id)arg1;
- (void)setupNaviMore;
- (id)defualtMoreItems;
- (void)setupNaviFriend;
- (id)defaultMorePopoverItems;
- (void)innerInitDataWithIsRoot:(_Bool)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

@end
