//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TTLRoomMessageStore : NSObject
{
    NSMutableArray *_displayMessageArray;
    NSMutableArray *_insertIndexArray;
    NSMutableArray *_deleteIndexArray;
}

@property(retain, nonatomic) NSMutableArray *deleteIndexArray; // @synthesize deleteIndexArray=_deleteIndexArray;
@property(retain, nonatomic) NSMutableArray *insertIndexArray; // @synthesize insertIndexArray=_insertIndexArray;
@property(retain, nonatomic) NSMutableArray *displayMessageArray; // @synthesize displayMessageArray=_displayMessageArray;
- (void).cxx_destruct;
- (void)loadMessageArray:(id)arg1;
- (id)init;

@end

