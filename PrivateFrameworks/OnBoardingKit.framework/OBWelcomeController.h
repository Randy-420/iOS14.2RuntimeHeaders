/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBWelcomeController : OBBaseWelcomeController <OBNavigationBarTitleTransistor, UIScrollViewDelegate, _UIScrollViewLayoutObserver> {
    bool  __shouldInlineButtontray;
    double  _availableContentViewHeight;
    UIView * _bleedView;
    OBBulletedList * _bulletedList;
    OBButtonTray * _buttonTray;
    UIView * _buttonTrayScrollContainerView;
    OBNavigationBarDisplayState * _cachedBarState;
    OBContentView * _contentView;
    NSLayoutConstraint * _contentViewHeightConstraint;
    long long  _contentViewLayout;
    NSLayoutConstraint * _contentViewTopOffsetConstraint;
    bool  _darkMode;
    NSLayoutConstraint * _headerTopOffsetConstraint;
    OBHeaderView * _headerView;
    bool  _includePaddingAboveContentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    UINavigationController * _retainedNavigationController;
    UIView * _scrollContentView;
    UIScrollView * _scrollView;
    bool  _scrollingDisabled;
    UIView * _secondaryContentView;
    NSLayoutConstraint * _secondaryContentViewTopOffsetConstraint;
    bool  _shouldAdjustButtonTrayForKeyboard;
    bool  _shouldAdjustScrollViewInsetForKeyboard;
    unsigned long long  _templateType;
}

@property (nonatomic) bool _shouldInlineButtontray;
@property (nonatomic) double availableContentViewHeight;
@property (nonatomic, retain) UIView *bleedView;
@property (nonatomic, retain) OBBulletedList *bulletedList;
@property (nonatomic, retain) OBButtonTray *buttonTray;
@property (nonatomic, retain) UIView *buttonTrayScrollContainerView;
@property (nonatomic, retain) OBNavigationBarDisplayState *cachedBarState;
@property (nonatomic, retain) OBContentView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewHeightConstraint;
@property (nonatomic) long long contentViewLayout;
@property (nonatomic, retain) NSLayoutConstraint *contentViewTopOffsetConstraint;
@property (nonatomic) bool darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *headerTopOffsetConstraint;
@property (nonatomic, retain) OBHeaderView *headerView;
@property (nonatomic) bool includePaddingAboveContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic, retain) UINavigationController *retainedNavigationController;
@property (nonatomic, retain) UIView *scrollContentView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (getter=isScrollingDisabled, nonatomic) bool scrollingDisabled;
@property (nonatomic, retain) UIView *secondaryContentView;
@property (nonatomic, retain) NSLayoutConstraint *secondaryContentViewTopOffsetConstraint;
@property (nonatomic) bool shouldAdjustButtonTrayForKeyboard;
@property (nonatomic) bool shouldAdjustScrollViewInsetForKeyboard;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long templateType;

- (void).cxx_destruct;
- (void)_animatePushTransitionForViews:(id)arg1 transitionSubtype:(id)arg2;
- (bool)_buttonTrayInlined;
- (double)_contentViewHeight;
- (id)_currentContainerView;
- (void)_floatButtonTray;
- (void)_handleKeyboardPresentation:(id)arg1;
- (double)_headerTopOffset;
- (void)_inlineButtonTray;
- (void)_inlineButtonTrayIfNeeded;
- (void)_keyboardWillHide:(id)arg1;
- (bool)_landscapeiPhone;
- (void)_layoutButtonTray;
- (void)_registerForKeyboardNotifications;
- (bool)_scrollViewContentIsUnderTray;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)_setupNavigationBarBleed;
- (void)_setupScrollView;
- (bool)_shouldInlineButtontray;
- (void)_unregisterForKeyboardNotifications;
- (void)_updateButtonTrayBackdrop;
- (void)_updateHeaderTopOffsetConstraint;
- (void)_updateScrollContentViewLayoutMargins;
- (void)_updateScrollViewInsets;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (double)availableContentViewHeight;
- (id)bleedView;
- (id)bulletedList;
- (id)buttonTray;
- (id)buttonTrayScrollContainerView;
- (id)cachedBarState;
- (id)contentView;
- (id)contentViewHeightConstraint;
- (long long)contentViewLayout;
- (id)contentViewTopOffsetConstraint;
- (bool)contentViewUnderButtonTray;
- (double)contentViewsTopPaddingFromBottomOfHeader;
- (bool)darkMode;
- (id)headerTopOffsetConstraint;
- (id)headerView;
- (bool)includePaddingAboveContentView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (bool)isScrollingDisabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (void)loadView;
- (long long)navigationBarScrollToEdgeBehavior;
- (long long)preferredUserInterfaceStyle;
- (void)restoreNavigationBarAppearance;
- (id)retainedNavigationController;
- (id)scrollContentView;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secondaryContentView;
- (id)secondaryContentViewTopOffsetConstraint;
- (void)setAvailableContentViewHeight:(double)arg1;
- (void)setBleedView:(id)arg1;
- (void)setBulletedList:(id)arg1;
- (void)setButtonTray:(id)arg1;
- (void)setButtonTrayScrollContainerView:(id)arg1;
- (void)setCachedBarState:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentView:(id)arg1;
- (void)setContentViewHeightConstraint:(id)arg1;
- (void)setContentViewLayout:(long long)arg1;
- (void)setContentViewTopOffsetConstraint:(id)arg1;
- (void)setCurrentNavigationBarDisplayState:(id)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setHeaderTopOffsetConstraint:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIncludePaddingAboveContentView:(bool)arg1;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRetainedNavigationController:(id)arg1;
- (void)setScrollContentView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollingDisabled:(bool)arg1;
- (void)setSecondaryContentView:(id)arg1;
- (void)setSecondaryContentViewTopOffsetConstraint:(id)arg1;
- (void)setShouldAdjustButtonTrayForKeyboard:(bool)arg1;
- (void)setShouldAdjustScrollViewInsetForKeyboard:(bool)arg1;
- (void)setTemplateType:(unsigned long long)arg1;
- (void)set_shouldInlineButtontray:(bool)arg1;
- (void)setupBulletedListIfNeeded;
- (id)setupHeaderViewIfNeeded:(id)arg1 detailedText:(id)arg2 icon:(id)arg3;
- (bool)shouldAdjustButtonTrayForKeyboard;
- (bool)shouldAdjustScrollViewInsetForKeyboard;
- (bool)shouldInlineButtonTray;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)templateType;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDirectionalLayoutMargins;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end