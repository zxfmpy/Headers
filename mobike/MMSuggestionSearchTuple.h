//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMSuggestionRequest;

@interface MMSuggestionSearchTuple : NSObject
{
    id _key;
    MMSuggestionRequest *_request;
    CDUnknownBlockType _callback;
}

+ (id)tupleWithKey:(id)arg1 request:(id)arg2 completeion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) MMSuggestionRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
