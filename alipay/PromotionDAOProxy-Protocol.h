//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, CDPSpaceInfo, NSArray, NSString;

@protocol PromotionDAOProxy <APDAOProtocol>
- (NSArray *)get_all_spaceCodes;
- (APDAOResult *)delete_spaceInfo:(NSString *)arg1;
- (APDAOResult *)update_spaceObjectInfo:(CDPSpaceInfo *)arg1;
- (CDPSpaceInfo *)get_spaceInfo:(NSString *)arg1;
- (APDAOResult *)save_spaceInfoList:(NSArray *)arg1;
- (APDAOResult *)save_spaceInfo:(CDPSpaceInfo *)arg1;
@end

