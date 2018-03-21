//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableAttributedString, NSString, UIColor, UIImage;

@interface TBLiveCommentModel : NSObject
{
    _Bool _isVIPUser;
    int _userLevel;
    NSString *_commentId;
    NSString *_nickStr;
    UIColor *_contentBgColor;
    double _cellHeight;
    NSString *_commentStr;
    NSMutableAttributedString *_contentStr;
    unsigned long long _type;
    long long _userId;
    NSString *_iconFont;
    double _separate;
    NSDictionary *_identification;
    NSString *_iconUrl;
    NSString *_userLevelText;
    UIImage *_userLevelIconImage;
    UIImage *_viperImage;
    struct CGSize _contentSize;
    struct CGSize _singleLineContentSize;
}

+ (double)commentAreaViewMASRight;
+ (double)maxLabelWidth;
+ (double)iconFontSide;
+ (long long)lineBreakMode;
+ (id)contentFont;
+ (double)marginV;
+ (double)marginH;
+ (struct CGSize)contentSize;
+ (id)userLevelShowColor:(int)arg1;
+ (id)activityPointsShowColor;
+ (id)accountColor;
@property(retain, nonatomic) UIImage *viperImage; // @synthesize viperImage=_viperImage;
@property(retain, nonatomic) UIImage *userLevelIconImage; // @synthesize userLevelIconImage=_userLevelIconImage;
@property(copy, nonatomic) NSString *userLevelText; // @synthesize userLevelText=_userLevelText;
@property(nonatomic) int userLevel; // @synthesize userLevel=_userLevel;
@property(nonatomic) _Bool isVIPUser; // @synthesize isVIPUser=_isVIPUser;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSDictionary *identification; // @synthesize identification=_identification;
@property(nonatomic) double separate; // @synthesize separate=_separate;
@property(retain, nonatomic) NSString *iconFont; // @synthesize iconFont=_iconFont;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize singleLineContentSize; // @synthesize singleLineContentSize=_singleLineContentSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableAttributedString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *commentStr; // @synthesize commentStr=_commentStr;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIColor *contentBgColor; // @synthesize contentBgColor=_contentBgColor;
@property(copy, nonatomic) NSString *nickStr; // @synthesize nickStr=_nickStr;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)clearContent;
- (void)makeCommentStyle;
- (struct CGSize)speakStrContentSize;
- (id)joinedStr;
- (id)SystemSpeakImgFromOrange;
- (id)SponsorSpeakImgFromOrange;
- (id)AnchorSpeakImgFromOrange;
- (void)bindSystemSpeak:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)bindAnchorSpeak:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)bindSponsorSpeak:(id)arg1 comment:(id)arg2 userId:(id)arg3;
- (void)bindTM11Notice:(id)arg1 comment:(id)arg2;
- (void)bindTM11MassLike:(id)arg1 state:(id)arg2;
- (void)bindTM11Comment:(id)arg1 command:(id)arg2 userId:(long long)arg3;
- (void)bindActivityPointsShow:(id)arg1;
- (void)bindFlirtElves:(id)arg1;
- (void)bindUserLevelUP:(id)arg1 userLevel:(int)arg2 text:(id)arg3 iconUrl:(id)arg4;
- (void)bindUserEnter:(id)arg1 userLevel:(int)arg2 text:(id)arg3 iconUrl:(id)arg4;
- (void)bindTradeShow:(id)arg1;
- (void)bindFollow:(id)arg1;
- (void)bindNotice:(id)arg1 comment:(id)arg2;
- (void)bindNick:(id)arg1 command:(id)arg2 userId:(long long)arg3 commentId:(id)arg4;
- (void)bindNick:(id)arg1 command:(id)arg2 userId:(long long)arg3 commentId:(id)arg4 identification:(id)arg5;
- (void)bindNick:(id)arg1 command:(id)arg2 userId:(long long)arg3;
- (void)bindNick:(id)arg1 command:(id)arg2 userId:(long long)arg3 identification:(id)arg4;
- (id)init;

@end
