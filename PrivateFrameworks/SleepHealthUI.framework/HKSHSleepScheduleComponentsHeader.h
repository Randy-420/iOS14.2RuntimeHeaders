/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
 */

@interface HKSHSleepScheduleComponentsHeader : UIView {
    void $__lazy_storage_$_bedtimeDayLabel;
    void $__lazy_storage_$_wakeUpDayLabel;
    void bedtimeTimeLabel;
    void bedtimeTitleLabel;
    void isIn24HourTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void sizingTimeLabel;
    void wakeUpTimeLabel;
    void wakeUpTitleLabel;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)accessibilityBedtimeTimeLabel;
- (id)accessibilityWakeUpTimeLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end