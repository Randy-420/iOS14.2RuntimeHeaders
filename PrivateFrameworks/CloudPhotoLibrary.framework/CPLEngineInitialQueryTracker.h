/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineInitialQueryTracker : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)recordInitialQueryForClassFinished:(Class)arg1 scope:(id)arg2 finishedState:(long long)arg3 error:(id*)arg4;
- (bool)recordInitialQueryForClassStarted:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 error:(id*)arg4;
- (bool)recordQueryBatchForClass:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 count:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned long long)scopeType;

@end
