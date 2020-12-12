/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving> {
    id /* block */  _invalidationCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationCallback;
@property (readonly) Class superclass;

- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id /* block */)invalidationCallback;
- (void)setInvalidationCallback:(id /* block */)arg1;

@end