//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFTransferable.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface TFAccount : TFTransferable <NSCopying, NSCoding>
{
    NSString *_account;
    NSString *_name;
    NSString *_index;
    NSString *_billId;
    NSString *_warningInfo;
    NSString *_userRealName;
    NSString *_grade;
}

+ (id)mobileAccountWithReceiverInfoResp:(id)arg1;
+ (id)accountWithReceiverInfoResp:(id)arg1;
+ (id)accountWithTransferRecordVO:(id)arg1;
+ (id)accountWithToMobileLaunchOptions:(id)arg1;
+ (id)accountWithLaunchOptions:(id)arg1;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSString *userRealName; // @synthesize userRealName=_userRealName;
@property(retain, nonatomic) NSString *warningInfo; // @synthesize warningInfo=_warningInfo;
@property(retain, nonatomic) NSString *billId; // @synthesize billId=_billId;
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createToAccountRequest;

@end
