//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, TBAccsLogMtop, TBAccsLogWebview, TBAccsTLog;

@interface TBAccsLog : TBJSONModel
{
    TBAccsTLog *_navigate;
    TBAccsLogMtop *_mtop;
    NSDictionary *_network;
    TBAccsLogWebview *_webview;
}

@property(retain, nonatomic) TBAccsLogWebview *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSDictionary *network; // @synthesize network=_network;
@property(retain, nonatomic) TBAccsLogMtop *mtop; // @synthesize mtop=_mtop;
@property(retain, nonatomic) TBAccsTLog *navigate; // @synthesize navigate=_navigate;
- (void).cxx_destruct;

@end
