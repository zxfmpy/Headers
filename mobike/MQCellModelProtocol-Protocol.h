//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, UIImage, UITableViewCell;

@protocol MQCellModelProtocol <NSObject>
- (NSString *)getCellMessageId;
- (_Bool)isServiceRelatedCell;
- (NSDate *)getCellDate;
- (UITableViewCell *)getCellWithReuseIdentifier:(NSString *)arg1;
- (double)getCellHeight;

@optional
- (void)updateOutgoingAvatarImage:(UIImage *)arg1;
- (void)updateCellMessageDate:(NSDate *)arg1;
- (void)updateCellMessageId:(NSString *)arg1;
- (void)updateCellSendStatus:(BOOL)arg1;
@end

