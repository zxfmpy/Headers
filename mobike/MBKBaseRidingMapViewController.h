//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMapAndAnnotationsViewController.h"

@interface MBKBaseRidingMapViewController : MBKMapAndAnnotationsViewController
{
}

- (void)autoManagePinViewHidden;
- (void)routePolylingDidDrawAfterSelectingAnnotationView:(id)arg1;
- (_Bool)shouldDeselecedAnnotationWhenTapBlankArea;
- (long long)movingMethodForRouting;
- (_Bool)customRoutingWhenSelectedAnnotaionView:(id)arg1;
- (void)mapContext:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)doWhenDidSelectAnnotationView:(id)arg1 fromCalloutView:(_Bool)arg2;
- (void)removeAnnotationsOfTypes:(id)arg1 exceptBikeAnnotation:(struct MMPointAnnotation *)arg2 animated:(_Bool)arg3;
- (void)refreshRedPacketStopAreasOnMap:(id)arg1;
- (id)getOperationalFenceDataSignal;
- (id)hintForWithinAnnotation:(struct MMPointAnnotation *)arg1;
- (void)requestAndShowNearbyItemsAtLocation:(struct CLLocationCoordinate2D)arg1;
- (_Bool)additionalPassTestForWithinAnnotion:(struct MMPointAnnotation *)arg1;
- (_Bool)shouldUpdateWithinPOIAppearanceWhenLocationChanged;
- (_Bool)shouldAutoRequestNearby;
- (void)viewDidLoad;

@end

