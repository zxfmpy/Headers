//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class BEEAutolayoutCache, NSMutableDictionary;

@interface BEEAutoLayoutCacheTableView : UITableView
{
    BEEAutolayoutCache *_indexPathHeightCache;
    NSMutableDictionary *_templateCellsByIdentifiers;
}

@property(retain, nonatomic) NSMutableDictionary *templateCellsByIdentifiers; // @synthesize templateCellsByIdentifiers=_templateCellsByIdentifiers;
@property(retain, nonatomic) BEEAutolayoutCache *indexPathHeightCache; // @synthesize indexPathHeightCache=_indexPathHeightCache;
- (void).cxx_destruct;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadData;
- (double)heightForCellWithIdentifier:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (id)templateCellForReuseIdentifier:(id)arg1;
- (double)heightForCellWithIdentifier:(id)arg1 cacheByIndexPath:(id)arg2 configuration:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;

@end
