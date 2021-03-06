//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PluginObject.h>

@class QQLockDictionary;

@interface PCCDownloader : PluginObject
{
    QQLockDictionary *_fileSizeDic;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQLockDictionary *fileSizeDic; // @synthesize fileSizeDic=_fileSizeDic;
- (void).cxx_destruct;
- (void)downloadFiles:(id)arg1 homePath:(id)arg2 useArk:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadFiles:(id)arg1 homePath:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportDownloadSuccessRate:(id)arg1 md5:(id)arg2 homePath:(id)arg3 success:(_Bool)arg4 failedCode:(long long)arg5;
- (void)callbackWith:(id)arg1 failedFiles:(id)arg2 homePath:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

