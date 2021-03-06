/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {
    __CFN_ConnectionMetrics * __metrics;
}

@property (getter=isCellular, nonatomic, readonly) bool cellular;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly, retain) NSObject<OS_nw_establishment_report> *establishmentReport;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *localEndpoint;
@property (getter=isMultipath, nonatomic, readonly) bool multipath;
@property (nonatomic, readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (nonatomic, readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (nonatomic, readonly, copy) NSString *networkProtocolName;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (nonatomic, readonly) bool usedTFO;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)establishmentReport;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isCellular;
- (bool)isConstrained;
- (bool)isExpensive;
- (bool)isMultipath;
- (id)localEndpoint;
- (id)negotiatedTLSCipherSuite;
- (id)negotiatedTLSProtocolVersion;
- (id)networkProtocolName;
- (id)remoteEndpoint;
- (bool)usedTFO;

@end
