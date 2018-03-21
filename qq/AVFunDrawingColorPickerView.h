//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;
@protocol AVFunDrawingColorPickerViewDelegate;

@interface AVFunDrawingColorPickerView : UIView
{
    UIImageView *_sliderView;
    UIImageView *_thumbView;
    UIImageView *_thumbImgView;
    CAShapeLayer *_thumbViewCenterLayer;
    id <AVFunDrawingColorPickerViewDelegate> _delegate;
}

@property(nonatomic) id <AVFunDrawingColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)getThumbCenterPoint;
- (void)setStartColor:(id)arg1;
- (id)colorAtImage:(id)arg1 point:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawScanPreview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
