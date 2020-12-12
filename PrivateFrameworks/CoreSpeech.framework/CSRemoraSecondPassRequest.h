/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSRemoraSecondPassRequest : NSObject {
    CSAudioProvider * _audioProvider;
    CSAudioStreamHolding * _audioStreamHolding;
    NSString * _firstPassDeviceID;
    bool  _isSecondPassRunning;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;
@property (nonatomic, retain) NSString *firstPassDeviceID;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

- (void).cxx_destruct;
- (id)audioProvider;
- (id)audioStreamHolding;
- (void)cancelAudioStreamHold;
- (void)dealloc;
- (id)firstPassDeviceID;
- (void)holdAudioStreamWithTimeout:(double)arg1;
- (id)initWithDeviceID:(id)arg1;
- (bool)isSecondPassRunning;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;
- (void)setFirstPassDeviceID:(id)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)start;
- (id)voiceTriggerSecondPass;

@end