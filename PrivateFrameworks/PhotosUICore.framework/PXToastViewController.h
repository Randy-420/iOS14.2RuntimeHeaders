/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXToastViewController : UIViewController {
    CAShapeLayer * _checkLayer;
    <PXToastViewControllerDelegate> * _delegate;
    UINotificationFeedbackGenerator * _feedbackGenerator;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _message;
    PXToastPresentationWindow * _presentationWindow;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    bool  _shouldUseAnimatedCheckmark;
    UIVisualEffectView * _toastView;
}

@property (nonatomic, retain) CAShapeLayer *checkLayer;
@property (nonatomic) <PXToastViewControllerDelegate> *delegate;
@property (nonatomic, retain) UINotificationFeedbackGenerator *feedbackGenerator;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) PXToastPresentationWindow *presentationWindow;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic) bool shouldUseAnimatedCheckmark;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIVisualEffectView *toastView;

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString { }*)arg2;
+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;
+ (id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2;
+ (id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;

- (void).cxx_destruct;
- (void)_animateCheckMark;
- (void)_dismissAfterDelay:(double)arg1;
- (id)checkLayer;
- (id)delegate;
- (id)feedbackGenerator;
- (id)image;
- (id)imageView;
- (id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
- (id)message;
- (void)presentOnWindowScene:(id)arg1;
- (id)presentationWindow;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setCheckLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setShouldUseAnimatedCheckmark:(bool)arg1;
- (void)setToastView:(id)arg1;
- (bool)shouldUseAnimatedCheckmark;
- (id)toastView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end