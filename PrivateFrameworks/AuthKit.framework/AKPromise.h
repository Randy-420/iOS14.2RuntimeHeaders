/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKPromise : NSObject {
    NSMutableArray * _callbacks;
    bool  _completed;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _queue;
    id  _value;
}

- (void).cxx_destruct;
- (id)_chain:(id /* block */)arg1;
- (void)_completeWithValue:(id)arg1 error:(id)arg2;
- (void)_startWithBlock:(id /* block */)arg1;
- (id)catch:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)onComplete:(id /* block */)arg1;
- (id)then:(id /* block */)arg1;

@end