/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNDetectSoundRequest : NSObject <NSCopying, NSSecureCoding, SNAnalysisPassStrategyProviding, SNAnalyzerCreating, SNRequest, SNTwoPassRequest> {
    long long  _analysisPassStrategy;
    MLModel * _model;
    NSString * _soundIdentifier;
    SNTwoPassConfiguration * _twoPassConfiguration;
}

@property (nonatomic, readonly) long long analysisPassStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *soundIdentifier;
@property (readonly) Class superclass;
@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;

+ (id)allValidSoundIdentifiers;
+ (id)createTwoPassConfigurationWithSoundIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)analysisPassStrategy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (id)createSecondPassController;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSoundIdentifier:(id)arg1;
- (id)initWithSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2;
- (id)initWithSoundIdentifier:(id)arg1 shouldUseTwoPassDetection:(bool)arg2;
- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDetectSoundRequest:(id)arg1;
- (id)soundIdentifier;
- (id)twoPassConfiguration;

@end
