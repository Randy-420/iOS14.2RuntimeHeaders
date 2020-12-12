/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool failOnUnrecognizedExperiment;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasFailOnUnrecognizedExperiment;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPBTimestamp *startTimestamp;

+ (id)descriptor;

@end