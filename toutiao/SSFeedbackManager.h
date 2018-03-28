//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol SSFeedbackManagerDelegate;

@interface SSFeedbackManager : NSObject
{
    id <SSFeedbackManagerDelegate> _delegate;
    NSDictionary *_trackerInfo;
    NSDictionary *_lastArticleInfo;
    NSString *_snapshotURL;
    NSString *_snapshotDOM;
    NSDate *_snapshotDate;
    NSString *_feedbackKey;
}

+ (void)saveDefaultFeedbackModel:(id)arg1;
+ (id)queryDefaultFeedbackModel;
+ (_Bool)hasNewFeedback;
+ (void)saveFeedbackIDIfIsNewest:(id)arg1;
+ (void)saveFeedbackItemServerTypePubDateIfIsNewest:(id)arg1;
+ (id)newestFeedbackItemID;
+ (id)newestServerTypeFeedbackItemPubDate;
+ (void)setHasNewFeedback:(_Bool)arg1;
+ (void)saveNeedPostMsg:(id)arg1;
+ (id)needPostMsg;
+ (id)needPostImgCachePath;
+ (void)saveNeedPostImg:(id)arg1;
+ (id)needPostImg;
+ (void)saveNeedPostImgURI:(id)arg1;
+ (id)needPostImgURI;
+ (id)defaultContactString;
+ (void)saveDefaultContactString:(id)arg1;
+ (id)recentFeedbackModels;
+ (void)saveFeedbackModels:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *feedbackKey; // @synthesize feedbackKey=_feedbackKey;
@property(retain, nonatomic) NSDate *snapshotDate; // @synthesize snapshotDate=_snapshotDate;
@property(retain, nonatomic) NSString *snapshotDOM; // @synthesize snapshotDOM=_snapshotDOM;
@property(retain, nonatomic) NSString *snapshotURL; // @synthesize snapshotURL=_snapshotURL;
@property(retain, nonatomic) NSDictionary *lastArticleInfo; // @synthesize lastArticleInfo=_lastArticleInfo;
@property(copy, nonatomic) NSDictionary *trackerInfo; // @synthesize trackerInfo=_trackerInfo;
@property(nonatomic) __weak id <SSFeedbackManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pn_didReceiveMemoryWarningNotification:(id)arg1;
- (void)startPostFeedbackWithCustomPostParam:(id)arg1;
- (void)startPostFeedbackContent:(id)arg1 userContact:(id)arg2 imgURI:(id)arg3 backgorundImgURI:(id)arg4 imageCreateDate:(id)arg5;
- (void)startFetchComments:(_Bool)arg1 contextID:(id)arg2;
- (void)checkHasNewFeedback;
- (id)init;
- (void)dealloc;

@end
