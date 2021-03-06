//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchViewModel.h"

@class TBSRPXSearchService, TBSearchPromotionBanner;

@interface TBSRPXSearchPromotionBannerViewModel : XSearchViewModel
{
    TBSRPXSearchService *_searchService;
    TBSearchPromotionBanner *_model;
}

@property(retain, nonatomic) TBSearchPromotionBanner *model; // @synthesize model=_model;
@property(retain, nonatomic) TBSRPXSearchService *searchService; // @synthesize searchService=_searchService;
- (void).cxx_destruct;
- (id)getUTArgs;
- (void)dataLoaded;
- (_Bool)checkTimeValid;
- (void)updateCloseTime;
- (_Bool)checkDefaultShow;
- (id)initWithSearchService:(id)arg1;

@end

