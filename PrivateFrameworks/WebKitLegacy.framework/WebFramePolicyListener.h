/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFramePolicyListener : NSObject <WebFormSubmissionListener, WebPolicyDecisionListener> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _appLinkURL;
    unsigned char  _defaultPolicy;
    struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { 
        struct Frame {} *m_ptr; 
    }  _frame;
    struct PolicyCheckIdentifier { 
        struct ObjectIdentifier<WebCore::ProcessIdentifierType> { 
            unsigned long long m_identifier; 
        } m_process; 
        unsigned long long m_policyCheck; 
    }  _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >="__value_"^{CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> {}  _policyFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)dealloc;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame {} *x1; })arg1 identifier:(struct PolicyCheckIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_1_1; } x1; unsigned long long x2; })arg2 policyFunction:(struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >=^{CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> {}*)arg3 defaultPolicy:(unsigned char)arg4;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame {} *x1; })arg1 identifier:(struct PolicyCheckIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_1_1; } x1; unsigned long long x2; })arg2 policyFunction:(struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> > >=^{CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> {}*)arg3 defaultPolicy:(unsigned char)arg4 appLinkURL:(id)arg5;
- (void)invalidate;
- (void)receivedPolicyDecision:(unsigned char)arg1;
- (void)use;

@end