//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQMultiBiuEditControllerDelegate-Protocol.h>

@class NSString;

@interface KdNCEventHandler : NSObject <QQMultiBiuEditControllerDelegate>
{
    NSString *_commentDraftId;
    NSString *_commentDraft;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *commentDraft; // @synthesize commentDraft=_commentDraft;
@property(retain, nonatomic) NSString *commentDraftId; // @synthesize commentDraftId=_commentDraftId;
- (void).cxx_destruct;
- (id)base64encode:(id)arg1;
- (id)base64decode:(id)arg1;
- (void)openHomepageWithUin:(unsigned long long)arg1;
- (void)onBiuViewControllerClose;
- (void)onMultiBiuSend:(_Bool)arg1 feedsId:(unsigned long long)arg2 articleModel:(id)arg3;
- (id)getBiuOneLevelItemWithModel:(id)arg1;
- (void)openBiuEditorWithArticle:(id)arg1 commentModel:(id)arg2;
- (void)clearDraft;
- (void)openCommentEditorWithUniqueKey:(id)arg1 videoModel:(id)arg2 comment:(id)arg3 toUin:(unsigned long long)arg4 toNickName:(id)arg5 type:(int)arg6 placeholder:(id)arg7 callback:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

