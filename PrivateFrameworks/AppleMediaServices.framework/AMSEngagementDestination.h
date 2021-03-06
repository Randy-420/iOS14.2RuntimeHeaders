/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementDestination : NSObject <NSSecureCoding> {
    bool  _allowsResponse;
    NSString * _identifier;
}

@property (nonatomic) bool allowsResponse;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsResponse;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setAllowsResponse:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
