/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface SignedLogHead : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) bool hasSignature;
@property (nonatomic, copy) NSData *logHead;
@property (readonly) LogHead *parsedLogHead;
@property (nonatomic, retain) Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;

+ (id)descriptor;

- (id)copyManagedObject:(id*)arg1;
- (id)createManagedObjectWithError:(id*)arg1;
- (id)dataStore;
- (id)parsedLogHead;
- (void)setDataStore:(id)arg1;
- (void)setVerifier:(id)arg1;
- (void)storeSignatureResult:(unsigned long long)arg1 signatureError:(id*)arg2;
- (id)verifier;
- (unsigned long long)verifyWithError:(id*)arg1;

@end
