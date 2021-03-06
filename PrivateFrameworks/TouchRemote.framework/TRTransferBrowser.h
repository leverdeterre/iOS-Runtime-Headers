/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class <TRTransferBrowserDelegate>, NSObject<OS_dispatch_queue>, NSString, WPTransfer;

@interface TRTransferBrowser : NSObject <WPTransferDelegate> {
    struct { struct _CCCryptor {} *x1; unsigned char x2[16]; unsigned char x3[16]; unsigned long long x4; } *_aesContext;
    <TRTransferBrowserDelegate> *_delegate;
    struct AirPlayPairingSessionPrivate { } *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    long long _scannerState;
    long long _state;
    WPTransfer *_transferSession;
    bool_started;
}

@property(copy,readonly) NSString * debugDescription;
@property <TRTransferBrowserDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) long long state;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginScanningIfPowered;
- (void)_didFinishPairing;
- (id)_didReceiveEncryptedData:(id)arg1;
- (int)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3;
- (int)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (long long)state;
- (void)stop;
- (void)transferComplete;
- (void)transferDidFailToStartAdvertising:(id)arg1;
- (void)transferDidFailToStartScanning:(id)arg1;
- (void)transferDidFailWithError:(id)arg1;
- (id)transferDidReceiveData:(id)arg1;
- (void)transferDidUpdateAdvertiserState:(id)arg1;
- (void)transferDidUpdateScannerState:(id)arg1;

@end
