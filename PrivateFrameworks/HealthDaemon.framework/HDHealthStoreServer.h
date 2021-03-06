/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthStoreServer : NSObject <HDConceptIndexManagerObserver, HDDiagnosticObject, HDHealthStoreServerInterface, HDSampleSaving, HDTaskServerDelegate, HDTaskServerEndpointDelegate, HDUnitPreferencesManagerObserver> {
    HDAuthorizationServer * _authorizationServer;
    HDHealthStoreClient * _client;
    NSObject<OS_dispatch_source> * _clientTransactionTimer;
    HKHealthStoreConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    HDDaemon * _daemon;
    HDProfile * _profile;
    HDQueryControlServer * _queryControlServer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _taskServerEndpointsByUUID;
}

@property (nonatomic, readonly) HDAuthorizationServer *authorizationServer;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly, copy) NSString *clientDebuggingIdentifier;
@property (nonatomic, readonly, copy) HKHealthStoreConfiguration *configuration;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, retain) HDQueryControlServer *queryControlServer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_authorizationPromptHandler;
- (void)_cancelActiveClientTransaction;
- (bool)_clientHasControlEntitlementWithError:(id*)arg1;
- (bool)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1;
- (id)_clientRemoteObjectProxy;
- (id /* block */)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(id /* block */)arg3;
- (id)_getHealthRecordsPlugin;
- (void)_holdActiveClientTransactionWithCompletion:(id /* block */)arg1;
- (bool)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (id)_objectsByProvenance:(id)arg1 errorOut:(id*)arg2;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id*)arg2;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id /* block */)_permissionBlockForRestrictedSourceEntities:(id)arg1;
- (void)_queue_cancelActiveClientTransaction;
- (void)_queue_holdActiveClientTransactionWithCompletion:(id /* block */)arg1;
- (bool)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(bool)arg4 error:(id*)arg5;
- (bool)_queue_isServerActive;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id*)arg4;
- (void)_queue_serverActivityChanged;
- (void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_remote_saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(id /* block */)arg4;
- (void)_requireEntitlement:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(id /* block */)arg4;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(bool)arg3 handler:(id /* block */)arg4;
- (void)_serverActivityChanged;
- (id)authorizationServer;
- (id)client;
- (id)clientDebuggingIdentifier;
- (id)clientSourceWithError:(id*)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (id)configuration;
- (id)daemon;
- (id)diagnosticDescription;
- (id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4;
- (void)invalidate;
- (id /* block */)objectAuthorizationPromptHandler;
- (void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)profile;
- (id)queryControlServer;
- (id)queue;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_clientResumedWithCompletion:(id /* block */)arg1;
- (void)remote_clientWillSuspendWithCompletion:(id /* block */)arg1;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(id /* block */)arg5;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_deleteClientSourceWithCompletion:(id /* block */)arg1;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_dropEntitlement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchModificationDateForCharacteristicWithDataType:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchServerURLForAssetType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 version:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(id /* block */)arg1;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)remote_removePreferredUnitForType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(bool)arg3 completion:(id /* block */)arg4;
- (void)remote_restoreEntitlement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_saveDataObjects:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(bool)arg3 handler:(id /* block */)arg4;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(id /* block */)arg3;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(id /* block */)arg3;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(id /* block */)arg4;
- (id)sampleSavingDelegate;
- (void)saveSamples:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setQueryControlServer:(id)arg1;
- (void)start;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;

@end
