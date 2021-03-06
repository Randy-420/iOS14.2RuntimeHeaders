/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PUSearchZeroKeywordChangeDelegate, PXSettingsKeyObserver> {
    long long  _filteringState;
    NSArray * _gadgetProviders;
    PXTapToRadarGadgetProvider * _tapToRadarProvider;
    PUSearchZeroKeywordDataSource * _zeroKeywordDataSource;
    NSArray * _zeroKeywordGadgetProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filteringState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic, readonly) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (nonatomic, retain) NSArray *zeroKeywordGadgetProviders;

- (void).cxx_destruct;
- (void)_waitForFirstDisplayTimedOut;
- (bool)_zeroKeywordDataSourceHasZeroKeywords;
- (void)didUpdateSections:(id)arg1;
- (long long)filteringState;
- (id)gadgetProviders;
- (id)hiddenGadgetProviders;
- (id)init;
- (bool)isExpectedToLoadNonEmptyDataSourceSoon;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)refreshData;
- (void)setFilteringState:(long long)arg1;
- (void)setTapToRadarProvider:(id)arg1;
- (void)setZeroKeywordGadgetProviders:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)tapToRadarProvider;
- (id)zeroKeywordDataSource;
- (id)zeroKeywordGadgetProviders;

@end
