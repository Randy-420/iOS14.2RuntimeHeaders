/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceBundleLoader : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSArray * _cachedFaceBundles;
}

+ (id)faceBundleLoaderWithDirectories:(id)arg1;

- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (void)enumerationFaceBundleClassesWithBlock:(id /* block */)arg1;
- (id)init;

@end
