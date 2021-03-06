//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"

@class AVAudioPlayer, LuaViewCore, NSString;

@interface LVAudioPlayer : NSObject <AVAudioPlayerDelegate, LVProtocal, LVClassProtocal>
{
    AVAudioPlayer *audioPlayer;
    _Bool _playing;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    NSString *_fileName;
    double _volume;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (id)lv_nativeObject;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stop;
- (void)play;
- (void)setPlayFileName:(id)arg1 bundle:(id)arg2;
- (void)setPlayFileName0:(id)arg1 bundle:(id)arg2;
- (id)init:(struct lua_State *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

