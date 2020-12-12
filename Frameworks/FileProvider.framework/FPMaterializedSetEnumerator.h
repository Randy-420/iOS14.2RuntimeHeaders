/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderDomain * _domain;
    NSString * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 provider:(id)arg2;
- (void)invalidate;

@end