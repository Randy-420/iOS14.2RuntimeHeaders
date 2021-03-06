/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager> {
    NSPredicate * _filterPredicate;
    bool  _isBackgroundFetching;
    bool  _isLoadingInitialDataSource;
    NSString * _localizedEmptyPlaceholderMessage;
    NSString * _localizedEmptyPlaceholderTitle;
    NSString * _localizedLoadingInitialDataSourceMessage;
    bool  _supportsFiltering;
}

@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundFetching;
@property (nonatomic, readonly) bool isLoadingInitialDataSource;
@property (nonatomic, readonly, copy) NSString *localizedEmptyPlaceholderMessage;
@property (nonatomic, readonly, copy) NSString *localizedEmptyPlaceholderTitle;
@property (nonatomic, readonly, copy) NSString *localizedLoadingInitialDataSourceMessage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFiltering;

- (void).cxx_destruct;
- (long long)backgroundFetchOriginSection;
- (void)ensureLastSectionHasContent;
- (void)ensureStartingSectionHasContent;
- (void)excludeAssetsAtIndexPaths:(id)arg1;
- (id)filterPredicate;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (bool)isBackgroundFetching;
- (bool)isLoadingInitialDataSource;
- (id)localizedEmptyPlaceholderMessage;
- (id)localizedEmptyPlaceholderTitle;
- (id)localizedLoadingInitialDataSourceMessage;
- (id)mutableChangeObject;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)refreshResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCurationEnabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;
- (void)setFilteringDisabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (bool)supportsFiltering;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)waitForAvailabilityOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;

@end
