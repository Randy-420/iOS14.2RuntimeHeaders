/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
 */

@interface PSGWordBoundarySuggestionsExpConfig : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol> {
    NSString * _espressoBinFilePath;
    NSString * _experimentId;
    NSString * _inferenceModelConfigPath;
    bool  _isMLModelEnabled;
    NSString * _namespaceName;
    NSString * _treatmentId;
    NSString * _treatmentName;
    TRIClient * _trialClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *espressoBinFilePath;
@property (nonatomic, readonly) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inferenceModelConfigPath;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic, readonly) NSString *treatmentName;

- (void).cxx_destruct;
- (void)_setDefaultValuesForFactors;
- (void)_updateFactorLevels;
- (id)espressoBinFilePath;
- (id)experimentId;
- (id)inferenceModelConfigPath;
- (id)initWithNamespaceName:(id)arg1;
- (bool)isMLModelEnabled;
- (id)treatmentId;
- (id)treatmentName;

@end
