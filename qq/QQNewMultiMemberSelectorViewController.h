//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMultiMemberSelectorMainPageViewController.h>

@protocol QQNewMultiMemberSelectorAnimateDelegate;

@interface QQNewMultiMemberSelectorViewController : QQMultiMemberSelectorMainPageViewController
{
    _Bool _didGroupSelectorShowing;
    id <QQNewMultiMemberSelectorAnimateDelegate> _animateDelegate;
}

@property(nonatomic) __weak id <QQNewMultiMemberSelectorAnimateDelegate> animateDelegate; // @synthesize animateDelegate=_animateDelegate;
- (void).cxx_destruct;
- (void)didTroopAndDisgroupItemSelected:(int)arg1;
- (double)getConentViewMarginBottom;
- (double)getConentViewMarginTop;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

