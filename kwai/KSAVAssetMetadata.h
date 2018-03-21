//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, UIImage;

@interface KSAVAssetMetadata : NSObject
{
    NSString *_name;
    NSString *_artist;
    NSString *_albumArtist;
    NSString *_album;
    NSString *_grouping;
    NSString *_composer;
    NSString *_comments;
    UIImage *_artwork;
    NSString *_year;
    NSNumber *_bpm;
    NSNumber *_trackNumber;
    NSNumber *_trackCount;
    NSNumber *_discNumber;
    NSNumber *_discCount;
    NSDictionary *_keyMapping;
}

@property(retain, nonatomic) NSDictionary *keyMapping; // @synthesize keyMapping=_keyMapping;
@property(retain, nonatomic) NSNumber *discCount; // @synthesize discCount=_discCount;
@property(retain, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(retain, nonatomic) NSNumber *bpm; // @synthesize bpm=_bpm;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(copy, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property(copy, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_setupCommentsWithMetadataItem:(id)arg1;
- (void)_setupDiscInfoWithMetadataItem:(id)arg1;
- (void)_setupTrackInfoWithMetadataItem:(id)arg1;
- (void)_setupArtworkWithMetadataItem:(id)arg1;
- (void)addMetadataItem:(id)arg1 withKey:(id)arg2;

@end
