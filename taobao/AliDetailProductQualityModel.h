//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray;
@protocol AliDetailProductQualityContentModel;

@interface AliDetailProductQualityModel : AliDetailComponentModel
{
    NSArray *_imageTags;
    NSArray<AliDetailProductQualityContentModel> *_content;
}

@property(retain, nonatomic) NSArray<AliDetailProductQualityContentModel> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *imageTags; // @synthesize imageTags=_imageTags;
- (void).cxx_destruct;

@end

