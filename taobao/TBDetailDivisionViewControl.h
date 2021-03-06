//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBaseViewControl.h"

#import "TBMCScrollViewItemProtocol-Protocol.h"

@class AliDetailDivisionComponent, AliDetailDivisionModel, NSString, TBDetailDivisionModel;

@interface TBDetailDivisionViewControl : AliDetailBaseViewControl <TBMCScrollViewItemProtocol>
{
    TBDetailDivisionModel *_viewModel;
    AliDetailDivisionModel *_divisionModel;
    AliDetailDivisionComponent *_divisionComponent;
}

@property(retain, nonatomic) AliDetailDivisionComponent *divisionComponent; // @synthesize divisionComponent=_divisionComponent;
@property(retain, nonatomic) AliDetailDivisionModel *divisionModel; // @synthesize divisionModel=_divisionModel;
@property(retain, nonatomic) TBDetailDivisionModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)getComponentView;
- (id)getData;
- (void)bindData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

