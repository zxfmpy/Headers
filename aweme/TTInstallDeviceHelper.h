//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTInstallDeviceHelper : NSObject
{
}

+ (void)saveOpenUDIDToKeychain:(id)arg1;
+ (id)fetchOpenUDIDFromKeychain;
+ (id)resolutionString;
+ (struct CGSize)resolution;
+ (double)screenScale;
+ (double)ssOnePixel;
+ (id)openUDID;
+ (long long)timeZoneOffset;
+ (id)timeZoneName;
+ (id)currentRegion;
+ (id)currentLanguage;
+ (id)MACAddress;
+ (float)OSVersionNumber;
+ (id)idfvString;
+ (id)idfaString;
+ (_Bool)judge480Screen;
+ (_Bool)judge568Screen;
+ (_Bool)judge667Screen;
+ (_Bool)judge736Screen;
+ (_Bool)judgePadDevice;
+ (unsigned long long)getDeviceType;
+ (_Bool)isJailBroken;
+ (_Bool)isIpadProDevice;
+ (_Bool)isScreenWidthLarge320;
+ (_Bool)isPadDevice;
+ (_Bool)is736Screen;
+ (_Bool)is667Screen;
+ (_Bool)is568Screen;
+ (_Bool)is480Screen;
+ (id)platformName;

@end

