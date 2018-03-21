//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/ARQRManagerDelegate-Protocol.h>
#import <QQMainProject/QQPbCommentDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface QQJSBridgePublicAccountPlugin : QQWebViewPluginQQBizBase <QQPbCommentDelegate, ARQRManagerDelegate>
{
    _Bool _isScanningQRCode;
    _Bool _scanQRCodeNeedsCallback;
    NSString *_multiShareImgUrl;
    NSMutableDictionary *_pbCommentContextQuery;
    NSDictionary *_contextQuery;
    NSDictionary *_webMenuInfos;
}

@property(retain, nonatomic) NSDictionary *webMenuInfos; // @synthesize webMenuInfos=_webMenuInfos;
@property(nonatomic) _Bool scanQRCodeNeedsCallback; // @synthesize scanQRCodeNeedsCallback=_scanQRCodeNeedsCallback;
@property(nonatomic) _Bool isScanningQRCode; // @synthesize isScanningQRCode=_isScanningQRCode;
@property(retain, nonatomic) NSDictionary *contextQuery; // @synthesize contextQuery=_contextQuery;
@property(retain) NSMutableDictionary *pbCommentContextQuery; // @synthesize pbCommentContextQuery=_pbCommentContextQuery;
@property(copy, nonatomic) NSString *multiShareImgUrl; // @synthesize multiShareImgUrl=_multiShareImgUrl;
- (void)handleJsBridgeRequest_publicAccount_getWeatherBackground:(id)arg1;
- (void)reportJsClick:(id)arg1 withRet:(int)arg2;
- (void)returnScanResultToJSWithRetCode:(int)arg1 result:(id)arg2;
- (void)popScanner;
- (void)ARQRManagerSucess:(id)arg1 QRResult:(id)arg2;
- (void)handleJsBridgeRequest_publicAccount_startMultiShare:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_sharePicToWeChatCircle:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_setNavigationBarStyle:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_scanQRcode:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_config:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_showWebToolbar:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_hideWebToolbar:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_showAllNonBaseMenuItem:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_hideAllNonBaseMenuItem:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_gotoKandian:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_showOfficialAccountProfile:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_showMenuItems:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_hideMenuItems:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_showWebBottomBar:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_setScreenshotAttr:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_enableScreenshot:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_actionSheetAdditionalItems:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_openAccountPageMore:(id)arg1;
- (id)handleJsBridgeRequest_publicAccount_enableShareDianDian:(id)arg1;
- (id)handleJsBridgeRequest_publicAccount_enableShareSinaWeibo:(id)arg1;
- (id)handleJsBridgeRequest_publicAccount_setActionButtonState:(id)arg1;
- (void)callBackToWeb:(id)arg1 andParam:(id)arg2;
- (void)handleJsBridgeRequest_publicAccount_openLocation:(id)arg1;
- (void)handleJsBridgeRequest_publicAccount_comment_ui_init:(id)arg1;
- (void)openPbCommentInputView;
- (id)getpbCommentContextQuery;
- (void)onKeyBoardStatus:(id)arg1 isShowKeyBoard:(_Bool)arg2 isAnonymous:(_Bool)arg3;
- (void)onShowTipsInWeb:(id)arg1;
- (void)onCommentSend:(id)arg1 isAnonymous:(_Bool)arg2;
- (void)onForceOffLineNotify;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
