/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryShelf : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic) long long type;

+ (id)shelfWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)setType:(long long)arg1;
- (long long)type;

@end