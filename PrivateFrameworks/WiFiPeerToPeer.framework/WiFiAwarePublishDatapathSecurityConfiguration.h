/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
 */

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding> {
    NSArray * _passphraseList;
    NSArray * _pmkList;
}

@property (nonatomic, readonly) NSArray *passphraseList;
@property (nonatomic, readonly) NSArray *pmkList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPMKList:(id)arg1 passphraseList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)passphraseList;
- (id)pmkList;

@end