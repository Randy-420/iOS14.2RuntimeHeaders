/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed <NSCopying, NSSecureCoding> {
    unsigned long long  _archiveBytesConsumed;
    unsigned long long  _archiveSizeBytes;
    NSString * _sandboxExtensionToken;
    NSDictionary * _szOptions;
}

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (nonatomic, copy) NSString *sandboxExtensionToken;
@property (nonatomic, copy) NSDictionary *szOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)archiveBytesConsumed;
- (unsigned long long)archiveSizeBytes;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setArchiveBytesConsumed:(unsigned long long)arg1;
- (void)setArchiveSizeBytes:(unsigned long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setSzOptions:(id)arg1;
- (id)szOptions;

@end