/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppSidecarPolicySession : NSObject {
    NSMutableArray * _policyIDList;
    NEPolicySession * _policySession;
}

@property (retain) NSMutableArray *policyIDList;
@property (retain) NEPolicySession *policySession;

+ (id)connectionIdentifier;

- (void).cxx_destruct;
- (id)init;
- (bool)installPolicies;
- (id)policyIDList;
- (id)policySession;
- (void)setPolicyIDList:(id)arg1;
- (void)setPolicySession:(id)arg1;
- (bool)uninstallPolicies;

@end
