//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PSDPluginProtocol-Protocol.h"

@class APBLECentralManager, H5Service, H5WebViewController, NSMutableDictionary, NSOperationQueue, NSString;

@interface APBLENebulaPluginV2 : NSObject <PSDPluginProtocol>
{
    NSString *_name;
    NSOperationQueue *_bleQueue;
    H5Service *_h5Service;
    NSMutableDictionary *_jsApiList;
    APBLECentralManager *_centralManager;
    H5WebViewController *_currentController;
}

@property(nonatomic) __weak H5WebViewController *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) APBLECentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSMutableDictionary *jsApiList; // @synthesize jsApiList=_jsApiList;
@property(retain, nonatomic) H5Service *h5Service; // @synthesize h5Service=_h5Service;
@property(retain, nonatomic) NSOperationQueue *bleQueue; // @synthesize bleQueue=_bleQueue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)responseWithErrorCode:(id)arg1 errorMessage:(id)arg2 extraDict:(id)arg3;
- (void)onCharacteristicValueUpdate:(id)arg1;
- (void)onConnectionStateChanged:(id)arg1;
- (void)onDiscoverPeriperal:(id)arg1;
- (void)onCentralDidUpdateState;
- (id)setup_getBLEDeviceCharacteristicsJsApi:(id)arg1;
- (id)setup_getBLEDeviceServicesJsApi:(id)arg1;
- (id)setup_notifyBLECharacteristicValueChangeJsApi:(id)arg1;
- (id)setup_readBLECharacteristicValueJsApi:(id)arg1;
- (id)setup_writeBLECharacteristicValueJsApi:(id)arg1;
- (id)setup_disconnectBLEDeviceJsApi:(id)arg1;
- (id)setup_connectBLEDeviceJsApi:(id)arg1;
- (id)setup_getConnectedBluetoothDevicesJsApi:(id)arg1;
- (id)setup_getBluetoothDevicesJsApi:(id)arg1;
- (id)periperalInfoWithPeriperals:(id)arg1;
- (id)setup_stopBluetoothDevicesDiscoveryJsApi:(id)arg1;
- (id)setup_startBluetoothDevicesDiscoveryJsApi:(id)arg1;
- (id)setup_getBluetoothAdapterStateJsApi:(id)arg1;
- (id)setup_closeBluetoothAdapterJsApi:(id)arg1;
- (id)setup_openBluetoothAdapterJsApi:(id)arg1;
- (void)jsApiPreproccessing:(id)arg1 errorCode:(id *)arg2 errorMessage:(id *)arg3;
- (id)methodNamesOfClass:(Class)arg1;
- (id)bleEnabledApiList:(id)arg1;
- (void)registerBLEJsApi;
- (void)handleEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
