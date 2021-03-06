//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class ANXBaseServiceModel, NSString, WXSDKInstance;

@interface WXAlipayInsideModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    ANXBaseServiceModel *_baseModel;
    NSString *_appkey;
    NSString *_userId;
    NSString *_sId;
}

+ (id)wx_export_method_53;
+ (id)wx_export_method_52;
+ (id)wx_export_method_51;
+ (id)wx_export_method_50;
+ (id)wx_export_method_49;
+ (id)wx_export_method_48;
+ (id)wx_export_method_47;
+ (id)wx_export_method_46;
+ (id)wx_export_method_45;
@property(copy, nonatomic) NSString *sId; // @synthesize sId=_sId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) ANXBaseServiceModel *baseModel; // @synthesize baseModel=_baseModel;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)startService:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendACCSRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleInsidePush:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)disablePush:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enablePush:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryPay:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)unAuth:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)generateCode:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)auth:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)preCheck:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

