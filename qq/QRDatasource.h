//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue;

@interface QRDatasource : NSObject
{
    FMDatabaseQueue *_databaseQueue;
}

+ (id)defaultSource;
- (void).cxx_destruct;
- (id)query:(id)arg1 withArguments:(id)arg2;
- (_Bool)isHasTable:(id)arg1;
- (void)loadDatabase:(id)arg1;
- (void)closeDatabase;
- (id)initWithDatabase:(id)arg1;

@end
