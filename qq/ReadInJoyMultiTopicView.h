//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ReadInJoyChannelArticle, ReadInJoySeparateTopicView;

@interface ReadInJoyMultiTopicView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    ReadInJoySeparateTopicView *_leftView;
    ReadInJoySeparateTopicView *_rightView;
}

@property(retain, nonatomic) ReadInJoySeparateTopicView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) ReadInJoySeparateTopicView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void).cxx_destruct;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (void)rightTap;
- (void)leftTap;
- (void)initSeparateTopicView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
