//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSWebViewController.h"

@class NSDictionary;

@interface KSInformWebViewController : KSWebViewController
{
    long long _informType;
    NSDictionary *_info;
}

+ (void)informWithType:(long long)arg1 info:(id)arg2 fromVC:(id)arg3;
+ (void)informWithType:(long long)arg1 info:(id)arg2 feed:(id)arg3 fromVC:(id)arg4;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) long long informType; // @synthesize informType=_informType;
- (void).cxx_destruct;
- (id)informTypeKey:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithInformType:(long long)arg1 info:(id)arg2;

@end
