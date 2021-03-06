/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic, retain) MRDeviceInfo *deviceInfo;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic) long long hostPort;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic) bool usingSystemPairing;

- (void)setDeviceInfo:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setHostPort:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedMessages:(id)arg1;
- (void)setUsingSystemPairing:(bool)arg1;

@end
