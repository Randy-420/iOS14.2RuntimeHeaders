/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

@interface CalInProcessReminderMigrator : NSObject <CalReminderMigrator> {
    <CalReminderMigrationDefaultsProvider> * _defaultsProvider;
    <CalReminderKitProvider> * _reminderKitProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalReminderMigrationDefaultsProvider> *defaultsProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CalReminderKitProvider> *reminderKitProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)attemptMigrationWithHomeDirectory:(id)arg1;
- (id)defaultsProvider;
- (id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2;
- (id)reminderKitProvider;

@end
