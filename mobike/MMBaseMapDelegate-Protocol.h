//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAnnotationView, MMBaseMap, MMOverlayRender, MMUserLocation, NSArray, NSError;
@protocol MMAnnotation, MMOverlay;

@protocol MMBaseMapDelegate <NSObject>
- (void)baseMap:(MMBaseMap *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didUpdateUserLocation:(MMUserLocation *)arg2 updatingLocation:(_Bool)arg3;
- (void)baseMapDidStopLocatingUser:(MMBaseMap *)arg1;
- (void)baseMapWillStartLocatingUser:(MMBaseMap *)arg1;
- (MMOverlayRender *)baseMap:(MMBaseMap *)arg1 renderForOverlay:(id <MMOverlay>)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didTapCalloutOfAnnotationView:(MMAnnotationView *)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didDeselectAnnotationView:(MMAnnotationView *)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didSelectAnnotationView:(MMAnnotationView *)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (MMAnnotationView *)baseMap:(MMBaseMap *)arg1 viewForAnnotation:(id <MMAnnotation>)arg2;
- (void)baseMap:(MMBaseMap *)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)baseMap:(MMBaseMap *)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)baseMap:(MMBaseMap *)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
@end

