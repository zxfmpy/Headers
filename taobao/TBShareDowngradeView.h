//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBShareDowngradeView : UIView
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _goToAppBlock;
}

@property(copy, nonatomic) CDUnknownBlockType goToAppBlock; // @synthesize goToAppBlock=_goToAppBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (id)getTipsFromOrange:(id)arg1;
- (id)getButtonColor:(id)arg1;
- (void)cancel;
- (void)gotoOtherApp;
- (struct CGPoint)getCloseButtonOrigin;
- (void)createDialogUI:(id)arg1;
- (struct CGRect)containerViewFrame;
- (struct CGSize)contaienViewSize;
- (id)initWithModel:(id)arg1;

@end
