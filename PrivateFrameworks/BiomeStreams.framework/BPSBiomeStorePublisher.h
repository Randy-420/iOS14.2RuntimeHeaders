/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BPSBiomeStorePublisher : BPSPublisher <BMBookmarkablePublisher> {
    BMStoreBookmark * _bookmark;
    BMStoreEnumerator * _enumerator;
    bool  _nilEnumerator;
    double  _startTime;
    BMStoreConfig * _storeConfig;
    NSString * _streamId;
}

@property (nonatomic) bool nilEnumerator;

- (void).cxx_destruct;
- (void)_configEnumeratorWithBookmark:(id)arg1;
- (void)_configEnumeratorWithStartTime:(double)arg1;
- (id)bookmarkableUpstreams;
- (id)enumerator;
- (id)initWithStreamId:(id)arg1 storeConfig:(id)arg2;
- (bool)nilEnumerator;
- (void)setNilEnumerator:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)withBookmark:(id)arg1;
- (id)withStartTime:(double)arg1;

@end