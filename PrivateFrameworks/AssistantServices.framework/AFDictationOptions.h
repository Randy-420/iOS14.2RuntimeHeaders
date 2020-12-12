/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationDisplayName;
    NSString * _applicationName;
    NSString * _applicationVersion;
    STSiriContext * _context;
    bool  _detectUtterances;
    long long  _dictationInputOrigin;
    bool  _farField;
    NSString * _fieldIdentifier;
    NSString * _fieldLabel;
    bool  _forceOfflineRecognition;
    bool  _incremental;
    NSArray * _inlineItemList;
    NSString * _interactionIdentifier;
    NSString * _keyboardIdentifier;
    long long  _keyboardType;
    NSString * _languageCodeOverride;
    AFLanguageDetectionUserContext * _languageDetectionUserContext;
    double  _maximumRecognitionDuration;
    NSString * _microphoneIdentifier;
    NSURL * _modelOverrideURL;
    NSString * _offlineLanguage;
    NSURL * _originalAudioFileURL;
    NSString * _orthography;
    NSString * _postfixText;
    bool  _preferOnlineRecognition;
    NSString * _prefixText;
    NSDictionary * _recognitionOverrides;
    bool  _releaseAudioSessionOnRecordingCompletion;
    NSString * _requestIdentifier;
    long long  _returnKeyType;
    NSString * _samplingInfo;
    bool  _secureOfflineOnly;
    NSString * _selectedText;
    long long  _taskHint;
    long long  _transcriptionMode;
    NSDictionary * _voiceSearchHeaderFields;
    NSDictionary * _voiceSearchQueryParameters;
    long long  _voiceSearchTypeOptions;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic, copy) NSString *applicationDisplayName;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, retain) STSiriContext *context;
@property (nonatomic) bool detectUtterances;
@property (nonatomic) long long dictationInputOrigin;
@property (nonatomic) bool farField;
@property (nonatomic, copy) NSString *fieldIdentifier;
@property (nonatomic, copy) NSString *fieldLabel;
@property (nonatomic) bool forceOfflineRecognition;
@property (nonatomic) bool incremental;
@property (nonatomic, copy) NSArray *inlineItemList;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic, copy) NSString *keyboardIdentifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *languageCodeOverride;
@property (nonatomic, copy) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, copy) NSString *microphoneIdentifier;
@property (nonatomic, copy) NSURL *modelOverrideURL;
@property (nonatomic, copy) NSString *offlineLanguage;
@property (nonatomic, copy) NSURL *originalAudioFileURL;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSString *postfixText;
@property (nonatomic) bool preferOnlineRecognition;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic, copy) NSDictionary *recognitionOverrides;
@property (nonatomic) bool releaseAudioSessionOnRecordingCompletion;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, copy) NSString *samplingInfo;
@property (nonatomic) bool secureOfflineOnly;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic) long long taskHint;
@property (nonatomic) long long transcriptionMode;
@property (nonatomic, copy) NSDictionary *voiceSearchHeaderFields;
@property (nonatomic, copy) NSDictionary *voiceSearchQueryParameters;
@property (nonatomic) long long voiceSearchTypeOptions;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationDisplayName;
- (id)applicationName;
- (id)applicationVersion;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)detectUtterances;
- (long long)dictationInputOrigin;
- (id)dictationOptionsWithoutTextContext;
- (void)encodeWithCoder:(id)arg1;
- (bool)farField;
- (id)fieldIdentifier;
- (id)fieldLabel;
- (bool)forceOfflineRecognition;
- (bool)incremental;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inlineItemList;
- (id)interactionIdentifier;
- (id)keyboardIdentifier;
- (long long)keyboardType;
- (id)languageCodeOverride;
- (id)languageDetectionUserContext;
- (double)maximumRecognitionDuration;
- (id)microphoneIdentifier;
- (id)modelOverrideURL;
- (id)offlineLanguage;
- (id)originalAudioFileURL;
- (id)orthography;
- (id)postfixText;
- (bool)preferOnlineRecognition;
- (id)prefixText;
- (id)recognitionOverrides;
- (bool)releaseAudioSessionOnRecordingCompletion;
- (id)requestIdentifier;
- (long long)returnKeyType;
- (id)samplingInfo;
- (bool)secureOfflineOnly;
- (id)selectedText;
- (void)setApplicationDisplayName:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setDictationInputOrigin:(long long)arg1;
- (void)setFarField:(bool)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setForceOfflineRecognition:(bool)arg1;
- (void)setIncremental:(bool)arg1;
- (void)setInlineItemList:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setKeyboardIdentifier:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setLanguageCodeOverride:(id)arg1;
- (void)setLanguageDetectionUserContext:(id)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setMicrophoneIdentifier:(id)arg1;
- (void)setModelOverrideURL:(id)arg1;
- (void)setOfflineLanguage:(id)arg1;
- (void)setOriginalAudioFileURL:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPreferOnlineRecognition:(bool)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setRecognitionOverrides:(id)arg1;
- (void)setReleaseAudioSessionOnRecordingCompletion:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSamplingInfo:(id)arg1;
- (void)setSecureOfflineOnly:(bool)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setTaskHint:(long long)arg1;
- (void)setTranscriptionMode:(long long)arg1;
- (void)setVoiceSearchHeaderFields:(id)arg1;
- (void)setVoiceSearchQueryParameters:(id)arg1;
- (void)setVoiceSearchTypeOptions:(long long)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (long long)taskHint;
- (long long)transcriptionMode;
- (id)voiceSearchHeaderFields;
- (id)voiceSearchQueryParameters;
- (long long)voiceSearchTypeOptions;
- (id)voiceTriggerEventInfo;

@end