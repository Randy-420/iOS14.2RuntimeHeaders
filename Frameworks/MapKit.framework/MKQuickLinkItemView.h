/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKQuickLinkItemView : UIView {
    GEOAppStoreAppClip * _appClip;
    UIImageView * _appImageView;
    _MKUILabel * _appLabel;
    NSArray * _constraints;
    <MKQuickLinkItemViewDelegate> * _delegate;
    _MKUILabel * _label;
    NSLayoutConstraint * _lastToBotomBaseline;
    NSLayoutConstraint * _lastToFirstBaseline;
    GEOQuickLink * _quickLink;
    NSLayoutConstraint * _topToFirstBaseline;
    bool  _touched;
    MKVibrantView * _vibrantView;
}

@property (nonatomic, retain) GEOAppStoreAppClip *appClip;
@property (nonatomic) <MKQuickLinkItemViewDelegate> *delegate;
@property (nonatomic, retain) GEOQuickLink *quickLink;
@property (nonatomic) bool touched;

+ (id)appLabelFont;
+ (id)labelFont;
+ (double)minWidthForString:(id)arg1 forSize:(id)arg2;
+ (double)widthBrandItem;
+ (id)widthDictionary;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_createConstraints;
- (void)_loadAppArtwork:(id)arg1;
- (void)_loadAppClip;
- (void)_loadAppClipArtwork:(id)arg1 bundleID:(id)arg2;
- (void)_loadFallBackApp;
- (void)_loadOfficialApp;
- (id)appClip;
- (id)delegate;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged;
- (id)initWithQuickLink:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)quickLink;
- (void)setAppClip:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQuickLink:(id)arg1;
- (void)setTouched:(bool)arg1;
- (bool)touched;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateColor;

@end
