//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TDEncryptionManager;

@interface TDDataBaseManager : NSObject
{
    float _maxSize;
    NSMutableArray *_messageArr;
    NSArray *_sendMessages;
    TDEncryptionManager *_encryptoManager;
    long long _encryptType;
    NSString *_fileName;
}

+ (id)unArchiveDictionarywithFileName:(id)arg1;
+ (void)archiveDictionary:(id)arg1 withFileName:(id)arg2;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) long long encryptType; // @synthesize encryptType=_encryptType;
@property(retain, nonatomic) TDEncryptionManager *encryptoManager; // @synthesize encryptoManager=_encryptoManager;
@property(retain, nonatomic) NSArray *sendMessages; // @synthesize sendMessages=_sendMessages;
@property(retain, nonatomic) NSMutableArray *messageArr; // @synthesize messageArr=_messageArr;
@property(nonatomic) float maxSize; // @synthesize maxSize=_maxSize;
- (void).cxx_destruct;
- (id)pathFormFileName:(id)arg1;
- (void)openDBWithFileName:(id)arg1;
- (void)archiveToFile;
- (id)getSendMessages;
- (void)clearSendMessage;
- (void)deleteSendMessage;
- (void)replaceObjectInMessageArrAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectInMessageArrAtIndex:(unsigned long long)arg1;
- (void)storeMessage:(id)arg1;
- (id)init;

@end
