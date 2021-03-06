/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (id)determineExpirationDateForCurrentDate:(id)arg1;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)updateStateWithCheckExpiration:(bool)arg1;
- (void)wakeUpConfirmed;
- (void)windDownReached;

@end
