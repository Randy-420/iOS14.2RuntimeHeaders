/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController, HMFLogging> {
    NSUUID * _assistantAccessControlModelID;
    <HMDAssistantAccessControlModelUpdateReceiver> * _assistantAccessControlModelUpdateReceiver;
    HMBCloudZone * _cloudZone;
    <HMDDatabase> * _database;
    <HMDUserSettingsBackingStoreControllerDelegate> * _delegate;
    HMBLocalZone * _localZone;
    HMDLogEventDispatcher * _logEventDispatcher;
    NSObject<OS_os_log> * _logger;
    NSUUID * _mediaContentProfileAccessControlModelID;
    <HMDMediaContentProfileAccessControlModelUpdateReceiver> * _mediaContentProfileAccessControlModelUpdateReceiver;
    HMDCloudShareParticipantsManager * _participantsManager;
    long long  _runState;
    HMDCloudShareMessenger * _shareMessenger;
    unsigned long long  _startupSignPost;
    <HMDSettingTransactionReceiverProtocol> * _transactionReceiver;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSString * _zoneName;
}

@property (copy) NSUUID *assistantAccessControlModelID;
@property <HMDAssistantAccessControlModelUpdateReceiver> *assistantAccessControlModelUpdateReceiver;
@property (retain) HMBCloudZone *cloudZone;
@property (readonly) <HMDDatabase> *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDUserSettingsBackingStoreControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMBLocalZone *localZone;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (copy) NSUUID *mediaContentProfileAccessControlModelID;
@property <HMDMediaContentProfileAccessControlModelUpdateReceiver> *mediaContentProfileAccessControlModelUpdateReceiver;
@property (retain) HMDCloudShareParticipantsManager *participantsManager;
@property long long runState;
@property (readonly) HMDCloudShareMessenger *shareMessenger;
@property (readonly) Class superclass;
@property <HMDSettingTransactionReceiverProtocol> *transactionReceiver;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *zoneName;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(bool)arg2 error:(id)arg3;
- (void)_invalidate;
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;
- (void)_startWithOwnedZone;
- (void)_startWithSharedZone;
- (void)_updateRunState:(long long)arg1;
- (id)assistantAccessControlModelID;
- (id)assistantAccessControlModelUpdateReceiver;
- (void)clearParticipants;
- (id)cloudZone;
- (id)database;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (id)delegate;
- (void)deregisterObserverDeviceIdentifier:(id)arg1;
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;
- (void)destroyZone;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 home:(id)arg5 shareMessenger:(id)arg6;
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id*)arg2;
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id*)arg2;
- (id)loadPrivateUserDataModelWithError:(id*)arg1;
- (id)loadSharedUserDataModelWithError:(id*)arg1;
- (id)loadUserSettings;
- (id)localZone;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)logEventDispatcher;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (id)mediaContentProfileAccessControlModelID;
- (id)mediaContentProfileAccessControlModelUpdateReceiver;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(id /* block */)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)participantsManager;
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (void)registerForSettingsTransactions:(id)arg1;
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;
- (void)runSettingTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(bool)arg2 completion:(id /* block */)arg3;
- (long long)runState;
- (void)runTransaction:(id)arg1 waitForCloudPush:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAssistantAccessControlModelID:(id)arg1;
- (void)setAssistantAccessControlModelUpdateReceiver:(id)arg1;
- (void)setCloudZone:(id)arg1;
- (void)setLocalZone:(id)arg1;
- (void)setMediaContentProfileAccessControlModelID:(id)arg1;
- (void)setMediaContentProfileAccessControlModelUpdateReceiver:(id)arg1;
- (void)setParticipantsManager:(id)arg1;
- (void)setRunState:(long long)arg1;
- (void)setTransactionReceiver:(id)arg1;
- (id)settingTransactionWithName:(id)arg1;
- (id)shareMessenger;
- (void)start;
- (id)transactionReceiver;
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;
- (void)updateParticipants;
- (id)workQueue;
- (id)zoneName;

@end
