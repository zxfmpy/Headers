//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXSDetailModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)downloadSkin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)originalDownloadSkin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setCurrentSkin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)originalCurrentSkin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getCurrentSkin:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

