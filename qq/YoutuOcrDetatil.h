//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface YoutuOcrDetatil : NSObject
{
    int _errorcode;
    NSString *_errormsg;
    NSString *_session_id;
    NSArray *_ocrItems;
}

@property(retain, nonatomic) NSArray *ocrItems; // @synthesize ocrItems=_ocrItems;
@property(retain, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain, nonatomic) NSString *errormsg; // @synthesize errormsg=_errormsg;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
- (void).cxx_destruct;
- (void)printLog;

@end
