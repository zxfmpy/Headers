//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, QQVipFunctionDownloadStatus;

@interface QQVipFunctionComicDBModel : NSObject
{
    NSString *_comicID;
    QQVipFunctionDownloadStatus *_comicStatus;
    NSMutableArray *_sectionDBModelsArray;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *comicID; // @dynamic comicID;
@property(retain, nonatomic) QQVipFunctionDownloadStatus *comicStatus; // @dynamic comicStatus;
@property(retain, nonatomic) NSMutableArray *sectionDBModelsArray; // @dynamic sectionDBModelsArray;

@end

