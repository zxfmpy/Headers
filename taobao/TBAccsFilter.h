//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, TBAccsLog;

@interface TBAccsFilter : TBJSONModel
{
    NSArray *_module;
    NSArray *_network;
    TBAccsLog *_log;
}

@property(retain, nonatomic) TBAccsLog *log; // @synthesize log=_log;
@property(retain, nonatomic) NSArray *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *module; // @synthesize module=_module;
- (void).cxx_destruct;

@end
