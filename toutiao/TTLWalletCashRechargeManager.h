//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TTLWalletCashRechargeService;

@interface TTLWalletCashRechargeManager : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    TTLWalletCashRechargeService *_rechargeService;
    NSMutableArray *_dataSource;
    long long _count;
    long long _page;
    long long _code;
}

@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TTLWalletCashRechargeService *rechargeService; // @synthesize rechargeService=_rechargeService;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)featchRechargeRecord:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
