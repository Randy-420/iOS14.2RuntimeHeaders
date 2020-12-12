/* Generated by RuntimeBrowser.
 */

@protocol FLLoggingContext <FLTelemetryReporter>

@required

- (NSFileManager *)fileManager;
- (unsigned long long)now;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSString *)timestampReferenceIdentifier;
- (NSUserDefaults *)userDefaults;

@end