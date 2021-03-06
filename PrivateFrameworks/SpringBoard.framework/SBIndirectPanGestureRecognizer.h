/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding, SBIndirectTouchLifecycleObserving, _UIHoverEventRespondable> {
    unsigned long long  _activatedEdge;
    double  _activationRecognitionDistance;
    UIEvent * _currentHoverEvent;
    unsigned long long  _currentInputType;
    UITouch * _currentTouch;
    unsigned long long  _edges;
    unsigned long long  _endReason;
    bool  _gesturePassedThroughScreenCenterRegion;
    NSValue * _gestureStartLocation;
    BSMonotonicReferenceTime * _lastKnownMouseEventTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastKnownPoint;
    BSMonotonicReferenceTime * _lastMouseActivationTimestamp;
    BSMonotonicReferenceTime * _mouseEnteredNearEdgeRegionTimestamp;
    double  _mouseHysteresis;
    NSTimer * _mouseIdleTimer;
    <SBIndirectPanGestureRecognizerOrientationProviding> * _orientationProvider;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    bool  _pausedUntilTouchedUpOrMovedAwayFromEdge;
    bool  _shouldActivateWithThreshold;
    bool  _shouldCancelAfterMovingAwayFromEdge;
    bool  _shouldInvertXAxis;
    bool  _shouldInvertYAxis;
    bool  _shouldRequireGestureToStartAtEdge;
    SBSystemGestureManager * _systemGestureManager;
    SBTouchHistory * _touchHistory;
    double  _trackpadHysteresis;
    id /* block */  _translationAdjustmentBlock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationWithinHysteresisRange;
}

@property (nonatomic) unsigned long long activatedEdge;
@property (nonatomic) double activationRecognitionDistance;
@property (nonatomic, retain) UIEvent *currentHoverEvent;
@property (nonatomic, readonly) unsigned long long currentInputType;
@property (nonatomic, retain) UITouch *currentTouch;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSystemGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edges;
@property (nonatomic, readonly) unsigned long long endReason;
@property (nonatomic) bool gesturePassedThroughScreenCenterRegion;
@property (nonatomic, retain) NSValue *gestureStartLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSMonotonicReferenceTime *lastKnownMouseEventTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastKnownPoint;
@property (nonatomic, retain) BSMonotonicReferenceTime *lastMouseActivationTimestamp;
@property (nonatomic, retain) BSMonotonicReferenceTime *mouseEnteredNearEdgeRegionTimestamp;
@property (nonatomic) double mouseHysteresis;
@property (nonatomic, retain) NSTimer *mouseIdleTimer;
@property (nonatomic) <SBIndirectPanGestureRecognizerOrientationProviding> *orientationProvider;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) bool pausedUntilTouchedUpOrMovedAwayFromEdge;
@property (nonatomic) bool shouldActivateWithThreshold;
@property (nonatomic) bool shouldCancelAfterMovingAwayFromEdge;
@property (nonatomic) bool shouldInvertXAxis;
@property (nonatomic) bool shouldInvertYAxis;
@property (nonatomic) bool shouldRequireGestureToStartAtEdge;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, retain) SBTouchHistory *touchHistory;
@property (nonatomic) double trackpadHysteresis;
@property (nonatomic, copy) id /* block */ translationAdjustmentBlock;
@property (nonatomic) struct CGPoint { double x1; double x2; } translationWithinHysteresisRange;

- (void).cxx_destruct;
- (unsigned long long)_axisForEdge:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_centerOfCircleForRoundedCorner:(unsigned long long)arg1 radius:(double)arg2 inView:(id)arg3;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2 toView:(id)arg3;
- (unsigned long long)_edgeForPointerModelLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2 inset:(double)arg3;
- (long long)_effectiveOrientation;
- (bool)_hasTranslationReachedThreshold:(double)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 forEdge:(unsigned long long)arg3;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (bool)_isPointOnRoundedCorner:(struct CGPoint { double x1; double x2; })arg1 corner:(unsigned long long)arg2 radius:(double)arg3 inView:(id)arg4;
- (bool)_isPointerOnTopScreenCorner:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)_mouseIdleTimerElapsed;
- (void)_mouseIdleTimerFired:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointerModelLocation;
- (void)_resetTranslationState;
- (bool)_shouldReceiveEvent:(id)arg1;
- (void)_updateTranslationWithPointerEventAttributes:(id)arg1 activeEdge:(unsigned long long)arg2;
- (unsigned long long)activatedEdge;
- (double)activationRecognitionDistance;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)containerView;
- (id)currentHoverEvent;
- (unsigned long long)currentInputType;
- (id)currentTouch;
- (void)dealloc;
- (unsigned long long)edges;
- (unsigned long long)endReason;
- (bool)gesturePassedThroughScreenCenterRegion;
- (id)gestureStartLocation;
- (double)hysteresisForInputType:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3 systemGestureManager:(id)arg4;
- (id)lastKnownMouseEventTimestamp;
- (struct CGPoint { double x1; double x2; })lastKnownPoint;
- (id)lastMouseActivationTimestamp;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)mouseEnteredNearEdgeRegionTimestamp;
- (double)mouseHysteresis;
- (id)mouseIdleTimer;
- (id)orientationProvider;
- (struct CGPoint { double x1; double x2; })origin;
- (bool)pausedUntilTouchedUpOrMovedAwayFromEdge;
- (double)peakSpeed;
- (void)reset;
- (void)setActivatedEdge:(unsigned long long)arg1;
- (void)setActivationRecognitionDistance:(double)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setCurrentHoverEvent:(id)arg1;
- (void)setCurrentTouch:(id)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setGesturePassedThroughScreenCenterRegion:(bool)arg1;
- (void)setGestureStartLocation:(id)arg1;
- (void)setHysteresis:(double)arg1 forInputType:(unsigned long long)arg2;
- (void)setLastKnownMouseEventTimestamp:(id)arg1;
- (void)setLastKnownPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastMouseActivationTimestamp:(id)arg1;
- (void)setMouseEnteredNearEdgeRegionTimestamp:(id)arg1;
- (void)setMouseHysteresis:(double)arg1;
- (void)setMouseIdleTimer:(id)arg1;
- (void)setOrientationProvider:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPausedUntilTouchedUpOrMovedAwayFromEdge:(bool)arg1;
- (void)setShouldActivateWithThreshold:(bool)arg1;
- (void)setShouldCancelAfterMovingAwayFromEdge:(bool)arg1;
- (void)setShouldInvertXAxis:(bool)arg1;
- (void)setShouldInvertYAxis:(bool)arg1;
- (void)setShouldRequireGestureToStartAtEdge:(bool)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (void)setTouchHistory:(id)arg1;
- (void)setTrackpadHysteresis:(double)arg1;
- (void)setTranslationAdjustmentBlock:(id /* block */)arg1;
- (void)setTranslationWithinHysteresisRange:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldActivateWithThreshold;
- (bool)shouldCancelAfterMovingAwayFromEdge;
- (bool)shouldInvertXAxis;
- (bool)shouldInvertYAxis;
- (bool)shouldRequireGestureToStartAtEdge;
- (id)systemGestureManager;
- (id)touchHistory;
- (void)trackpadDidTouchUpWithEvent:(id)arg1;
- (double)trackpadHysteresis;
- (id /* block */)translationAdjustmentBlock;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationWithinHysteresisRange;
- (void)updateTouchHistoryWithTouches:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
