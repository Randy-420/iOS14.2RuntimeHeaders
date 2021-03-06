/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMKappa : NSObject {
    CMKappaInternal * _internal;
}

@property (nonatomic, readonly) CMKappaInternal *_internal;

+ (bool)areStatsAvailable;

- (id)_internal;
- (void)dealloc;
- (int)getState;
- (id)init;
- (void)sendAPCmd:(int)arg1;
- (void)sendAPConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)sendCmd:(int)arg1;
- (void)sendConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)startKappaUpdatesForItem:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)stopKappaUpdates;

@end
