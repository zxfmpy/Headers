//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASSStorageAccesserOpen : NSObject
{
}

+ (id)getApdidcFromFile;
+ (id)getFromFile;
+ (id)loadJBErrorHistory;
+ (void)saveJBErrorHistory:(id)arg1;
+ (id)loadApdidc;
+ (void)saveApdidc:(id)arg1;
+ (id)loadLocalToken:(id)arg1;
+ (void)saveLocalToken:(id)arg1 keyName:(id)arg2;
+ (void)saveCurrentLoginTime:(id)arg1;
+ (id)loadLastLoginTime;
+ (id)getClientKeyDataFormation:(id)arg1;
+ (id)getRadomizedClientKey;
+ (id)getNewRadomizedID;
+ (id)getRandomizedID;
+ (id)loadPreviousApdid;
+ (void)clearStorage;
+ (id)loadStorageModelFromKeychain;
+ (void)saveStorageModel:(id)arg1;

@end
