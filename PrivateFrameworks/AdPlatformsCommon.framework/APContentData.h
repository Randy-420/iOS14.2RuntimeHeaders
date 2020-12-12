/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
 */

@interface APContentData : NSObject <NSSecureCoding> {
    NSString * _brandName;
    NSString * _campaignText;
    NSUUID * _contextIdentifier;
    NSString * _disclosureRendererPayload;
    NSURL * _disclosureURL;
    NSError * _error;
    NSDate * _expirationDate;
    NSString * _humanReadableName;
    NSString * _identifier;
    NSString * _journeyIdentifier;
    NSDictionary * _metadata;
    unsigned long long  _minimumTimeBetweenPresentation;
    NSMutableSet * _representations;
    long long  _serverUnfilledReason;
    NSString * _uniqueIdentifier;
}

@property (retain) NSString *brandName;
@property (retain) NSString *campaignText;
@property (retain) NSUUID *contextIdentifier;
@property (retain) NSString *disclosureRendererPayload;
@property (retain) NSURL *disclosureURL;
@property (retain) NSError *error;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *humanReadableName;
@property (retain) NSString *identifier;
@property (retain) NSString *journeyIdentifier;
@property (retain) NSDictionary *metadata;
@property unsigned long long minimumTimeBetweenPresentation;
@property (retain) NSSet *representations;
@property long long serverUnfilledReason;
@property (retain) NSString *uniqueIdentifier;

+ (id)mockDataFromContext:(id)arg1 types:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRepresentation:(id)arg1;
- (id)brandName;
- (id)campaignText;
- (id)contextIdentifier;
- (id)disclosureRendererPayload;
- (id)disclosureURL;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)expirationDate;
- (id)getRepresentation;
- (id)humanReadableName;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)journeyIdentifier;
- (id)metadata;
- (unsigned long long)minimumTimeBetweenPresentation;
- (void)removeRepresentation:(id)arg1;
- (id)representationWithIdentifier:(id)arg1;
- (id)representations;
- (long long)serverUnfilledReason;
- (void)setBrandName:(id)arg1;
- (void)setCampaignText:(id)arg1;
- (void)setContextIdentifier:(id)arg1;
- (void)setDisclosureRendererPayload:(id)arg1;
- (void)setDisclosureURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHumanReadableName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setJourneyIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinimumTimeBetweenPresentation:(unsigned long long)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setServerUnfilledReason:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end