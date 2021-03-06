/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUISensorActivityData : NSObject <NSCopying> {
    NSString * _attributionGroup;
    NSString * _bundleIdentifier;
    NSString * _displayName;
    bool  _launchToSettings;
    UIColor * _sensorIndicatorColor;
    unsigned long long  _sensorType;
    bool  _usedRecently;
}

@property (nonatomic, copy) NSString *attributionGroup;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool launchToSettings;
@property (nonatomic, retain) UIColor *sensorIndicatorColor;
@property (nonatomic) unsigned long long sensorType;
@property (nonatomic) bool usedRecently;

- (void).cxx_destruct;
- (id)attributionGroup;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)displayName;
- (bool)launchToSettings;
- (id)sensorIndicatorColor;
- (unsigned long long)sensorType;
- (void)setAttributionGroup:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLaunchToSettings:(bool)arg1;
- (void)setSensorIndicatorColor:(id)arg1;
- (void)setSensorType:(unsigned long long)arg1;
- (void)setUsedRecently:(bool)arg1;
- (bool)usedRecently;

@end
