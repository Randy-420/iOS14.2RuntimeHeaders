/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDistinctByKeyPathsIterator : NSObject <HDRestorableIterator, HDSampleIterator> {
    NSArray * _keyPaths;
    NSMutableSet * _seenValues;
    <HDSampleIterator><HDRestorableIterator> * _sourceIterator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) HKSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)advanceWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2;
- (id)iteratorStateData;
- (id)object;
- (long long)objectID;
- (bool)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2;
- (id)sample;

@end
