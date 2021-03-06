/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    <_LTClientConnectionDelegate> * _delegate;
    _LTTranslationServer * _server;
    NSUUID * _speechSessionID;
}

@property (nonatomic) <_LTClientConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_clientDelegate;
- (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_getAssetSize:(id /* block */)arg1;
- (void)_offlineLanguageStatus:(id /* block */)arg1;
- (void)_purgeAllAssets:(id /* block */)arg1;
- (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateAllAssets:(id /* block */)arg1;
- (void)addSpeechAudioData:(id)arg1;
- (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(id /* block */)arg2;
- (void)availableLocalePairsForTask:(long long)arg1 completion:(id /* block */)arg2;
- (void)cleanup;
- (void)cleanupOnDisconnect;
- (void)clearCaches;
- (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)endAudio;
- (id)initWithConnection:(id)arg1 server:(id)arg2;
- (void)installedLocales:(id /* block */)arg1;
- (void)languageForText:(id)arg1 completion:(id /* block */)arg2;
- (void)languagesForText:(id)arg1 completion:(id /* block */)arg2;
- (void)logRequestOfType:(id)arg1 context:(id)arg2;
- (void)logWithRequestData:(id)arg1;
- (void)preheatWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)provideFeedback:(id)arg1 withContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)startInstallRequest:(id)arg1;
- (void)startSpeechTranslationWithContext:(id)arg1;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;
- (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(id /* block */)arg3;
- (void)translate:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end
