//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

@class AREAvatarOrLogoImageView, UIImageView;

@interface AREReceivableEnvelopeView : MAAnnotationView
{
    UIImageView *_backgroundView;
    AREAvatarOrLogoImageView *_avatarView;
}

@property(retain, nonatomic) AREAvatarOrLogoImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)updateAnnotationView;

@end

