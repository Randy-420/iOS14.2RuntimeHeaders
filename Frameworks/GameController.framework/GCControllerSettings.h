/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerSettings : NSObject <NSSecureCoding> {
    NSMutableDictionary * __elementMappingFromUserDefaults;
    NSString * _bundleIdentifier;
    GCController * _controller;
    bool  _customizationsEnabled;
    bool  _customized;
    NSArray * _customizedElementSettings;
    NSUUID * _customizedUUID;
    NSUserDefaults * _defaults;
    NSDictionary * _elementMappingKeyToElement;
    NSMutableDictionary * _elementMappings;
    NSMutableDictionary * _elementSettings;
    bool  _hapticsEnabled;
    NSMutableSet * _observedKeyPaths;
    bool  _screenShotEnabled;
    bool  _serialized;
    id /* block */  _settingsChangedHandler;
    unsigned long long  _settingsID;
    <NSCopying><NSObject><NSSecureCoding> * _uniqueIdentifier;
    bool  _videoRecordingEnabled;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) bool customizationsEnabled;
@property (nonatomic) bool customized;
@property (nonatomic, readonly) NSDictionary *elementMappings;
@property (nonatomic) bool hapticsEnabled;
@property (nonatomic) bool screenShotEnabled;
@property (nonatomic) bool serialized;
@property (nonatomic, copy) id /* block */ settingsChangedHandler;
@property (nonatomic) unsigned long long settingsID;
@property (nonatomic, readonly) <NSCopying><NSObject><NSSecureCoding> *uniqueIdentifier;
@property (nonatomic) bool videoRecordingEnabled;

+ (id)controllerSettingsCustomizedChangedHandlers;
+ (id)metaDefaults;
+ (void)registerSettingsCustomizedHandler:(id /* block */)arg1 forController:(id)arg2 forKey:(id)arg3;
+ (void)registerSettingsCustomizedHandler:(id /* block */)arg1 forKey:(id)arg2;
+ (void)setSettingsExist:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)setSettingsExist:(bool)arg1 forController:(id)arg2 forBundleIdentifier:(id)arg3;
+ (id)settingsCustomizedChangedHandlers;
+ (bool)settingsCustomizedForBundleIdentifier:(id)arg1;
+ (bool)settingsCustomizedForController:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)settingsDispatchQueue;
+ (bool)supportsSecureCoding;
+ (void)unregisterSettingsCustomizedHandlerForController:(id)arg1 forKey:(id)arg2;
+ (void)unregisterSettingsCustomizedHandlerForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_updateControllerReference:(id)arg1;
- (id)bundleIdentifier;
- (bool)customizationsEnabled;
- (bool)customized;
- (void)dealloc;
- (id)defaultValues;
- (void)deleteObjectForKey:(id)arg1;
- (id)description;
- (id)elementMappings;
- (id)elementSettingForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)eraseAllSettings;
- (bool)hapticsEnabled;
- (id)initForController:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 forController:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 forControllerIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)initializeElementMappings;
- (void)initializeUserDefaults;
- (id)mappingForButton:(id)arg1;
- (id)mappingForDirectionPad:(id)arg1;
- (id)mappingForElement:(id)arg1;
- (id)mappingForTouchpad:(id)arg1;
- (id)mappingKeyForElement:(id)arg1;
- (void)observeDefaultsKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeDefaultsKeyPaths:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)populateElementSettings;
- (void)refreshSettingsExist;
- (void)registerForSettingsCustomized;
- (void)restoreElementMappingToDefault;
- (void)saveBool:(bool)arg1 forKey:(id)arg2;
- (void)saveObject:(id)arg1 forKey:(id)arg2;
- (bool)screenShotEnabled;
- (bool)serialized;
- (void)setCustomizationsEnabled:(bool)arg1;
- (void)setCustomized:(bool)arg1;
- (void)setHapticsEnabled:(bool)arg1;
- (void)setMappingForElement:(id)arg1 toElement:(id)arg2;
- (void)setScreenShotEnabled:(bool)arg1;
- (void)setSerialized:(bool)arg1;
- (void)setSettingsChangedHandler:(id /* block */)arg1;
- (void)setSettingsID:(unsigned long long)arg1;
- (void)setVideoRecordingEnabled:(bool)arg1;
- (id /* block */)settingsChangedHandler;
- (id)settingsForElement:(id)arg1;
- (unsigned long long)settingsID;
- (id)staticDefaultValues;
- (id)suiteNameForBundleIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)unregisterForSettingsCustomized;
- (bool)videoRecordingEnabled;

@end