//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PHAsset, PHAssetCollection, PHFetchResult;

@interface TBPSAssetGroup : NSObject
{
    PHAssetCollection *_group;
    NSString *_groupName;
    NSString *_groupIdentifier;
    PHFetchResult *_groupAssets;
    NSMutableArray *_groupModels;
    PHAsset *_groupPosterAsset;
}

@property(retain, nonatomic) PHAsset *groupPosterAsset; // @synthesize groupPosterAsset=_groupPosterAsset;
@property(retain, nonatomic) NSMutableArray *groupModels; // @synthesize groupModels=_groupModels;
@property(retain, nonatomic) PHFetchResult *groupAssets; // @synthesize groupAssets=_groupAssets;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) PHAssetCollection *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)enumerateAssetModels;
- (long long)numberOfAssets;
- (void)enumerateAssets;
- (id)initWithGroup:(id)arg1;

@end
