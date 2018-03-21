//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer, TTIMGroupLoadMoreInfo, TTIMListenerManager, TTIMMsgGroupModel, TTIMSDKOptions, TTIMSessionModel;
@protocol TTIMDependDelegate;

@interface TTIMSDKManager : NSObject
{
    _Bool _isNeedRelogin;
    _Bool _isIMOnline;
    _Bool _serverHistoryMsgHasMore;
    TTIMSDKOptions *_imSDKOptions;
    id <TTIMDependDelegate> _dependDelegate;
    long long _lastUserId;
    TTIMListenerManager *_listenerManager;
    TTIMMsgGroupModel *_groupModel;
    TTIMSessionModel *_centerModel;
    NSTimer *_timer;
    NSMutableDictionary *_mLastGetGroupMsgInHasMore;
    TTIMGroupLoadMoreInfo *_groupLoadMoreInfo;
}

+ (id)sharedManager;
@property(nonatomic) _Bool serverHistoryMsgHasMore; // @synthesize serverHistoryMsgHasMore=_serverHistoryMsgHasMore;
@property(retain, nonatomic) TTIMGroupLoadMoreInfo *groupLoadMoreInfo; // @synthesize groupLoadMoreInfo=_groupLoadMoreInfo;
@property(retain, nonatomic) NSMutableDictionary *mLastGetGroupMsgInHasMore; // @synthesize mLastGetGroupMsgInHasMore=_mLastGetGroupMsgInHasMore;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TTIMSessionModel *centerModel; // @synthesize centerModel=_centerModel;
@property(retain, nonatomic) TTIMMsgGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) TTIMListenerManager *listenerManager; // @synthesize listenerManager=_listenerManager;
@property(nonatomic) long long lastUserId; // @synthesize lastUserId=_lastUserId;
@property(nonatomic) _Bool isIMOnline; // @synthesize isIMOnline=_isIMOnline;
@property(nonatomic) _Bool isNeedRelogin; // @synthesize isNeedRelogin=_isNeedRelogin;
@property(nonatomic) __weak id <TTIMDependDelegate> dependDelegate; // @synthesize dependDelegate=_dependDelegate;
@property(retain, nonatomic) TTIMSDKOptions *imSDKOptions; // @synthesize imSDKOptions=_imSDKOptions;
- (void).cxx_destruct;
- (void)unRegisterSession:(id)arg1 listener:(id)arg2;
- (void)registerSession:(id)arg1 listener:(id)arg2;
- (void)queryUnReadCountForSesstion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)queryUnReadCountForAllSessions;
- (void)markMsgReaded:(id)arg1;
- (void)markAllReaded:(id)arg1;
- (void)modifySessionWithSessionId:(id)arg1 stick:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)modifySessionWithSessionId:(id)arg1 noDisturb:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)modifySessionWithSessionId:(id)arg1 applyJoin:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)querySessionWithSessionId:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)querySessionListWithOffset:(long long)arg1 limit:(long long)arg2;
- (void)queryCenterMsgList;
- (void)queryMsg:(id)arg1 mid:(long long)arg2 cid:(long long)arg3 limit:(long long)arg4;
- (void)queryMsg:(id)arg1 before:(id)arg2 limit:(long long)arg3;
- (void)queryMsg:(id)arg1 limit:(long long)arg2;
- (void)queryLastMsgFromSession:(id)arg1 containDeletedMsg:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)quitFromGroup:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deleteMember:(id)arg1 fromGroup:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)clearSessionMsg:(id)arg1;
- (void)handleSessionDeleteResponse:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)sendDeleteMsg:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)destoryGetMsgTimer;
- (void)setupGetMsgTimer;
- (void)handleGroupLoadMoreResponse:(id)arg1;
- (void)sendGroupLoadMoreMessageWithGroupId:(id)arg1 messageId:(long long)arg2 index:(long long)arg3 count:(long long)arg4;
- (void)insertOrUpdateForPersonGroupWithMsgs:(id)arg1;
- (void)handleGetMsgResponse:(id)arg1;
- (void)handleGetGroupMsgResponse:(id)arg1;
- (void)fetchMessagesOfSession:(id)arg1;
- (void)sendGetMsg:(id)arg1;
- (void)sendGetMsg;
- (void)handleGroupRefreshMessages:(id)arg1;
- (void)refreshGroupWithId:(id)arg1;
- (void)handleGetMultiGroupListResponse:(id)arg1;
- (void)sendGetMultiGroupListMsgWithGroupIds:(id)arg1;
- (void)handleGetGroupListResponse:(id)arg1;
- (void)sendGetGroupListMsg;
- (void)handlePrivateChatSessionListInitResponse:(id)arg1;
- (void)sendPrivateChatSessionListInitWithIndex:(unsigned long long)arg1;
- (void)handleNotifyNewNotice:(id)arg1;
- (void)handleNotifyNewMsg:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)addMessage:(id)arg1 session:(id)arg2;
- (void)addMessage:(id)arg1;
- (void)handleSendGroupMsgResponse:(id)arg1;
- (void)handleSendMsgResponse:(id)arg1;
- (void)sendMessage:(id)arg1 session:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)handleOfflineResponseMsg:(id)arg1;
- (void)sendOfflineMsg;
- (void)handleOnlineResponseMsg:(id)arg1;
- (void)sendOnlineMsg;
- (_Bool)checkErrorCodeWithItem:(id)arg1;
- (void)handleMsg:(id)arg1;
- (void)handleOnlyHttpMsg:(id)arg1;
- (void)onLCSConnectionStateChangedToConnected:(_Bool)arg1;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)onlineIMService;
- (_Bool)isAccountValid;
- (void)logout;
- (void)reset;
- (void)login;
- (id)currentToken;
- (long long)currentDeviceId;
- (long long)currentUserId;
- (void)bindDependDelegate:(id)arg1 options:(id)arg2;
- (void)addObservers;
- (id)init;
- (void)dealloc;

@end
