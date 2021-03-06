/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

@interface HUIHeadphoneLevelView : UIControl <HACCContentModule> {
    UIView * _centerContainer;
    NSNumberFormatter * _dbFormatter;
    bool  _isRTL;
    HUIHeadphoneLevelGroup * _levelGroup;
    UIView * _subtitleContainer;
    UILabel * _subtitleLeftLabel;
    UILabel * _subtitleRightLabel;
    UIVisualEffectView * _titleContainer;
    UILabel * _titleLabel;
    NSArray * _viewContraints;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (nonatomic, retain) UIView *centerContainer;
@property (nonatomic, retain) NSNumberFormatter *dbFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRTL;
@property (nonatomic, retain) HUIHeadphoneLevelGroup *levelGroup;
@property (nonatomic) unsigned long long module;
@property (nonatomic, retain) UIView *subtitleContainer;
@property (nonatomic, retain) UILabel *subtitleLeftLabel;
@property (nonatomic, retain) UILabel *subtitleRightLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIVisualEffectView *titleContainer;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSArray *viewContraints;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)centerContainer;
- (id)contentValue;
- (id)dbFormatter;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)formatLevel:(id)arg1 baseFont:(id)arg2;
- (id)formatLevelRating:(id)arg1 threshold:(unsigned long long)arg2;
- (id)init;
- (bool)isAccessibilityElement;
- (bool)isRTL;
- (id)levelGroup;
- (unsigned long long)module;
- (void)setCenterContainer:(id)arg1;
- (void)setDbFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLevelGroup:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setSubtitleContainer:(id)arg1;
- (void)setSubtitleLeftLabel:(id)arg1;
- (void)setSubtitleRightLabel:(id)arg1;
- (void)setTitleContainer:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewContraints:(id)arg1;
- (id)subtitleContainer;
- (id)subtitleLeftLabel;
- (id)subtitleRightLabel;
- (id)titleContainer;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateValue;
- (void)updateViewsWithSlowLeq:(double)arg1 fastLeq:(double)arg2 andThreshold:(unsigned long long)arg3;
- (id)viewContraints;

@end
