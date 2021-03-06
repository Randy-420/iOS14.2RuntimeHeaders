/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
 */

@interface PDSRequestQueue : NSObject {
    long long  _authRetries;
    <PDSRequestQueueDelegate> * _delegate;
    PDSRequest * _inflightRequest;
    NSDate * _lastReauthAttempt;
    FTMessageDelivery * _messageDelivery;
    id /* block */  _pushTokenBlock;
    NSObject<OS_dispatch_queue> * _queue;
    PDSRequest * _queuedRequest;
    PDSUserTracker * _userTracker;
}

@property (nonatomic) long long authRetries;
@property (nonatomic) <PDSRequestQueueDelegate> *delegate;
@property (nonatomic, retain) PDSRequest *inflightRequest;
@property (nonatomic, retain) NSDate *lastReauthAttempt;
@property (nonatomic, retain) FTMessageDelivery *messageDelivery;
@property (nonatomic, copy) id /* block */ pushTokenBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PDSRequest *queuedRequest;
@property (nonatomic, retain) PDSUserTracker *userTracker;

- (void).cxx_destruct;
- (void)_dequeueIfNeeded;
- (id)_deviceInfo;
- (void)_flightRequest:(id)arg1;
- (id)_hwVersion;
- (bool)_isAuthIssue:(long long)arg1;
- (void)_logEntries:(id)arg1;
- (void)_logProtoUserPushToken:(id)arg1;
- (id)_machineID;
- (id)_osVersion;
- (void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2;
- (long long)authRetries;
- (id)delegate;
- (bool)enqueueRequest:(id)arg1;
- (id)inflightRequest;
- (id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(id /* block */)arg4;
- (id)lastReauthAttempt;
- (id)messageDelivery;
- (id /* block */)pushTokenBlock;
- (id)queue;
- (id)queuedRequest;
- (void)setAuthRetries:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInflightRequest:(id)arg1;
- (void)setLastReauthAttempt:(id)arg1;
- (void)setMessageDelivery:(id)arg1;
- (void)setPushTokenBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedRequest:(id)arg1;
- (void)setUserTracker:(id)arg1;
- (id)userTracker;

@end
