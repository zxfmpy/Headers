//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSNumber, NSString;

@interface ACDSQLParser : NSObject
{
    _Bool _parsed;
    _Bool _valid;
    NSDictionary *_QL;
    NSString *_dsName;
    NSString *_type;
    NSMutableArray *_keys;
    NSNumber *_topValue;
    NSMutableArray *_ascs;
    NSMutableArray *_descs;
    NSMutableArray *_filters;
    NSMutableArray *_subQuerys;
}

+ (id)fixString:(id)arg1;
+ (id)dicToFilter:(id)arg1;
+ (id)parserWithQLDic:(id)arg1;
@property(retain, nonatomic) NSMutableArray *subQuerys; // @synthesize subQuerys=_subQuerys;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *descs; // @synthesize descs=_descs;
@property(retain, nonatomic) NSMutableArray *ascs; // @synthesize ascs=_ascs;
@property(retain, nonatomic) NSNumber *topValue; // @synthesize topValue=_topValue;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *dsName; // @synthesize dsName=_dsName;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool parsed; // @synthesize parsed=_parsed;
@property(retain, nonatomic) NSDictionary *QL; // @synthesize QL=_QL;
- (void).cxx_destruct;
- (id)validate;
- (id)parseQLQueryArray:(id)arg1;
- (id)parseQLFilter:(id)arg1 withValue:(id)arg2;
- (id)parseQLTop:(id)arg1 withValue:(id)arg2;
- (id)parseQLOrderby:(id)arg1 withValue:(id)arg2;
- (id)parseQLType:(id)arg1 withValue:(id)arg2;
- (id)parseCondition:(id)arg1;
- (id)parseQLKey:(id)arg1;
- (id)toTQueryCnt;
- (id)toTQueryObj;
- (id)toTQueryArr;
- (id)toTQL;
- (id)parser;
- (id)init;

@end

