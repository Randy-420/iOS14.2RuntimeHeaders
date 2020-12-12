/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKClipServices : NSObject {
    NSObject<OS_dispatch_queue> * _removeNonAvailableAppClipLinksQueue;
    NSObject<OS_dispatch_queue> * _requestAppClipMetadataQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)appClipWithQuickLink:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(id /* block */)arg2;
- (void)requestAppClip:(id)arg1 completion:(id /* block */)arg2;

@end