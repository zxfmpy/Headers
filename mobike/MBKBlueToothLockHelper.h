//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "MBKPeripheralDelegate-Protocol.h"

@class CBCentralManager, CBPeripheral, CBService, MBKPeripheral, NSMutableArray, NSString;
@protocol MBKCentralDelegate;

@interface MBKBlueToothLockHelper : NSObject <CBCentralManagerDelegate, MBKPeripheralDelegate>
{
    _Bool hasTimeOut;
    _Bool _isConnection;
    int _seg;
    int _pos;
    id <MBKCentralDelegate> _delegate;
    CBCentralManager *_cbCenterMgr;
    CBPeripheral *_activePeripheral;
    MBKPeripheral *_currentPeripheral;
    NSString *_unLockKey;
    NSMutableArray *_perpheralBackhaulArray;
    CBService *_foundService;
    NSMutableArray *_perpheralsArray;
}

+ (id)sharedInstance;
@property int pos; // @synthesize pos=_pos;
@property int seg; // @synthesize seg=_seg;
@property(retain, nonatomic) NSMutableArray *perpheralsArray; // @synthesize perpheralsArray=_perpheralsArray;
@property(nonatomic) _Bool isConnection; // @synthesize isConnection=_isConnection;
@property(retain, nonatomic) CBService *foundService; // @synthesize foundService=_foundService;
@property(retain, nonatomic) NSMutableArray *perpheralBackhaulArray; // @synthesize perpheralBackhaulArray=_perpheralBackhaulArray;
@property(retain, nonatomic) NSString *unLockKey; // @synthesize unLockKey=_unLockKey;
@property(retain, nonatomic) MBKPeripheral *currentPeripheral; // @synthesize currentPeripheral=_currentPeripheral;
@property(retain, nonatomic) CBPeripheral *activePeripheral; // @synthesize activePeripheral=_activePeripheral;
@property(retain, nonatomic) CBCentralManager *cbCenterMgr; // @synthesize cbCenterMgr=_cbCenterMgr;
@property(nonatomic) __weak id <MBKCentralDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pairingPerpheral:(id)arg1 advertisementData:(id)arg2;
- (id)checkUploadCondition;
- (void)scanPeripheralTimeOut:(id)arg1;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didShakeHandsPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)connectPeripheral:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)peripheralFound:(id)arg1;
- (void)fomatBlueTo:(id)arg1;
- (void)transferToBluetooth;
- (void)peripheral:(id)arg1 didSendSuccCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didFoundService:(id)arg2;
- (void)didReceiveData:(id)arg1;
- (void)setDataFromServer:(id)arg1 hasTimeOut:(_Bool)arg2;
- (void)setDataFromServer:(id)arg1;
- (void)cancelAllConnect;
- (void)cancelConnect;
- (_Bool)isConnect;
- (_Bool)isScanning;
- (void)startScan;
- (long long)status;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

