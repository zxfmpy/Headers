//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface ARBinhaiItemInfo : QQModel
{
    unsigned int _itemId;
    unsigned int _type;
    unsigned int _count;
    NSString *_name;
    NSString *_icon;
    NSString *_url;
    NSString *_billNum;
    NSString *_redPackId;
}

@property(copy, nonatomic) NSString *redPackId; // @synthesize redPackId=_redPackId;
@property(copy, nonatomic) NSString *billNum; // @synthesize billNum=_billNum;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end
