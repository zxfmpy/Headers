//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GtkDBSqlState : NSObject
{
    long long _type;
    NSString *_queryStr;
}

@property(copy, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)typeToString:(long long)arg1;
- (void)ifEqualTOSQLTEXT:(id)arg1 Key:(id)arg2 opt:(id)arg3 value:(id)arg4 condition:(long long)arg5;
- (id)sqlOptionStr;
- (id)object:(Class)arg1 type:(long long)arg2 key:(id)arg3 opt:(id)arg4 value:(id)arg5;

@end
