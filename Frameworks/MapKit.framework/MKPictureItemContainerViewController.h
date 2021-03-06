/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPictureItemContainerViewController : UIViewController <MKPhotoGalleryTransitionAnimator, MKPlacePhotoGalleryViewControllerDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate> {
    <MKPictureItemContainerAnalyticsDelegate> * _analyticsDelegate;
    GEOMapItemAttribution * _attribution;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    <MKPictureItemContainerDelegate> * _delegate;
    bool  _hoverActive;
    UIImageView * _imageViewForTransition;
    UIButton * _nextPageButton;
    <GEOPictureItemContainer> * _pictureItemContainer;
    <MKPlaceViewControllerPresentingProtocol> * _presentingProtocol;
    UIButton * _previousPageButton;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
}

@property (nonatomic) <MKPictureItemContainerAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (nonatomic) struct CGPoint { double x1; double x2; } beginAnalyticsScrollingPoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPictureItemContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isActive, nonatomic) bool hoverActive;
@property (nonatomic, retain) UIImageView *imageViewForTransition;
@property (nonatomic, retain) UIButton *nextPageButton;
@property (nonatomic, readonly) <GEOPictureItemContainer> *pictureItemContainer;
@property (nonatomic) <MKPlaceViewControllerPresentingProtocol> *presentingProtocol;
@property (nonatomic, retain) UIButton *previousPageButton;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addControlButtons;
- (void)adjustScrollIndexByOffset:(long long)arg1;
- (id)analyticsDelegate;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)applyCornerRadius;
- (id)attribution;
- (struct CGPoint { double x1; double x2; })beginAnalyticsScrollingPoint;
- (id)delegate;
- (void)didTapOnPictureItemView:(id)arg1;
- (void)downloadImageForVisiblePictureItemViews;
- (id)imageViewForTransition;
- (void)infoCardThemeChanged;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;
- (bool)isActive;
- (id)nextPageButton;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (id)pictureItemContainer;
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryDidFinishDismissing:(id)arg1;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)presentingProtocol;
- (id)previousPageButton;
- (void)scrollToNext;
- (void)scrollToPrevious;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setBeginAnalyticsScrollingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHoverActive:(bool)arg1;
- (void)setImageViewForTransition:(id)arg1;
- (void)setNextPageButton:(id)arg1;
- (void)setPresentingProtocol:(id)arg1;
- (void)setPreviousPageButton:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateChevronVisibility;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visiblePictureItemViews;

@end
