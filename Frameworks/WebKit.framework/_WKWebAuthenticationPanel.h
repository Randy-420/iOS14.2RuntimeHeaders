/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  _client;
    struct ObjectStorage<API::WebAuthenticationPanel> { 
        struct type { 
            unsigned char __lx[72]; 
        } data; 
    }  _panel;
    struct RetainPtr<NSMutableSet> { 
        void *m_ptr; 
    }  _transports;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKWebAuthenticationPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingPartyID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *transports;
@property (nonatomic, readonly) long long type;

+ (void)clearAllLocalAuthenticatorCredentials;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)relyingPartyID;
- (void)setDelegate:(id)arg1;
- (id)transports;
- (long long)type;

@end
