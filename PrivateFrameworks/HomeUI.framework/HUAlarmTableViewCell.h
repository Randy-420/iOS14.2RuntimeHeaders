/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTableViewCell : UITableViewCell {
    MTUIAlarmView * _alarmView;
    <HUAlarmTableViewCellDelegate> * _delegate;
    bool  _disabled;
    bool  _enabled;
    UISwitch * _enabledSwitch;
    UIStackView * _stackView;
}

@property (nonatomic, retain) MTUIAlarmView *alarmView;
@property (nonatomic) <HUAlarmTableViewCellDelegate> *delegate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UISwitch *enabledSwitch;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_alarmActiveChanged:(id)arg1;
- (id)_alarmBackgroundColor;
- (void)_setupConstraints;
- (id)alarmView;
- (id)delegate;
- (bool)enabled;
- (id)enabledSwitch;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (void)layoutSubviews;
- (void)refreshUI:(id)arg1 accessoryName:(id)arg2 animated:(bool)arg3;
- (void)setAlarmActiveDelegate:(id)arg1;
- (void)setAlarmView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStackView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end