//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSMutableArray;

@interface TBOrderTailInfo : TBOrderObject
{
    NSMutableArray *_labels;
    NSMutableArray *_mlabels;
    NSMutableArray *_operateList;
}

@property(retain, nonatomic) NSMutableArray *operateList; // @synthesize operateList=_operateList;
@property(retain, nonatomic) NSMutableArray *mlabels; // @synthesize mlabels=_mlabels;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
- (void).cxx_destruct;
- (id)warnTipsDesc;
- (id)warnTipsIcon;
- (id)warnTips;
- (id)op;
- (id)multiDetailInfo;
- (id)detailInfo;
- (id)mainOrderId;
- (id)title;
- (void)initOperateList;
- (void)initMutiDetailInfo;
- (void)initDetailInfo;
- (id)initWithData:(id)arg1;
- (id)opList;

@end
