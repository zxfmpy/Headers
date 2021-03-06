//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaEditFilter.h"

#import "KSLocalAlbumWorkSpaceFilterConvertable-Protocol.h"

@class NSString, UIImage;

@interface KSMediaEditBeautifyFilter : KSMediaEditFilter <KSLocalAlbumWorkSpaceFilterConvertable>
{
    UIImage *_normalIcon;
    UIImage *_selectedIcon;
}

@property(retain, nonatomic) UIImage *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIImage *normalIcon; // @synthesize normalIcon=_normalIcon;
- (void).cxx_destruct;
- (_Bool)editable;
- (_Bool)resourceReady;
- (id)initWithTitle:(id)arg1 resources:(id)arg2 value:(float)arg3 type:(int)arg4 statisticalName:(id)arg5;
- (id)makeFilter;
- (_Bool)isTheSameTypeOfFilterAs:(id)arg1;
- (id)initWithMetaFilter:(id)arg1;
- (id)metaFilter;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

