/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage> {
    NSString * _account;
    NSDate * _date;
    NSString * _identifier;
    NSData * _lastOrderingCloudKitRecordMetadata;
    NSData * _lastOrderingData;
    NSData * _serverChangeTokenData;
    NSData * _syncEngineMetadata;
    NSData * _syncFlagsCloudKitRecordMetadata;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *lastOrderingCloudKitRecordMetadata;
@property (nonatomic, copy) NSData *lastOrderingData;
@property (nonatomic, copy) NSData *serverChangeTokenData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *syncEngineMetadata;
@property (nonatomic, copy) NSData *syncFlagsCloudKitRecordMetadata;

+ (id)className;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (void)setSyncToken:(id)arg1 inRealm:(id)arg2;
+ (id)syncTokenInRealm:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)date;
- (id)descriptor;
- (id)identifier;
- (id)lastOrderingCloudKitRecordMetadata;
- (id)lastOrderingData;
- (id)serverChangeTokenData;
- (void)setAccount:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastOrderingCloudKitRecordMetadata:(id)arg1;
- (void)setLastOrderingData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncEngineMetadata:(id)arg1;
- (void)setSyncFlagsCloudKitRecordMetadata:(id)arg1;
- (id)syncEngineMetadata;
- (id)syncFlagsCloudKitRecordMetadata;

@end
