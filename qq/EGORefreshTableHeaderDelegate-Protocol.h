//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EGORefreshTableHeaderView;

@protocol EGORefreshTableHeaderDelegate

@optional
- (int)egoRefreshTableHeaderDataSourceLastUpdated:(EGORefreshTableHeaderView *)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(EGORefreshTableHeaderView *)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(EGORefreshTableHeaderView *)arg1;
@end
