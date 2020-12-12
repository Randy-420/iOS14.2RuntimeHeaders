/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCustomResponseHarvester : NSObject {
    NSString * _checkpointFullPath;
    int  _customResponsesStep;
    NSFileManager * _fManager;
    NSDate * _latestProcessedDate;
    NSString * _modelConfigPath;
    NSMutableDictionary * _modelExistsForLanguage;
    NSString * _modelFilePath;
    PETEventTracker2 * _pet2tracker;
    NSString * _preferredLanguage;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (void)clearCustomResponsesCheckpointForTesting;
+ (void)runHarvestForTestingSkipMessageCollection:(bool)arg1 clearCheckpoint:(bool)arg2 reportMetrics:(bool)arg3;

- (void).cxx_destruct;
- (id)_customResponseParametersWithExperimentResolver:(id)arg1;
- (id)_getCustomResponseParameters;
- (id)customResponseParametersForTrial:(id)arg1;
- (bool)deferAfterFilterWithStore:(id)arg1 forActivity:(id)arg2 andCustomResponseParameters:(id)arg3;
- (bool)deferAfterWriteCheckpointForActivity:(id)arg1;
- (id)getCustomResponsesLatestProcessedDateForTesting;
- (int)getCustomResponsesStepForTesting;
- (void)harvestWithActivity:(id)arg1;
- (id)initWithActivityManager:(id)arg1;
- (bool)isSupportedLanguage:(id)arg1;
- (void)loadCustomResponsesCheckpoint;
- (id)modelForLanguage:(id)arg1;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)arg1;
- (void)setCustomResponsesStepForTesting:(int)arg1;
- (void)setPet2TrackerForTesting:(id)arg1;

@end