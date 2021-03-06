/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPChargingReminderStateMachineState : HKSPPersistentStateMachineState <HDSPChargingReminderStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly) Class superclass;

- (bool)_inMonitoringWindow;
- (void)batteryLevelChanged:(float)arg1;
- (void)batteryMonitoringEventDue;
- (id)determineNextState;
- (bool)isChargingReminderDisabled;
- (void)updateState;

@end
