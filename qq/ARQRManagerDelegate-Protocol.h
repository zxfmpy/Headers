//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class ARQRManager, NSString;

@protocol ARQRManagerDelegate <NSObject>

@optional
- (void)onShowElectricTorch:(_Bool)arg1;
- (void)shouldScaleAndCropFactor:(ARQRManager *)arg1;
- (void)ARQRManagerSucess:(ARQRManager *)arg1 QRResult:(NSString *)arg2;
@end
