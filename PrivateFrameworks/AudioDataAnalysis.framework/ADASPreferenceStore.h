/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
 */

@interface ADASPreferenceStore : NSObject {
    NPSDomainAccessor * _coreAudioDeviceDomain;
    NPSDomainAccessor * _coreAudioDomain;
    NSDictionary * _defaultValues;
    NSDictionary * _keyMap;
    NSDictionary * _specialDarwinKeys;
}

@property (nonatomic, retain) NPSDomainAccessor *coreAudioDeviceDomain;
@property (nonatomic, retain) NPSDomainAccessor *coreAudioDomain;
@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (nonatomic, readonly) NSDictionary *keyMap;
@property (nonatomic, readonly) NSDictionary *specialDarwinKeys;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)coreAudioDeviceDomain;
- (id)coreAudioDomain;
- (id)defaultValues;
- (id)init;
- (id)keyMap;
- (void)setCoreAudioDeviceDomain:(id)arg1;
- (void)setCoreAudioDomain:(id)arg1;
- (id)specialDarwinKeys;

@end
