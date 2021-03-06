//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, UILabel;
@protocol AWEPhotoEditorSliderViewDelegate;

@interface AWEPhotoEditorSliderView : UIView
{
    double _positionPercent;
    id <AWEPhotoEditorSliderViewDelegate> _delegate;
    CAGradientLayer *_colorLayer;
    CAShapeLayer *_shapeLayer;
    UIView *_controlView;
    UIView *_selectedView;
    UILabel *_percentLabel;
}

@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(nonatomic) __weak id <AWEPhotoEditorSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double positionPercent; // @synthesize positionPercent=_positionPercent;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)moveControlView:(id)arg1 type:(unsigned long long)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

