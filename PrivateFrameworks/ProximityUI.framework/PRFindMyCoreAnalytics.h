/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
 */

@interface PRFindMyCoreAnalytics : NSObject {
    NSString * _authHeaderValue;
    AKAppleIDSession * _authSession;
    NSDictionary * _customData;
    long long  _eventNumber;
    PRTargetEstimate * _latestTarget;
    NSObject<OS_os_log> * _logger;
    NSNumber * _numberOfPoses;
    NSNumber * _numberOfRanges;
    PRPose * _previousPose;
    NSNumber * _rangeEstimate;
    CARunData * _runData;
    NSUUID * _runId;
    CASessionData * _sessionData;
    NSUUID * _sessionId;
    bool  _shouldLogEnteredArmsReachEvent;
    bool  _shouldLogMotionEvent;
    bool  _shouldLogTargetFoundEvent;
    double  _startTime;
    NSNumber * _traveledDistance;
    NSURLSession * _urlSession;
}

@property (nonatomic, retain) NSString *authHeaderValue;
@property (nonatomic, retain) AKAppleIDSession *authSession;
@property (retain) NSDictionary *customData;
@property (nonatomic) long long eventNumber;
@property (nonatomic, retain) PRTargetEstimate *latestTarget;
@property (nonatomic, retain) NSNumber *numberOfPoses;
@property (nonatomic, retain) NSNumber *numberOfRanges;
@property (nonatomic, retain) PRPose *previousPose;
@property (nonatomic, retain) NSNumber *rangeEstimate;
@property (nonatomic, retain) CARunData *runData;
@property (nonatomic, retain) NSUUID *runId;
@property (nonatomic, retain) CASessionData *sessionData;
@property (nonatomic, retain) NSUUID *sessionId;
@property (nonatomic) bool shouldLogEnteredArmsReachEvent;
@property (nonatomic) bool shouldLogMotionEvent;
@property (nonatomic) bool shouldLogTargetFoundEvent;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSNumber *traveledDistance;
@property (nonatomic, retain) NSURLSession *urlSession;

+ (bool)isInternalBuild;

- (void).cxx_destruct;
- (void)addLatestTarget:(id)arg1;
- (id)authHeaderValue;
- (id)authSession;
- (void)configureComplete;
- (void)configureSession;
- (id)customData;
- (void)deinit;
- (id)eventDictionaryWithEvent:(id)arg1;
- (long long)eventNumber;
- (id)init;
- (void)invalidPoseDetected;
- (bool)isRunning;
- (id)latestTarget;
- (id)numberOfPoses;
- (id)numberOfRanges;
- (id)previousPose;
- (id)rangeEstimate;
- (void)rangingFailedWithError:(id)arg1;
- (void)resetState;
- (void)revokeRangeEstimate;
- (id)runData;
- (id)runId;
- (void)sendAnalyticsEvent:(id)arg1;
- (void)sendLiveOnAnalytics:(id)arg1;
- (id)sessionData;
- (id)sessionId;
- (void)setAuthHeaderValue:(id)arg1;
- (void)setAuthSession:(id)arg1;
- (void)setCustomData:(id)arg1;
- (void)setEventNumber:(long long)arg1;
- (void)setLatestTarget:(id)arg1;
- (void)setNumberOfPoses:(id)arg1;
- (void)setNumberOfRanges:(id)arg1;
- (void)setPreviousPose:(id)arg1;
- (void)setRangeEstimate:(id)arg1;
- (void)setRunData:(id)arg1;
- (void)setRunId:(id)arg1;
- (void)setSessionData:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setShouldLogEnteredArmsReachEvent:(bool)arg1;
- (void)setShouldLogMotionEvent:(bool)arg1;
- (void)setShouldLogTargetFoundEvent:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTraveledDistance:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)shouldLogEnteredArmsReachEvent;
- (bool)shouldLogMotionEvent;
- (bool)shouldLogTargetFoundEvent;
- (void)start;
- (double)startTime;
- (void)stop;
- (void)targetComputed:(id)arg1;
- (void)targetMovingStateChanged:(bool)arg1;
- (void)targetRevoked;
- (id)traveledDistance;
- (void)updateTravelDistanceWithPose:(id)arg1;
- (void)updateWithRangeEstimate:(id)arg1;
- (id)urlSession;

@end