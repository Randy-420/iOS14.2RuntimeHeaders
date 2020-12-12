/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputWritingSession : NSObject {
    double  _beginTimestamp;
    PKTextInputElement * _currentTargetElement;
    bool  _didSuppressGesturesOverReservedSpace;
    bool  _isInvalidated;
    NSNumber * _sessionIdentifier;
}

@property (nonatomic, readonly) double beginTimestamp;
@property (nonatomic, retain) PKTextInputElement *currentTargetElement;
@property (nonatomic, readonly) bool didSuppressGesturesOverReservedSpace;
@property (nonatomic, readonly) NSNumber *sessionIdentifier;

- (void).cxx_destruct;
- (double)beginTimestamp;
- (id)currentTargetElement;
- (void)dealloc;
- (id)description;
- (bool)didSuppressGesturesOverReservedSpace;
- (id)init;
- (void)invalidate;
- (id)sessionIdentifier;
- (void)setCurrentTargetElement:(id)arg1;
- (void)setDidSuppressGesturesOverReservedSpace;

@end