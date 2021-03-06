/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)_initWithQueue:(id)arg1;
- (void)_sendEventLazyWithName:(id)arg1 payload:(id)arg2;
- (void)didActivateNFCReader;
- (void)didScanNFCTagOfType:(long long)arg1;

@end
