/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridEmptyHomeView : UIView <HUNewUserEducationWrapperViewDelegate> {
    HUColoredButton * _addAccessoryButton;
    NSArray * _constraints;
    <HUGridEmptyHomeViewDelegate> * _delegate;
    UILabel * _instructionsLabel;
    HUChevronButton * _learnToAddAccessoryButton;
    HUChevronButton * _storeButton;
    HUNewUserEducationWrapperView * _userEducationView;
}

@property (nonatomic, retain) HUColoredButton *addAccessoryButton;
@property (nonatomic, readonly) bool canAddAccessories;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUGridEmptyHomeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *instructionsLabel;
@property (nonatomic, retain) HUChevronButton *learnToAddAccessoryButton;
@property (nonatomic, retain) HUChevronButton *storeButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUNewUserEducationWrapperView *userEducationView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_addNewAccessory:(id)arg1;
- (void)_openLearnToAddAccessories:(id)arg1;
- (void)_openStore:(id)arg1;
- (void)_setupCommonAppearance;
- (id)addAccessoryButton;
- (bool)canAddAccessories;
- (id)constraints;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionsLabel;
- (id)learnToAddAccessoryButton;
- (void)newUserEducationWrapperViewLearnMoreButtonPressed:(id)arg1;
- (void)setAddAccessoryButton:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstructionsLabel:(id)arg1;
- (void)setLearnToAddAccessoryButton:(id)arg1;
- (void)setStoreButton:(id)arg1;
- (void)setUserEducationView:(id)arg1;
- (id)storeButton;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)userEducationView;

@end