/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeFromView : MFMailComposeHeaderView <MFPopupButtonDelegate> {
    MFPopupButton * _popupButton;
}

@property (nonatomic, retain) NSArray *availableAddresses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeFromViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFPopupButton *popupButton;
@property (nonatomic, copy) NSString<ECEmailAddressConvertible> *selectedAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableAddresses;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)popupButton;
- (void)popupButton:(id)arg1 didSelectItem:(id)arg2;
- (void)popupButtonWillPresentMenu:(id)arg1 animator:(id)arg2;
- (void)refreshPreferredContentSize;
- (id)selectedAddress;
- (void)setAvailableAddresses:(id)arg1;
- (void)setPopupButton:(id)arg1;
- (void)setSelectedAddress:(id)arg1;

@end