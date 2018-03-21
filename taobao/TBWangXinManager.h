//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

@class IMThreadSafeMutableDictionary, NSMutableArray, NSMutableDictionary, YHMuticastDelegate;
@protocol TBWangXinManagerDelegate;

@interface TBWangXinManager : MKTMsgBusHelp
{
    int _managerStatus;
    _Bool _canRecieveBuyerWWMessage;
    _Bool _careDemote;
    int _initStatus;
    long long _sessionKeepDays;
    YHMuticastDelegate<TBWangXinManagerDelegate> *_mutiCastDelegate;
    NSMutableDictionary *_wangxinArrivedMsgList;
    NSMutableArray *_wangxinSessionUpdateList;
    NSMutableArray *_wwRecentSessionList;
    NSMutableDictionary *_wwConversationDict;
    IMThreadSafeMutableDictionary *_wwSessionLastMessage;
}

+ (id)wwSessionInfoFromYWConversation:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool careDemote; // @synthesize careDemote=_careDemote;
@property(retain, nonatomic) IMThreadSafeMutableDictionary *wwSessionLastMessage; // @synthesize wwSessionLastMessage=_wwSessionLastMessage;
@property(retain, nonatomic) NSMutableDictionary *wwConversationDict; // @synthesize wwConversationDict=_wwConversationDict;
@property(retain, nonatomic) NSMutableArray *wwRecentSessionList; // @synthesize wwRecentSessionList=_wwRecentSessionList;
@property(retain, nonatomic) NSMutableArray *wangxinSessionUpdateList; // @synthesize wangxinSessionUpdateList=_wangxinSessionUpdateList;
@property(retain, nonatomic) NSMutableDictionary *wangxinArrivedMsgList; // @synthesize wangxinArrivedMsgList=_wangxinArrivedMsgList;
@property(retain, nonatomic) YHMuticastDelegate<TBWangXinManagerDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
@property(nonatomic) long long sessionKeepDays; // @synthesize sessionKeepDays=_sessionKeepDays;
@property(nonatomic) int initStatus; // @synthesize initStatus=_initStatus;
- (void).cxx_destruct;
- (id)sessionLastMessageDOWithSessionId:(id)arg1;
- (id)latestWWMessageWithConversationID:(id)arg1;
- (id)parserWWMessageToSessionMessageDO:(id)arg1;
- (void)refreashLastSessionMessageDO:(id)arg1;
- (void)guideDidRemoveNotification:(id)arg1;
- (void)guideChatHistoryDidRemoveNotification:(id)arg1;
- (void)requestStoreGuideListIfNeeded;
- (void)proccessWangxinSessionList:(_Bool)arg1;
- (_Bool)canProcessSessionId:(id)arg1;
- (void)syncConversationToAMPSessionIfNeeded:(id)arg1;
- (void)ampUserUpdated:(id)arg1;
- (void)didRoamBatchP2PChatLogExForBuyerWithError:(id)arg1;
- (void)notifyYWMsgArrived:(id)arg1 withWWSessionId:(id)arg2;
- (void)onYWMessagesArrived:(id)arg1;
- (void)wangwangLoginFailed:(id)arg1;
- (void)wangwangLogined:(id)arg1;
- (id)transferWWListToAMP:(id)arg1;
- (_Bool)updateWangWangTypeSession:(id)arg1;
- (void)updateWangWangTypeSessionList:(id)arg1;
- (void)ywMessagesArrived:(id)arg1 withMainNick:(id)arg2;
- (id)ywConversationWithId:(id)arg1;
- (id)wangWangSessionList:(id)arg1;
- (void)proccessWangxinRecentSessionList:(id)arg1 careDemote:(_Bool)arg2;
- (void)removeSession:(id)arg1;
- (void)batchClearSessionUnreadCount:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)roamingWWLastMessageOfUsers:(id)arg1;
@property(nonatomic) _Bool canRecieveBuyerWWMessage; // @synthesize canRecieveBuyerWWMessage=_canRecieveBuyerWWMessage;
@property(readonly, nonatomic) int managerStatus;
- (void)resetManager;
- (void)startManager;
- (id)init;

@end
