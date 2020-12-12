/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {
    NSMutableArray * _connections;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    _LTTranslationServer * _server;
    NSXPCListener * _translationListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setupMemoryWarningListener;
- (void)clientConnectionClosed:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;

@end