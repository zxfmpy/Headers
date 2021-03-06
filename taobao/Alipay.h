//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQPPaysGatewayDelegate-Protocol.h"

@class MQPPaysGateway, MQPTrackModel, NSString;
@protocol AlipaySocialManagerProtocol;

@interface Alipay : NSObject <MQPPaysGatewayDelegate>
{
    NSString *_scheme;
    CDUnknownBlockType _actionBlock;
    MQPPaysGateway *_gateway;
    MQPTrackModel *_preloadTrack;
    CDUnknownBlockType _fpStatusBlock;
    CDUnknownBlockType _fpResultBlock;
    CDUnknownBlockType _authv2Block;
    id <AlipaySocialManagerProtocol> _socialManager;
}

+ (id)defaultService;
+ (void)registerWindVaneJSBridge;
+ (void)registerSocialManager:(id)arg1;
@property(retain, nonatomic) id <AlipaySocialManagerProtocol> socialManager; // @synthesize socialManager=_socialManager;
@property(copy, nonatomic) CDUnknownBlockType authv2Block; // @synthesize authv2Block=_authv2Block;
@property(copy, nonatomic) CDUnknownBlockType fpResultBlock; // @synthesize fpResultBlock=_fpResultBlock;
@property(copy, nonatomic) CDUnknownBlockType fpStatusBlock; // @synthesize fpStatusBlock=_fpStatusBlock;
@property(retain, nonatomic) MQPTrackModel *preloadTrack; // @synthesize preloadTrack=_preloadTrack;
@property(retain, nonatomic) MQPPaysGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)closeSession:(id)arg1 withResult:(id)arg2;
- (void)startSession:(id)arg1;
- (void)processAuth_V2Result:(id)arg1;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)processFPAuthWithResult:(id)arg1;
- (void)processFingerprintAuthWithResult:(id)arg1;
- (void)closeFingerprintWithExternToken:(id)arg1 appName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openFingerprintWithExternToken:(id)arg1 appName:(id)arg2 scheme:(id)arg3 logoTitile:(id)arg4 logoUrl:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)fetchFingerprintAuthStatusWithExternToken:(id)arg1 appName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)preLoad;
- (id)getSDKVersionInfo;
- (id)tidOfSDK;
- (void)setPayWindow:(id)arg1;
- (void)cleanData;
- (void)setLogUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (_Bool)isNewModelResult:(id)arg1;
- (void)session:(id)arg1 callAlipay:(id)arg2;
- (void)session:(id)arg1 callWapPayWithUrl:(id)arg2 cookie:(id)arg3;
- (id)fetchOrderInfoFromH5PayUrl:(id)arg1;
- (_Bool)fetchDataWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)dictionaryFromRegular:(id)arg1 pattern:(id)arg2;
- (id)resultFromUrl:(id)arg1;
- (void)processPayResultUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processPayResultFromAlipayclientWithOrder:(id)arg1;
- (_Bool)payInterceptorWithUrl:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)pay:(id)arg1 from:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)registerObjects;
- (void)registerObject:(id)arg1 withName:(id)arg2;
- (void)setRender:(id)arg1;
- (id)render;
- (void)setResultVC:(id)arg1;
- (id)resultVC;
- (void)setBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)block;
- (void)onExit;
- (void)onTel:(id)arg1;
- (void)onOpenUrl:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)handleAsyncEvent:(id)arg1 withBlock:(id)arg2 from:(id)arg3;
- (_Bool)handleEvent:(id)arg1 from:(id)arg2;
- (id)queryTidFactor:(unsigned long long)arg1;
- (void)reportLatestInfoWithExtParams:(id)arg1;
- (void)reportLatestInfoWithRenderExtParams:(id)arg1;
- (void)renderPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)auth_V2WithInfo:(id)arg1 extParams:(id)arg2 fromScheme:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)pay:(id)arg1 extParams:(id)arg2 from:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

