/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
 */

@interface WFWidgetConfigurationContainerView : UIView {
    NSLayoutConstraint * _avoidingKeyboardConstraint;
    WFWidgetConfigurationCardView * _cardView;
    NSLayoutConstraint * _configuratedCardHeightConstraint;
    NSLayoutConstraint * _configuratedCardOriginXConstraint;
    NSLayoutConstraint * _configuratedCardOriginYConstraint;
    NSLayoutConstraint * _configuratedCardWidthConstraint;
    NSArray * _configuredCardLayoutConstraints;
    NSArray * _defaultCardLayoutConstraints;
    <WFWidgetConfigurationContainerViewDelegate> * _delegate;
    NSLayoutConstraint * _preferredCardHeightLayoutConstraint;
    NSLayoutConstraint * _preferredCardWidthLayoutConstraint;
}

@property (nonatomic, readonly) NSLayoutConstraint *avoidingKeyboardConstraint;
@property (nonatomic, readonly) WFWidgetConfigurationCardView *cardView;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardOriginXConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardOriginYConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardWidthConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } configurationCardViewFrame;
@property (nonatomic, readonly) NSArray *configuredCardLayoutConstraints;
@property (nonatomic, readonly) NSArray *defaultCardLayoutConstraints;
@property (nonatomic) <WFWidgetConfigurationContainerViewDelegate> *delegate;
@property (nonatomic, readonly) NSLayoutConstraint *preferredCardHeightLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *preferredCardWidthLayoutConstraint;

- (void).cxx_destruct;
- (id)avoidingKeyboardConstraint;
- (id)cardView;
- (id)configuratedCardHeightConstraint;
- (id)configuratedCardOriginXConstraint;
- (id)configuratedCardOriginYConstraint;
- (id)configuratedCardWidthConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })configurationCardViewFrame;
- (id)configuredCardLayoutConstraints;
- (id)defaultCardLayoutConstraints;
- (id)delegate;
- (id)initWithCardView:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)preferredCardHeightLayoutConstraint;
- (id)preferredCardWidthLayoutConstraint;
- (void)requestDismissal;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setupConfiguredCardFrameConstraints;
- (void)setupDefaultConstraintsWithPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
