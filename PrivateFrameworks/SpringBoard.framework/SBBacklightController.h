/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBacklightController : NSObject {
    SBHIDUILockAssertion * _currentHIDUILockAssertion;
    SBIdleTimerDefaults * _idleTimerDefaults;
    NSHashTable * _informers;
    bool  _isPendingScreenUnblankAfterCACommit;
    long long  _lastBacklightChangeSource;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) double backlightFactor;
@property (nonatomic, retain) SBHIDUILockAssertion *currentHIDUILockAssertion;
@property (nonatomic, readonly) bool isPendingScreenUnblankAfterCACommit;
@property (nonatomic, readonly) long long lastBacklightChangeSource;
@property (nonatomic, readonly) bool screenIsDim;
@property (nonatomic, readonly) bool screenIsOn;

+ (id)_sharedInstanceCreateIfNeeded:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(bool)arg4 completion:(id /* block */)arg5;
- (void)_deferredScreenUnblankDone;
- (void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)_suspendProxAndMultitouch:(bool)arg1 source:(long long)arg2;
- (void)_undimFromSource:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)allowIdleSleep;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(id /* block */)arg4;
- (double)backlightFactor;
- (id)currentHIDUILockAssertion;
- (double)defaultLockScreenDimInterval;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (id)init;
- (bool)isPendingScreenUnblankAfterCACommit;
- (long long)lastBacklightChangeSource;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)registerInformer:(id)arg1;
- (void)reloadDefaults;
- (void)removeObserver:(id)arg1;
- (bool)screenIsDim;
- (bool)screenIsOn;
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;
- (void)setBacklightFactorPending:(float)arg1;
- (void)setCurrentHIDUILockAssertion:(id)arg1;
- (bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;
- (void)unregisterInformer:(id)arg1;

@end
