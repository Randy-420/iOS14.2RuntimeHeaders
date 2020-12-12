/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileWarning : NSObject <NSSecureCoding> {
    bool  _isLongForm;
    NSString * _localizedBody;
    NSString * _localizedTitle;
}

@property (nonatomic) bool isLongForm;
@property (nonatomic, retain) NSString *localizedBody;
@property (nonatomic, retain) NSString *localizedTitle;

+ (bool)supportsSecureCoding;
+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(bool)arg3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProfileWarning:(id)arg1;
- (bool)isLongForm;
- (id)localizedBody;
- (id)localizedTitle;
- (id)serializedDictionary;
- (void)setIsLongForm:(bool)arg1;
- (void)setLocalizedBody:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end