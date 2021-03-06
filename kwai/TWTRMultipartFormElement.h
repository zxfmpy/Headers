//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TWTRMultipartFormElement : NSObject
{
    NSString *_name;
    NSString *_contentType;
    NSString *_fileName;
    NSData *_content;
}

@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)documentData;
- (id)initWithName:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 content:(id)arg4;

@end

