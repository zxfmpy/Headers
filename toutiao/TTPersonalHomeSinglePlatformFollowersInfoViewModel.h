//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, TTPersonalHomeSinglePlatformFollowersInfoModel;

@interface TTPersonalHomeSinglePlatformFollowersInfoViewModel : NSObject
{
    NSString *_displayName;
    NSString *_followersCountDisplayStr;
    NSString *_iconURLStr;
    NSURL *_openURL;
    NSString *_appleID;
    unsigned long long _uiStyle;
    TTPersonalHomeSinglePlatformFollowersInfoModel *_itemModel;
    NSString *_downloadURLStr;
    NSString *_appName;
}

@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *downloadURLStr; // @synthesize downloadURLStr=_downloadURLStr;
@property(retain, nonatomic) TTPersonalHomeSinglePlatformFollowersInfoModel *itemModel; // @synthesize itemModel=_itemModel;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSURL *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSString *iconURLStr; // @synthesize iconURLStr=_iconURLStr;
@property(retain, nonatomic) NSString *followersCountDisplayStr; // @synthesize followersCountDisplayStr=_followersCountDisplayStr;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)markHasShownLaunchAppAlert;
- (_Bool)shouldShowLaunchAppAlert;
- (void)trackClickEventWithAction:(id)arg1;
- (void)trackDownloadApp;
- (void)bindRAC;
- (id)initWithItemModel:(id)arg1;

@end

