//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TcApiTool : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)getAppDisplayName;
+ (id)systemVersionString;
+ (double)systemVersion;
+ (id)seq;
+ (id)random16Str;
+ (int)NSString16toNSNumber:(id)arg1;
+ (id)encryAccessToken:(id)arg1 key:(id)arg2;
+ (id)decodeAccessToken:(id)arg1 key:(id)arg2;
+ (id)TCOSDKdeviceMachine:(id)arg1;
+ (id)SDKInfo;
+ (_Bool)isRegistSchemeInfoPlistFile:(id)arg1;
+ (id)getAppDefinePath;
+ (void)MoveWindowAnimation:(id)arg1 animationId:(int)arg2 rect:(struct CGRect)arg3 timeInterVal:(double)arg4 name:(id)arg5 context:(void *)arg6;
+ (id)topViewController:(id)arg1;
+ (id)GetURLWithParam:(id)arg1 withParam:(id)arg2;
+ (void)MoveAllWindowIntoScreen:(id)arg1 animation:(_Bool)arg2;
+ (void)MoveAllWindowOutOfScreen:(id)arg1 animation:(_Bool)arg2;
+ (struct CGRect)calcFrameByOrientation:(int)arg1 id:(id)arg2;

@end
