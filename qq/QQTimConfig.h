//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQTimConfig : NSObject
{
    _Bool _autoImportToSharedDoc;
    _Bool _showOpenWithSharedDocInTimEntry;
    _Bool _showOpenFileInTimEntry;
    _Bool _insertGrayTipAfterOpenWithSharedDocInTim;
    long long _typeOfFileFolderInTim;
    unsigned long long _maxFileSizeToImportSharedDoc;
    long long _saveTipCount;
    NSString *_saveTipLine0;
    NSString *_saveTipLine1;
    NSString *_saveAndCloseTipLine0;
    NSString *_saveAndCloseTipLine1;
}

@property(copy, nonatomic) NSString *saveAndCloseTipLine1; // @synthesize saveAndCloseTipLine1=_saveAndCloseTipLine1;
@property(copy, nonatomic) NSString *saveAndCloseTipLine0; // @synthesize saveAndCloseTipLine0=_saveAndCloseTipLine0;
@property(copy, nonatomic) NSString *saveTipLine1; // @synthesize saveTipLine1=_saveTipLine1;
@property(copy, nonatomic) NSString *saveTipLine0; // @synthesize saveTipLine0=_saveTipLine0;
@property(nonatomic) long long saveTipCount; // @synthesize saveTipCount=_saveTipCount;
@property(nonatomic) unsigned long long maxFileSizeToImportSharedDoc; // @synthesize maxFileSizeToImportSharedDoc=_maxFileSizeToImportSharedDoc;
@property(nonatomic) long long typeOfFileFolderInTim; // @synthesize typeOfFileFolderInTim=_typeOfFileFolderInTim;
@property(nonatomic) _Bool insertGrayTipAfterOpenWithSharedDocInTim; // @synthesize insertGrayTipAfterOpenWithSharedDocInTim=_insertGrayTipAfterOpenWithSharedDocInTim;
@property(nonatomic) _Bool showOpenFileInTimEntry; // @synthesize showOpenFileInTimEntry=_showOpenFileInTimEntry;
@property(nonatomic) _Bool showOpenWithSharedDocInTimEntry; // @synthesize showOpenWithSharedDocInTimEntry=_showOpenWithSharedDocInTimEntry;
@property(nonatomic) _Bool autoImportToSharedDoc; // @synthesize autoImportToSharedDoc=_autoImportToSharedDoc;
- (void)dealloc;

@end

