/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {
    NSURL * _URL;
    _LTSafariLatencyLoggingRequest * _logging;
    NSMutableDictionary * _outstandingRequests;
    <_LTTranslationService> * _service;
    NSString * _sessionID;
    NSObject<OS_dispatch_queue> * _translationQueue;
    _LTTranslator * _translator;
}

@property (nonatomic, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_LTTranslationService> *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) _LTTranslator *translator;

- (void).cxx_destruct;
- (id)URL;
- (void)_ensureServiceConnection:(id /* block */)arg1;
- (id)initWithTranslator:(id)arg1;
- (void)markFirstParagraphComplete;
- (void)markPageComplete;
- (void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)provideFeedback:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)setURL:(id)arg1;
- (void)translate:(id)arg1;
- (id)translator;

@end