//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWangxinInputViewPluginBase.h"

@protocol YWInputViewPluginProtocol;

@interface TBWangxinInputViewPluginShortVideo : TBWangxinInputViewPluginBase
{
    id <YWInputViewPluginProtocol> _ywInputViewPlugin;
}

@property(retain, nonatomic) id <YWInputViewPluginProtocol> ywInputViewPlugin; // @synthesize ywInputViewPlugin=_ywInputViewPlugin;
- (void).cxx_destruct;
- (void)pluginDidClicked;
- (unsigned long long)pluginType;
- (id)initWithConversationViewController:(id)arg1;

@end

