/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
 */

@interface SQPoolQuery : SQQuery

+ (id)poolsFromServerData:(id)arg1 error:(id*)arg2;

- (void)cachePoolForRegion:(id)arg1 date:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deletePool:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchClustersWithPoolID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPoolsWithCompletionHandler:(id /* block */)arg1;

@end