//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber;

@interface MBKAnalyticsCoreDataModel : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) _Bool marked; // @dynamic marked;
@property(copy, nonatomic) NSNumber *priority; // @dynamic priority;
@property(retain, nonatomic) NSData *rawData; // @dynamic rawData;
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;

@end
