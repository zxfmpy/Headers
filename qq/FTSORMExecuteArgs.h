//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FTSORMExecuteArgs : NSObject
{
    Class _entityClass;
    unsigned long long _executeType;
}

@property(nonatomic) unsigned long long executeType; // @synthesize executeType=_executeType;
@property(retain, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
