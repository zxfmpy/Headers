//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceFrameCollectionView.h>

#import <QQMainProject/QQLoadObserver-Protocol.h>

@class NSMutableArray, NSString, UIImage;

@interface QQFaceMagicFrameView : QQFaceFrameCollectionView <QQLoadObserver>
{
    UIImage *_whiteIcon;
    NSMutableArray *_indicatorArray;
    _Bool _showActive;
}

@property(nonatomic) _Bool showActive; // @synthesize showActive=_showActive;
- (void)magicActivityClicked;
- (id)cellForCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)LayoutInit;
- (void)reloadFace;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (long long)addMagicFace;
- (long long)magicFaceNum;
- (void)addMagicFaceCell:(id)arg1;
- (void)handleFinishedMagicEmoji;
- (void)loader:(id)arg1 didUpdateStatus:(long long)arg2 userData:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

