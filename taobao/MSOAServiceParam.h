//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MSOAServiceParam : NSObject
{
    NSString *_name;
    NSString *_type;
    const char *_typeEncoding;
    unsigned long long _actualType;
    unsigned long long _magicOption;
}

@property(nonatomic) unsigned long long magicOption; // @synthesize magicOption=_magicOption;
@property(nonatomic) unsigned long long actualType; // @synthesize actualType=_actualType;
@property(nonatomic) const char *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
