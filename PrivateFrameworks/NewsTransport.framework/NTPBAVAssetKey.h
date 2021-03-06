/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAVAssetKey : PBCodable <FCAVAssetKeyType, FCKeyValueStoreCoding, NSCopying> {
    NTPBDate * _createdAt;
    NSData * _data;
    NTPBDate * _expiresAt;
    NSString * _identifier;
}

@property (nonatomic, retain) NTPBDate *createdAt;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, retain) NTPBDate *expiresAt;
@property (nonatomic, readonly) bool hasCreatedAt;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasExpiresAt;
@property (nonatomic, readonly) bool hasIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isExpired;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expiresAt;
- (bool)hasCreatedAt;
- (bool)hasData;
- (bool)hasExpiresAt;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setData:(id)arg1;
- (void)setExpiresAt:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)creationDate;
- (id)expirationDate;
- (bool)isExpired;
- (void)writeToKeyValuePair:(id)arg1;

@end
