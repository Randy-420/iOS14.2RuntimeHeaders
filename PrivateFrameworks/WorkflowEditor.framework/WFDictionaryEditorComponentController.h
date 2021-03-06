/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFDictionaryEditorComponentController : CKStatefulViewComponentController <WFListEditorViewDelegate> {
    WFListEditingContext * _editingContext;
    WFDictionaryEditorView * _viewForSizing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFListEditingContext *editingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;

- (void).cxx_destruct;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)didAcquireStatefulView:(id)arg1;
- (id)editingContext;
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;
- (void)setEditingContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forComponent:(id)arg2;
- (void)willRelinquishStatefulView:(id)arg1;

@end
