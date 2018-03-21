//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface MBKCollectionDataSource : NSObject <UICollectionViewDataSource>
{
    NSMutableArray *_collectionItems;
    NSString *_cellIdentifier;
    CDUnknownBlockType _configureCellBlock;
    NSArray *_collectedStickerIndexs;
}

@property(copy, nonatomic) NSArray *collectedStickerIndexs; // @synthesize collectedStickerIndexs=_collectedStickerIndexs;
@property(copy, nonatomic) CDUnknownBlockType configureCellBlock; // @synthesize configureCellBlock=_configureCellBlock;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(retain) NSMutableArray *collectionItems; // @synthesize collectionItems=_collectionItems;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeAllItems;
- (_Bool)isCollectedItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)initWithItems:(id)arg1 cellIdentifier:(id)arg2 configureCellBlock:(CDUnknownBlockType)arg3 collectedStickerIndexs:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
