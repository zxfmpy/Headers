//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface TBDButton : UIButton
{
    double _padding;
    long long _imageLayoutType;
    struct CGSize _imageSize;
    struct CGSize _titleSize;
}

@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) long long imageLayoutType; // @synthesize imageLayoutType=_imageLayoutType;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double padding; // @synthesize padding=_padding;
- (struct CGRect)rectForContentRect:(struct CGRect)arg1 oneSize:(struct CGSize)arg2 anthorSize:(struct CGSize)arg3 reverse:(_Bool)arg4;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;

@end

