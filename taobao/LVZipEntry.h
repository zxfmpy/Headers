//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface LVZipEntry : NSObject
{
    NSData *_inflatedData;
    NSData *_data;
    struct LVZipCDHeader _internalHeader;
}

@property(nonatomic) struct LVZipCDHeader internalHeader; // @synthesize internalHeader=_internalHeader;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)inflateData:(id)arg1;
@property(readonly, nonatomic) NSData *inflatedData; // @synthesize inflatedData=_inflatedData;
@property(readonly, nonatomic) NSDate *lastModDate; // @dynamic lastModDate;
@property(readonly, nonatomic, getter=isSymlink) _Bool symlink; // @dynamic symlink;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory; // @dynamic directory;
@property(readonly, nonatomic) long long permissions; // @dynamic permissions;
@property(readonly, nonatomic) NSString *fileName; // @dynamic fileName;

@end
