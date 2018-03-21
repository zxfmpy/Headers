//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/QQRelationTabNavBarItemDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol QQRelationTabNavTabBarViewControllerDelegate;

@interface QQRelationTabScrollView : UIScrollView <UIScrollViewDelegate, QQRelationTabNavBarItemDelegate>
{
    struct CGPoint _lastContentOffset;
    _Bool _bForceDownScroll;
    id <QQRelationTabNavTabBarViewControllerDelegate> _navTabBarControllerDelegate;
    double _navTabBarFrameOriginY;
}

@property(nonatomic) _Bool bForceDownScroll; // @synthesize bForceDownScroll=_bForceDownScroll;
@property(nonatomic) double navTabBarFrameOriginY; // @synthesize navTabBarFrameOriginY=_navTabBarFrameOriginY;
@property(nonatomic) __weak id <QQRelationTabNavTabBarViewControllerDelegate> navTabBarControllerDelegate; // @synthesize navTabBarControllerDelegate=_navTabBarControllerDelegate;
- (void).cxx_destruct;
- (void)doAccessibilityScrollDirectionUpAction;
- (void)doAccessibilityScrollDirectionDownAction;
- (void)reloadAppearance;
- (_Bool)bParentScrollViewTop;
- (void)setNavTabBarSubViewsScrollEnable:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)bScrollViewContentOffsetTop;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
