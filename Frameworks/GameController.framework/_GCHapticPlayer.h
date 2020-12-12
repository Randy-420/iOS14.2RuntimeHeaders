/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCHapticPlayer : NSObject {
    bool  _activeEventThisSlice;
    NSMutableArray * _activeHapticEvents;
    double  _activeLifetime;
    NSArray * _actuators;
    _GCHapticClientProxy * _client;
    int  _continuousEventsProcessed;
    float  _continuousIntensity;
    float  _continuousSharpness;
    bool  _dirtyMuteState;
    NSMutableArray * _eventsToRemove;
    _GCHapticLogicalDevice * _hapticLogicalDevice;
    NSNumber * _identifier;
    double  _initializationTime;
    NSMutableArray * _intensityParamCurve;
    _GCHapticDynamicParameter * _intensityParameter;
    double  _lastActiveTime;
    int  _muteReasons;
    bool  _muted;
    int  _parameterCurvesProcessed;
    bool  _retainedByClient;
    NSMutableArray * _scheduledCommands;
    NSMutableArray * _sharpnessParamCurve;
    _GCHapticDynamicParameter * _sharpnessParameter;
    int  _totalEventsProcessed;
    double  _totalLifetimeInSeconds;
    int  _transientEventsProcessed;
    bool  _transientsEnqueuedSinceLastQuery;
}

@property (nonatomic, readonly) double activeLifetimeInSeconds;
@property (nonatomic, readonly, copy) NSArray *actuators;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) int continuousEventsProcessed;
@property (nonatomic) int continuousEventsProcessed;
@property (nonatomic, readonly) float continuousIntensity;
@property (nonatomic, readonly) float continuousSharpness;
@property (nonatomic, readonly) NSString *controllerProductCategory;
@property (nonatomic) _GCHapticLogicalDevice *hapticLogicalDevice;
@property (nonatomic, readonly, copy) NSNumber *identifier;
@property (nonatomic) int parameterCurvesProcessed;
@property (nonatomic, readonly) int parameterCurvesProcessed;
@property (getter=isRetainedByClient, nonatomic) bool retainedByClient;
@property (nonatomic, readonly) int totalEventsProcessed;
@property (nonatomic) int totalEventsProcessed;
@property (nonatomic) double totalLifetimeInSeconds;
@property (nonatomic, readonly) double totalLifetimeInSeconds;
@property (nonatomic, readonly) int transientEventsProcessed;
@property (nonatomic) int transientEventsProcessed;

- (void).cxx_destruct;
- (double)activeLifetimeInSeconds;
- (id)actuators;
- (id)bundleIdentifier;
- (void)clearParameters;
- (int)continuousEventsProcessed;
- (int)continuousEventsProcessed;
- (float)continuousIntensity;
- (float)continuousSharpness;
- (id)controllerProductCategory;
- (void)dealloc;
- (id)description;
- (void)handleCommand:(id)arg1;
- (id)hapticLogicalDevice;
- (bool)hasProcessedActiveEventsAfterTime:(double)arg1;
- (bool)hasProcessedActiveEventsThisSlice;
- (bool)hasScheduledCommands;
- (bool)hasScheduledEventsByTime:(double)arg1;
- (id)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 actuators:(id)arg2 client:(id)arg3;
- (bool)isActiveAtTime:(double)arg1;
- (bool)isMuted;
- (bool)isMutedForReason:(unsigned long long)arg1;
- (bool)isRetainedByClient;
- (int)parameterCurvesProcessed;
- (int)parameterCurvesProcessed;
- (void)processSliceForLogicalDevice:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)scheduleCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; unsigned int x2; double x3; unsigned long long x4; unsigned long long x5; union u { struct TokenAndParams { unsigned long long x_1_2_1; struct ItemList<FixedParam, 8> { unsigned int x_2_3_1; struct FixedParam { unsigned int x_2_4_1; float x_2_4_2; } x_2_3_2[8]; } x_1_2_2; } x_6_1_1; struct SequenceChannelParam { unsigned long long x_2_2_1; unsigned long long x_2_2_2; float x_2_2_3; } x_6_1_2; struct SequenceParam { unsigned short x_3_2_1; float x_3_2_2; } x_6_1_3; float x_6_1_4; double x_6_1_5; struct ItemList<ParamPoint, 16> { unsigned int x_6_2_1; struct ParamPoint { float x_2_3_1; float x_2_3_2; } x_6_2_2[16]; } x_6_1_6; } x6; }*)arg1;
- (void)setContinuousEventsProcessed:(int)arg1;
- (void)setHapticLogicalDevice:(id)arg1;
- (void)setMute:(bool)arg1 forReason:(unsigned long long)arg2;
- (void)setParameterCurvesProcessed:(int)arg1;
- (void)setRetainedByClient:(bool)arg1;
- (void)setTotalEventsProcessed:(int)arg1;
- (void)setTotalLifetimeInSeconds:(double)arg1;
- (void)setTransientEventsProcessed:(int)arg1;
- (void)teardown;
- (int)totalEventsProcessed;
- (int)totalEventsProcessed;
- (double)totalLifetimeInSeconds;
- (double)totalLifetimeInSeconds;
- (int)transientEventsProcessed;
- (int)transientEventsProcessed;
- (bool)transientsEnqueuedSinceLastQuery;

@end