/* Generated by RuntimeBrowser.
 */

@protocol DDSAssetQueryResultCaching <NSObject>

@required

- (void)cacheAssets:(NSArray *)arg1 forQuery:(DDSAssetQuery *)arg2;
- (NSArray *)cachedAssetsForQuery:(DDSAssetQuery *)arg1;
- (void)clearCache;

@end
