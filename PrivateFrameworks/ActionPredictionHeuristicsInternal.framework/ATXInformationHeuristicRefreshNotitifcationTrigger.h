/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    bool  _isDistributed;
    NSString * _notificationName;
    id  _observerToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 distributed:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
