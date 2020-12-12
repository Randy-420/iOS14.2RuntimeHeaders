/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNetworkController : NSObject <CXCallObserverDelegate, RadiosPreferencesDelegate> {
    unsigned long long  _activeCalls;
    bool  _alternateAdviceState;
    NSMutableSet * _backgroundWifiClients;
    CXCallObserver * _callObserver;
    bool  _cellularDataAvailable;
    CoreTelephonyClient * _ctc;
    int  _dataIndicator;
    NSObject<OS_dispatch_queue> * _dataStatusQueue;
    bool  _dns;
    unsigned int  _flags;
    bool  _hasCellDataCapability;
    bool  _hasWiFiCapability;
    bool  _isRoamingAllowed;
    bool  _isWiFiEnabled;
    NSLock * _lock;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    RadiosPreferences * _radiosPreferences;
    struct __SCNetworkReachability { } * _reachability;
    struct __CFRunLoop { } * _rl;
    <EFCancelable> * _stateCancelable;
    struct __SCDynamicStore { } * _store;
    struct __CFRunLoopSource { } * _store_source;
    int  _symptomsToken;
    struct __SCPreferences { } * _wiFiPreferences;
    void * _wifiManager;
}

@property (nonatomic, readonly) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly) int dataIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasAlternateAdvice;
@property (readonly) unsigned long long hash;
@property (readonly) bool inAirplaneMode;
@property (readonly) bool is3GConnection;
@property (readonly) bool is4GConnection;
@property (readonly) bool isDataAvailable;
@property (readonly) bool isFatPipe;
@property (readonly) bool isNetworkUp;
@property (readonly) bool isOnWWAN;
@property (nonatomic, readonly) EFObservable *networkObservable;
@property (readonly) Class superclass;
@property (readonly) long long transportType;
@property (nonatomic) void*wifiManager;
@property (nonatomic, readonly) EFObservable *wifiObservable;

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_carrierBundleDidChange;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore { }*)arg2;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_initializeDataStatus;
- (void)_inititializeWifiManager;
- (bool)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (void)_registerStateCaptureHandler;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability { }*)arg2;
- (void)_setupSymptons;
- (bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(bool)arg2;
- (void)_updateActiveCalls;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)arg1;
- (id)addNetworkObserverBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)airplaneModeChanged;
- (id)awdNetworkDiagnosticReport;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (id)copyCarrierBundleValue:(id)arg1;
- (int)dataIndicator;
- (int)dataStatus;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)dealloc;
- (bool)hasAlternateAdvice;
- (bool)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (bool)is3GConnection;
- (bool)is4GConnection;
- (bool)isDataAvailable;
- (bool)isFatPipe;
- (bool)isNetworkUp;
- (bool)isOnWWAN;
- (id)networkObservable;
- (void)preferredDataSimChanged:(id)arg1;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (long long)transportType;
- (void*)wifiManager;
- (id)wifiObservable;

@end