//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSNewRecommendUserService.h"

@class NSArray;

@interface KSPYMKRecommendUserService : KSNewRecommendUserService
{
    NSArray *_friendUsers;
}

@property(retain, nonatomic) NSArray *friendUsers; // @synthesize friendUsers=_friendUsers;
- (void).cxx_destruct;
- (id)titleForSection:(long long)arg1;
- (void)loadMultiUsers:(CDUnknownBlockType)arg1;
- (id)userForIndexPath:(id)arg1;
- (id)usersForSection:(long long)arg1;
- (id)allUsers;
- (long long)numberOfUsersForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)actionStatRequest;
- (id)statRequestWithUsers:(id)arg1 isMorePage:(_Bool)arg2;
- (id)request;

@end
