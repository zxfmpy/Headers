//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CreditsView : UIView
{
    CDUnknownBlockType _creditsHandler;
    UILabel *_leftTopLbl;
    UILabel *_midTopLbl;
    UILabel *_rightTopLbl;
}

@property(retain, nonatomic) UILabel *rightTopLbl; // @synthesize rightTopLbl=_rightTopLbl;
@property(retain, nonatomic) UILabel *midTopLbl; // @synthesize midTopLbl=_midTopLbl;
@property(retain, nonatomic) UILabel *leftTopLbl; // @synthesize leftTopLbl=_leftTopLbl;
@property(copy, nonatomic) CDUnknownBlockType creditsHandler; // @synthesize creditsHandler=_creditsHandler;
- (void).cxx_destruct;
- (void)detailBtnAction:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
