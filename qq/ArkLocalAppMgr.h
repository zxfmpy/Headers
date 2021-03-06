//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ArkLocalAppMgr : NSObject
{
    NSMutableDictionary *_appPathCache;
    NSMutableArray *_updateAppByNameTaskList;
    NSMutableDictionary *_updateRecordCache;
    NSMutableDictionary *_appLastUseTimeCache;
    double _lastCheckUpdateTime;
    NSMutableArray *_predownloadAppList;
    int _checkAppUpdateInterval;
    NSMutableArray *_getAppByActionTaskList;
    struct IGetAppInfoByContextActionMetaCallbackImpl *_GetAppInfoByContextActionMetaCallback;
    NSMutableArray *_getAppViewByIntentTaskList;
    _Bool _debugUpdateMode;
    NSMutableDictionary *_debugAppPathMap;
}

+ (int)compareVersionString:(id)arg1 ver2:(id)arg2;
+ (_Bool)isValidAppFileName:(id)arg1;
+ (_Bool)isValidVersionString:(id)arg1;
+ (_Bool)isValidAppName:(id)arg1;
+ (int)adjustAppUpdatePeriod:(int)arg1 lastUseTime:(id)arg2;
+ (id)getLocalAppPathByAppName:(id)arg1;
+ (id)_copyAppPackageToAppInstallDir:(id)arg1 version:(id)arg2 appPackage:(id)arg3;
+ (id)enumInstalledAppName;
+ (void)deleteAppByName:(id)arg1;
+ (void)clearInstallApps;
+ (id)loadAppDesc:(id)arg1;
+ (void)saveAppDesc:(id)arg1 appDesc:(id)arg2;
+ (id)appDescKey:(id)arg1;
+ (void)deleteOldInstalledApp:(id)arg1;
+ (void)cleanupOldInstalledApp;
+ (id)getAppVerByAppPath:(id)arg1;
+ (id)QueryAppInfoResultCodeToString:(int)arg1;
+ (int)_sceneStringToEnum:(id)arg1;
+ (int)_sceneStringToMask:(id)arg1;
+ (id)parseAction:(struct ArkXML_TagStruct *)arg1 intent:(id)arg2 scene:(int)arg3;
+ (void)_findAppActionMatchIntent:(id)arg1 intent:(id)arg2 scene:(int)arg3 appViewDescList:(id)arg4;
+ (void)findAppActionMatchIntent:(id)arg1 intent:(id)arg2 scene:(int)arg3 appViewDescList:(id)arg4;
+ (void)findAppViewMatchContextActionMeta:(id)arg1 context:(id)arg2 action:(id)arg3 scene:(int)arg4 metaList:(id)arg5 historyMetaList:(id)arg6 appViewDescList:(id)arg7;
+ (void)notifyGetAppPathByNameResult:(int)arg1 appName:(id)arg2 msg:(id)arg3 appPath:(id)arg4 costTime:(long long)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)getArkAppInstallPath:(id)arg1 version:(id)arg2;
+ (id)getArkAppInstallDir:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *debugAppPathMap; // @synthesize debugAppPathMap=_debugAppPathMap;
- (void).cxx_destruct;
- (void)updateAppLastUseTime:(id)arg1;
- (id)getAppLastUseTime:(id)arg1;
- (void)updateAppUpdateTime:(id)arg1 updateInterval:(int)arg2;
- (_Bool)isAppNeedUpdate:(id)arg1;
- (void)_notifyUpdateByNameResult:(id)arg1 result:(int)arg2 error:(int)arg3 msg:(id)arg4 appPath:(id)arg5 appVersion:(id)arg6 updateInterval:(int)arg7;
- (_Bool)updateAppByName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)runAppUpdateTask:(id)arg1;
- (void)checkAppUpdate;
- (void)updatePredownloadAppList;
- (void)notifyGetAppViewByIntent:(id)arg1;
- (void)getAppViewByIntent:(id)arg1 intent:(id)arg2 scene:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)onGetAppInfoByContextActionMeta_GetAppPath:(id)arg1 retCode:(int)arg2 msg:(id)arg3 appPath:(id)arg4 appName:(id)arg5;
- (void)onGetAppInfoByContextActionMeta:(void *)arg1 appViewList:(const set_acb53744 *)arg2;
- (void)onGetAppByActionTaskComplete;
- (_Bool)getAppByContextAction:(id)arg1 scene:(int)arg2 metaList:(id)arg3 historyMetaList:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)clearActionAppQueryCache;
- (void)clearActionAppRecentCache;
- (_Bool)getAppPathByName:(id)arg1 minVersion:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)clearAppPathCache;
- (id)getAppPathByNameFromLocal:(id)arg1 minVersion:(id)arg2;
- (void)onApplicationActive;
- (void)setUpdateToDebugMode:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

