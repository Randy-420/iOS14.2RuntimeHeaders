/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {
    NSCache * _backgroundRefreshStateByIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isBackgroundRefreshEnabledForIdentity:(id)arg1;
- (void)removeIdentity:(id)arg1;

@end
