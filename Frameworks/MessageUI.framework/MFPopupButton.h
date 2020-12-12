/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate> {
    <MFPopupButtonDelegate> * _delegate;
    NSArray * _items;
    UILabel * _label;
    MFPopupButtonItem * _selectedItem;
}

@property (nonatomic, readonly) bool canPresentMenu;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFPopupButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) MFPopupButtonItem *selectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionForItem:(id)arg1;
- (void)_didSelectItem:(id)arg1;
- (void)_updateUI;
- (bool)canPresentMenu;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)dismissMenu;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)label;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)selectedItem;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)sizeToFit;

@end