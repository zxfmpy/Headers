//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString;
@protocol AliDetailServiceUnitModel, AliDetailServiceValueModel;

@interface AliDetailServiceInfoModel : TBJSONModel
{
    _Bool _multiSelect;
    _Bool _mustSelect;
    NSString *_serviceType;
    NSArray<AliDetailServiceValueModel> *_allServices;
    NSDictionary<AliDetailServiceUnitModel> *_sku2serviceMap;
}

@property(retain, nonatomic) NSDictionary<AliDetailServiceUnitModel> *sku2serviceMap; // @synthesize sku2serviceMap=_sku2serviceMap;
@property(retain, nonatomic) NSArray<AliDetailServiceValueModel> *allServices; // @synthesize allServices=_allServices;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool mustSelect; // @synthesize mustSelect=_mustSelect;
@property(nonatomic) _Bool multiSelect; // @synthesize multiSelect=_multiSelect;
- (void).cxx_destruct;

@end
