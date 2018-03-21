//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluGateWay.h"

@interface aluGateWayAlipay : aluGateWay
{
}

+ (id)sharedInstance;
- (id)codeLoginWithRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)loginSendMsgPB:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)GenerateUnifyLoginRes:(id)arg1;
- (id)GenerateUnifyLoginReqPb:(id)arg1;
- (int)validateTypePb:(id)arg1;
- (int)loginTypePb:(id)arg1;
- (id)startFaceLoginToken:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)bindTaobaoAccountV2:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)bindAlipayAccount:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)loginPbExternParams:(id)arg1;
- (id)loginExternParams:(id)arg1;
- (void)doLoginAsync:(id)arg1 loginPassword:(id)arg2 rsaKey:(id)arg3 extraInfo:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)doLoginAsyncPb:(id)arg1 loginId:(id)arg2 loginPassword:(id)arg3 rsaKey:(id)arg4 extraInfo:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (id)loginAsync:(id)arg1 extraInfo:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)loginAsync:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)supplementLoginPwdsV2:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)setPayPasswordV2:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)registerVerifySMSandMobileStatusV2:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)supplementLoginPwdReq:(id)arg1 password:(id)arg2 scene:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)doregisterWithOldPB:(id)arg1 andrsaKey:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)doregisterWithNewPB:(id)arg1 andrsaKey:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (id)getUnifyRegisterReq:(id)arg1;
- (id)getUnifyRegisterNewResPB:(id)arg1;
- (id)registerWarriorVerify:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)requestCdpInfo:(CDUnknownBlockType)arg1;
- (id)verifyIDCardAndRegister:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)getCountryCodeV2:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (_Bool)shouldUseLoginPb;
- (id)buildGateWayRequest:(id)arg1;

@end
