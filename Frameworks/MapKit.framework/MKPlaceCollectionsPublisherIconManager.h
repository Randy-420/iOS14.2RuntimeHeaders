/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCollectionsPublisherIconManager : NSObject <MKPublisherIconProvider, NSCacheDelegate> {
    NSCache * _publisherIconCache;
    NSObject<OS_dispatch_queue> * _publisherLogoImageQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *publisherIconCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 contentScale:(double)arg3 onCompletion:(id /* block */)arg4;
- (id)init;
- (id)publisherIconCache;
- (void)setPublisherIconCache:(id)arg1;

@end