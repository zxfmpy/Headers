//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class AWETransitionManager;
@protocol UINavigationControllerDelegate;

@interface UINavigationController (Transition)
+ (void)load;
@property(retain, nonatomic) AWETransitionManager *aweTransitionmanager;
@property(retain, nonatomic) id <UINavigationControllerDelegate> aweNavigationControllerDelegate;
- (void)awe_transitionSetDelegate:(id)arg1;
- (void)awe_transitionViewDidLoad;
@end

