//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "INAlbumPhoto.h"

#import "INAlbumPhoto-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface INAlbumPhotoData : INAlbumPhoto <INAlbumPhoto, NSCoding>
{
    NSData *_data;
    NSDictionary *_imageProperty;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
- (id)getImagePropertyForImageData:(id)arg1;
- (void)requestImageData:(CDUnknownBlockType)arg1;
- (id)location;
@property(readonly, nonatomic) NSDate *createdDate;
- (id)metadata;
@property(readonly, nonatomic) NSString *photoURL;
@property(readonly, nonatomic) double imageHeight;
@property(readonly, nonatomic) double imageWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
