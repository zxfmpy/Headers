//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBirdNestAppViewController, NSMutableArray;

@interface APBNJSRpc : NSObject
{
    NSMutableArray *_rpcList;
    APBirdNestAppViewController *_controller;
}

@property(nonatomic) __weak APBirdNestAppViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSMutableArray *rpcList; // @synthesize rpcList=_rpcList;
- (void).cxx_destruct;
- (void)emptyRPCStack;
- (void)createRPCRequest:(id)arg1;
- (id)initWithController:(id)arg1;

@end

