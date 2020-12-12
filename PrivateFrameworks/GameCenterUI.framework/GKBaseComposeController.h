/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {
    UIScrollView * _backgroundView;
    NSArray * _composeHeaderFields;
    NSLayoutConstraint * _contentHeightConstraint;
    NSLayoutConstraint * _contentLeadingConstraint;
    UIView * _contentView;
    GKContiguousContainerView * _headerFieldContainer;
    UIView * _intendedFirstResponder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownKeyboardFrame;
    GKTextView * _messageField;
    NSLayoutConstraint * _messageFieldTrailingConstraint;
    double  _scrollContentInsetAdjustY;
    bool  _showHeaderFieldContainer;
}

@property (nonatomic, retain) UIScrollView *backgroundView;
@property (nonatomic, retain) NSArray *composeHeaderFields;
@property (nonatomic, retain) NSLayoutConstraint *contentHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentLeadingConstraint;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKContiguousContainerView *headerFieldContainer;
@property (nonatomic) UIView *intendedFirstResponder;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property (nonatomic, retain) GKTextView *messageField;
@property (nonatomic, retain) NSLayoutConstraint *messageFieldTrailingConstraint;
@property (nonatomic) double scrollContentInsetAdjustY;
@property (nonatomic) bool showHeaderFieldContainer;
@property (readonly) Class superclass;

- (void)_adjustContentInsetForShowingKeyboard:(bool)arg1;
- (bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_scrollSelectedTextToVisible;
- (id)backgroundView;
- (id)composeHeaderFields;
- (id)contentHeightConstraint;
- (id)contentLeadingConstraint;
- (id)contentView;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)headerFieldContainer;
- (id)init;
- (id)intendedFirstResponder;
- (void)keyboardWillHideShow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (id)messageField;
- (void)messageFieldTextDidChange;
- (id)messageFieldTrailingConstraint;
- (double)scrollContentInsetAdjustY;
- (void)setBackgroundView:(id)arg1;
- (void)setComposeHeaderFields:(id)arg1;
- (void)setContentHeightConstraint:(id)arg1;
- (void)setContentLeadingConstraint:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeaderFieldContainer:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMessageField:(id)arg1;
- (void)setMessageFieldText:(id)arg1;
- (void)setMessageFieldTrailingConstraint:(id)arg1;
- (void)setScrollContentInsetAdjustY:(double)arg1;
- (void)setShowHeaderFieldContainer:(bool)arg1;
- (bool)showHeaderFieldContainer;
- (unsigned long long)supportedInterfaceOrientations;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end