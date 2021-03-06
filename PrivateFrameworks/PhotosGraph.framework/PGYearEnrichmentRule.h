/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    PGManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithManager:(id)arg1;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)manager;
- (double)promotionScoreForHighlightItemList:(id)arg1;

@end
