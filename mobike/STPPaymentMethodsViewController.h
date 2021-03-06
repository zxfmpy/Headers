//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "STPAddCardViewControllerDelegate-Protocol.h"
#import "STPPaymentMethodsInternalViewControllerDelegate-Protocol.h"

@class NSArray, NSString, STPAPIClient, STPPaymentActivityIndicatorView, STPPaymentConfiguration, STPPromise, STPTheme, STPUserInformation, UIBarButtonItem;
@protocol STPBackendAPIAdapter, STPPaymentMethod, STPPaymentMethodsViewControllerDelegate;

@interface STPPaymentMethodsViewController : UIViewController <STPPaymentMethodsInternalViewControllerDelegate, STPAddCardViewControllerDelegate>
{
    _Bool _loading;
    id <STPPaymentMethodsViewControllerDelegate> _delegate;
    STPUserInformation *_prefilledInformation;
    STPPaymentConfiguration *_configuration;
    STPTheme *_theme;
    id <STPBackendAPIAdapter> _apiAdapter;
    STPAPIClient *_apiClient;
    STPPromise *_loadingPromise;
    NSArray *_paymentMethods;
    id <STPPaymentMethod> _selectedPaymentMethod;
    STPPaymentActivityIndicatorView *_activityIndicator;
    UIViewController *_internalViewController;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_cancelItem;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(nonatomic) __weak UIViewController *internalViewController; // @synthesize internalViewController=_internalViewController;
@property(nonatomic) __weak STPPaymentActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) id <STPPaymentMethod> selectedPaymentMethod; // @synthesize selectedPaymentMethod=_selectedPaymentMethod;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) STPPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(retain, nonatomic) STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) id <STPBackendAPIAdapter> apiAdapter; // @synthesize apiAdapter=_apiAdapter;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) STPPaymentConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) STPUserInformation *prefilledInformation; // @synthesize prefilledInformation=_prefilledInformation;
@property(readonly, nonatomic) __weak id <STPPaymentMethodsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addCardViewController:(id)arg1 didCreateToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCardViewControllerDidCancel:(id)arg1;
- (void)internalViewControllerDidCreateToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalViewControllerDidSelectPaymentMethod:(id)arg1;
- (void)finishWithPaymentMethod:(id)arg1;
- (void)cancel:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)updateAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1 theme:(id)arg2 apiAdapter:(id)arg3 delegate:(id)arg4;
- (id)initWithPaymentContext:(id)arg1;
- (id)initWithConfiguration:(id)arg1 apiAdapter:(id)arg2 loadingPromise:(id)arg3 theme:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

