//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MCDecorateComponentServiceManager : NSObject
{
    NSMutableArray *_services;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (id)getComponet:(id)arg1;
- (void)loadDatas;

@end

