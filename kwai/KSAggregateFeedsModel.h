//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSPageModel.h"

#import "KSAggregateModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface KSAggregateFeedsModel : KSPageModel <KSAggregateModelProtocol>
{
    _Bool _rich;
    short _source;
    NSString *_tag;
    long long _photoCount;
    NSArray *_topPhotos;
}

+ (id)displayNameForTag:(id)arg1;
@property(retain, nonatomic) NSArray *topPhotos; // @synthesize topPhotos=_topPhotos;
@property(nonatomic) short source; // @synthesize source=_source;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(nonatomic) _Bool rich; // @synthesize rich=_rich;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *feeds;
- (void)insertFeed:(id)arg1 atIndex:(long long)arg2;
- (void)removeFeedAtIndex:(long long)arg1;
- (long long)indexOfFeed:(id)arg1;
- (void)setHTTPRequest:(id)arg1 additionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

