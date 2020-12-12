/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView> {
    UIImage * _circularLogoImage;
    NTKOlympusTimeContentView * _contentView;
    unsigned long long  _currentColor;
    unsigned long long  _currentDial;
    unsigned long long  _currentStyle;
    NSDate * _date;
    <NTKOlympusViewDelegate> * _delegate;
    CLKDevice * _device;
    double  _hourHandAngle;
    bool  _maskingPathStartsFromHourHand;
    struct CGSize { 
        double width; 
        double height; 
    }  _maskingSize;
    double  _minuteHandAngle;
    NTKOlympusTimeContentView * _overlayContentView;
    bool  _useSmallFont;
    bool  frozen;
}

@property (nonatomic, retain) UIImage *circularLogoImage;
@property (nonatomic, retain) NTKOlympusTimeContentView *contentView;
@property (nonatomic) unsigned long long currentColor;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKOlympusViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hourHandAngle;
@property (nonatomic) bool maskingPathStartsFromHourHand;
@property (nonatomic) struct CGSize { double x1; double x2; } maskingSize;
@property (nonatomic) double minuteHandAngle;
@property (nonatomic, retain) NTKOlympusTimeContentView *overlayContentView;
@property (readonly) Class superclass;
@property (nonatomic) bool useSmallFont;

- (void).cxx_destruct;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)_createContentViewIfNeeded;
- (void)_createOverlayViewIfNeeded;
- (bool)_hasWindrunnerWedge;
- (bool)_maskingPathStartsFromHourHandForDate:(id)arg1;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(bool)arg4;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)applyWindrunnerMaskWithDate:(id)arg1;
- (void)applyWindrunnerMaskWithDate:(id)arg1 force:(bool)arg2;
- (void)applyWindrunnerMaskWithHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (bool)canUpdateWindrunnerMask;
- (id)circularLogoImage;
- (void)cleanupAfterEditing;
- (void)configureViewsForEditing;
- (id)contentView;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (unsigned long long)currentColor;
- (unsigned long long)currentDial;
- (unsigned long long)currentStyle;
- (id)date;
- (id)delegate;
- (id)device;
- (double)hourHandAngle;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5 useSmallFont:(bool)arg6 circularLogoImage:(id)arg7;
- (bool)isFrozen;
- (void)layoutSubviews;
- (bool)maskingPathStartsFromHourHand;
- (struct CGSize { double x1; double x2; })maskingSize;
- (double)minuteHandAngle;
- (void)olympusContentView:(id)arg1 didHandleLogoTouchUpInsideFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)arg1;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)arg1;
- (void)openVictoryAppFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlayContentView;
- (void)prepareForEditing;
- (void)setCircularLogoImage:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentColor:(unsigned long long)arg1;
- (void)setCurrentDial:(unsigned long long)arg1;
- (void)setCurrentStyle:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHourHandAngle:(double)arg1;
- (void)setMaskingPathStartsFromHourHand:(bool)arg1;
- (void)setMaskingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinuteHandAngle:(double)arg1;
- (void)setOverlayContentView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setUseSmallFont:(bool)arg1;
- (void)setupViewsForCurrentState:(bool)arg1;
- (double)shortestPathBetweenStartAngle:(double)arg1 targetAngle:(double)arg2;
- (void)updateMaskingPathStartPointWithNewHourAngle:(double)arg1 newMinuteAngle:(double)arg2;
- (bool)useSmallFont;

@end