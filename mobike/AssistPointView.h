//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnnotationView.h"

@class CustomAnnotationInfoWindow, NSDictionary, UIImageView;

@interface AssistPointView : MMAnnotationView
{
    NSDictionary *_paramsDic;
    CustomAnnotationInfoWindow *_infoWindow;
    UIImageView *_animateImageView;
}

@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) CustomAnnotationInfoWindow *infoWindow; // @synthesize infoWindow=_infoWindow;
@property(retain, nonatomic) NSDictionary *paramsDic; // @synthesize paramsDic=_paramsDic;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showPointHelp;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAnnotation;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
