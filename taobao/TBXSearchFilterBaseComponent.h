//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSRPXSearchService, UIButton, UILabel, UIView;
@protocol TBXSearchFilterSubComponentDelegate;

@interface TBXSearchFilterBaseComponent : NSObject
{
    id <TBXSearchFilterSubComponentDelegate> _delegate;
    TBSRPXSearchService *_service;
    UIView *_containerView;
    UILabel *_sectionTitleLabel;
    UIButton *_expandButton;
    UILabel *_expandIconLabel;
    UIView *_splitBottomLine;
}

@property(retain, nonatomic) UIView *splitBottomLine; // @synthesize splitBottomLine=_splitBottomLine;
@property(retain, nonatomic) UILabel *expandIconLabel; // @synthesize expandIconLabel=_expandIconLabel;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TBSRPXSearchService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <TBXSearchFilterSubComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)firstAccessibilityElement;
- (id)accessibilityLabel;
- (id)getDisplayUTArgs;
- (void)expandButtonClicked:(id)arg1;
- (_Bool)ishighlight;
- (void)reset;
- (void)hideExpandButton;
- (void)superInit;

@end

