//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListItem.h"

@class NSString;

@interface ALPPrivilegeListItem : VZListItem
{
    NSString *_label;
    NSString *_contentText;
    NSString *_headerString;
}

+ (id)itemsFromInfos:(id)arg1;
@property(retain, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)autoKVCBinding:(id)arg1;

@end
