//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSFileManager, NSMutableArray, NSMutableDictionary, NSString;

@interface LVBundle : NSObject
{
    NSMutableArray *_scriptPaths;
    NSMutableArray *_resourcePaths;
    NSFileManager *_fileManager;
    NSString *_currentPath;
    NSMutableDictionary *_imageCaches;
}

@property(retain, nonatomic) NSMutableDictionary *imageCaches; // @synthesize imageCaches=_imageCaches;
- (void).cxx_destruct;
- (id)signedScriptWithName:(id)arg1 rsa:(id)arg2;
- (id)scriptWithName:(id)arg1;
- (id)scriptPathWithName:(id)arg1;
- (id)imageWithName:(id)arg1;
- (id)resourceWithName:(id)arg1;
- (id)resourcePathWithName:(id)arg1;
- (id)absolutePath:(id)arg1;
- (void)removeScriptPath:(id)arg1;
- (void)addScriptPath:(id)arg1;
@property(readonly, nonatomic) NSArray *scriptPaths; // @dynamic scriptPaths;
- (void)removeResourcePath:(id)arg1;
- (void)addResourcePath:(id)arg1;
@property(readonly, nonatomic) NSArray *resourcePaths; // @dynamic resourcePaths;
- (void)changeCurrentPath:(id)arg1;
@property(readonly, nonatomic) NSString *currentPath; // @dynamic currentPath;
- (id)init;

@end

