//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIViewController;

@interface TTPlatformExpiration : NSObject <UIAlertViewDelegate>
{
    _Bool _platformExpiredAlertViewDisplaying;
    NSString *_lastExpiredPlatform;
    UIViewController *_topmostController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIViewController *topmostController; // @synthesize topmostController=_topmostController;
@property(copy, nonatomic) NSString *lastExpiredPlatform; // @synthesize lastExpiredPlatform=_lastExpiredPlatform;
@property(nonatomic) _Bool platformExpiredAlertViewDisplaying; // @synthesize platformExpiredAlertViewDisplaying=_platformExpiredAlertViewDisplaying;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)platformsExpired:(id)arg1 error:(id)arg2;
@property(nonatomic, getter=isWeiboExpired) _Bool weiboExpired;
@property(nonatomic, getter=hasAlertWeiboExpired) _Bool alertWeiboExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
