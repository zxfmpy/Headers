//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBIWatermarkDO, UIImageView;

@interface TBIWatermarkCell : UIView
{
    UIView *backgroudView;
    TBIWatermarkDO *_mark;
    UIImageView *_thumbView;
    CDUnknownBlockType _touchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
- (void).cxx_destruct;
- (void)touchEnd:(CDUnknownBlockType)arg1;
- (void)handleTap:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)getWaterMark;
- (void)setWaterMark:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

