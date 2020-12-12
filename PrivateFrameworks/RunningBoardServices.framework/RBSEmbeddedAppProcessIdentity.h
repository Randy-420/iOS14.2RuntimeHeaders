/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString * _embeddedApplicationIdentifier;
}

- (void).cxx_destruct;
- (id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned int)arg2 platform:(int)arg3;
- (id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned int)arg2 platform:(int)arg3 jobLabel:(id)arg4;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)debugDescription;
- (unsigned char)defaultManageFlags;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAnonymous;
- (bool)isApplication;
- (bool)isEmbeddedApplication;

@end