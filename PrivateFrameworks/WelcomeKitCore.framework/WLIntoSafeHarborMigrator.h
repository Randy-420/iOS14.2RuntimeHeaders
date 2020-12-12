/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLIntoSafeHarborMigrator : NSObject <WLDataclassMigrating> {
    NSString * _bundleID;
    NSString * _contentType;
    NSString * _dataType;
    WLSafeHarborDirectory * _safeHarborDirectory;
    WLSafeHarborManager * _safeHarborManager;
    WLSourceDevice * _sourceDevice;
    WLSQLController * _sqlController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WLSourceDevice *sourceDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accountBased;
- (bool)canMigrate;
- (bool)confirmItemSizeWithSourceBeforeDownloading;
- (id)contentType;
- (id)dataType;
- (id)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (id)initWithBundleID:(id)arg1 contentType:(id)arg2 dataType:(id)arg3 safeHarborManager:(id)arg4 sourceDevice:(id)arg5 sqlController:(id)arg6;
- (id)safeHarborBundleID;
- (id)sourceDevice;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end