//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class Article, CALayer, NSDictionary, SSThemedButton;

@interface TTArticleStoryToolView : SSThemedView
{
    _Bool _animating;
    SSThemedButton *_previousChapterButton;
    SSThemedButton *_nextChapterButton;
    SSThemedButton *_catalogButton;
    CALayer *_bottomLine;
    Article *_article;
    NSDictionary *_novelData;
}

@property(retain, nonatomic) NSDictionary *novelData; // @synthesize novelData=_novelData;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) CALayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedButton *catalogButton; // @synthesize catalogButton=_catalogButton;
@property(retain, nonatomic) SSThemedButton *nextChapterButton; // @synthesize nextChapterButton=_nextChapterButton;
@property(retain, nonatomic) SSThemedButton *previousChapterButton; // @synthesize previousChapterButton=_previousChapterButton;
- (void).cxx_destruct;
- (id)_jumpSchemaWithToolItemType:(long long)arg1;
- (void)toolItemFired:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)layout;
- (id)initWithWidth:(double)arg1 article:(id)arg2;

@end

