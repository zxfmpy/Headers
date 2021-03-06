//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AliDetailContractPhoneViewProtocal-Protocol.h"

@class AliDetailContractPhoneDataEngine, NSMutableArray, NSString, UILabel, UIScrollView;

@interface AliDetailContractNumCardPackageView : UIView <AliDetailContractPhoneViewProtocal>
{
    AliDetailContractPhoneDataEngine *_dataEngine;
    CDUnknownBlockType _selectBlock;
    NSString *_netStandard;
    UIScrollView *_scrollView;
    UIView *_descriptionView;
    UILabel *_descriptonLabel;
    NSMutableArray *_buttonsArray;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) UILabel *descriptonLabel; // @synthesize descriptonLabel=_descriptonLabel;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSString *netStandard; // @synthesize netStandard=_netStandard;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) __weak AliDetailContractPhoneDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (void)onClickedPackageButton:(id)arg1;
- (id)createButton:(id)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

