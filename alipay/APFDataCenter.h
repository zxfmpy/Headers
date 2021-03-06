//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBRPCManager, APFBehavlogManager, BisFaceContent, NSMutableArray, NSString;
@protocol APFDataCenterDelegate;

@interface APFDataCenter : NSObject
{
    NSMutableArray *_aliveImages;
    NSMutableArray *_actionImages;
    NSMutableArray *_monitorImages;
    NSMutableArray *_videos;
    BisFaceContent *_panoImage;
    id <APFDataCenterDelegate> _delegate;
    APFBehavlogManager *_behavlogManager;
    APBRPCManager *_rpcManager;
    NSString *_pubkey;
    NSString *_bisToken;
}

@property(copy, nonatomic) NSString *bisToken; // @synthesize bisToken=_bisToken;
@property(copy, nonatomic) NSString *pubkey; // @synthesize pubkey=_pubkey;
@property(retain, nonatomic) APBRPCManager *rpcManager; // @synthesize rpcManager=_rpcManager;
@property(retain, nonatomic) APFBehavlogManager *behavlogManager; // @synthesize behavlogManager=_behavlogManager;
@property(nonatomic) __weak id <APFDataCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BisFaceContent *panoImage; // @synthesize panoImage=_panoImage;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSMutableArray *monitorImages; // @synthesize monitorImages=_monitorImages;
@property(retain, nonatomic) NSMutableArray *actionImages; // @synthesize actionImages=_actionImages;
@property(retain, nonatomic) NSMutableArray *aliveImages; // @synthesize aliveImages=_aliveImages;
- (void).cxx_destruct;
- (id)buildUploadRequestWithAliveImage:(_Bool)arg1 actionImage:(_Bool)arg2 monitorImage:(_Bool)arg3 video:(_Bool)arg4 behavLog:(_Bool)arg5 panoImage:(_Bool)arg6 invokeType:(id)arg7 retryCnt:(long long)arg8;
- (void)uploadWithMonitorImage:(_Bool)arg1 behavLog:(_Bool)arg2 invokeType:(id)arg3 retryCnt:(long long)arg4;
- (void)uploadWithAliveImage:(_Bool)arg1 actionImage:(_Bool)arg2 monitorImage:(_Bool)arg3 video:(_Bool)arg4 behavLog:(_Bool)arg5 panoImage:(_Bool)arg6 invokeType:(id)arg7 retryCnt:(long long)arg8;
- (void)addBehavTask:(id)arg1;
- (void)clear;
- (void)clearTask;
- (void)clearAliveImage:(_Bool)arg1 actionImage:(_Bool)arg2 monitorImage:(_Bool)arg3 video:(_Bool)arg4 panoImage:(_Bool)arg5;
- (void)addAliveImage:(id)arg1 actionImage:(id)arg2 monitorImage:(id)arg3 video:(id)arg4 replacePanoImage:(id)arg5;
- (id)initWithConfig:(id)arg1;

@end

