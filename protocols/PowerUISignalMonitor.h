/* Generated by RuntimeBrowser.
 */

@protocol PowerUISignalMonitor <NSObject>

@required

+ (id)monitorWithDelegate:(id <PowerUISignalMonitorDelegate>)arg1;

- (NSDate *)requiredFullChargeDate;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;

@optional

+ (id)monitorWithDelegate:(id <PowerUISignalMonitorDelegate>)arg1 withContext:(id <_CDLocalContext>)arg2 withKnowledgeStore:(id <_DKKnowledgeQuerying>)arg3;

@end