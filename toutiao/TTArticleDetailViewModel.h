//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TTDetailModel;

@interface TTArticleDetailViewModel : NSObject
{
    _Bool _webTransformed;
    TTDetailModel *_detailModel;
}

+ (id)tt_sharedHTMLFilePath;
+ (id)tt_sharedHTMLTemplate;
@property(nonatomic) _Bool webTransformed; // @synthesize webTransformed=_webTransformed;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (_Bool)tt_disableWKWebview;
- (void)tt_uploadArticlePosition:(double)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)p_webContentArticleLoadURLString;
- (unsigned long long)p_currentArticleType;
- (void)tt_setContentOffsetY:(double)arg1;
- (double)tt_getLastContentOffsetY;
- (long long)tt_natantStyleFromNatantLevel;
- (_Bool)tt_detailNeedLoadJS;
- (void)tt_setArticleHasRead;
- (_Bool)tt_isArticleNonCooperationWebContent;
- (long long)tt_articleDetailLoadedContentType;
- (_Bool)tt_webHasBeenTransformed;
- (void)tt_setWebHasBeenTransformed:(_Bool)arg1;
- (unsigned long long)tt_articleDetailType;
- (id)initWithDetailModel:(id)arg1;
- (void)tt_nativeContentFilePathWithWebView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)tt_h5ExtraDictWithArticle:(id)arg1;
- (id)tt_nativeContentFilePath;
- (id)tt_sharedWebViewExtraJSONString;
- (id)tt_sharedHTMLContentWithArticle:(id)arg1;
- (id)tt_nativeContentHTMLForWebView:(id)arg1;
- (id)tt_requstForWebContentArticleForURLString:(id)arg1;
- (id)tt_requstForWebContentArticle;

@end

