/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyMember : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) unsigned long long age;
@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSNumber *dsid;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool hasAskToBuyEnabled;
@property (nonatomic, readonly) bool hasLinkediTunesAccount;
@property (nonatomic, readonly) bool hasParentalControlsEnabled;
@property (nonatomic, readonly, copy) NSString *hashedDSID;
@property (nonatomic, readonly) NSNumber *iTunesAccountDSID;
@property (nonatomic, readonly, copy) NSString *iTunesAccountUsername;
@property (nonatomic, readonly, copy) NSString *iTunesNotLinkedMessage;
@property (nonatomic, readonly, copy) NSDate *invitationDate;
@property (nonatomic, readonly, copy) NSString *inviteEmail;
@property (nonatomic, readonly) bool isChildAccount;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) bool isOrganizer;
@property (nonatomic, readonly) bool isParent;
@property (nonatomic, readonly, copy) NSDate *joinedDate;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSNumber *memberSortOrder;
@property (nonatomic, readonly) long long memberType;
@property (nonatomic, readonly, copy) NSString *memberTypeDisplayString;
@property (nonatomic, readonly, copy) NSString *memberTypeString;
@property (nonatomic, readonly, copy) NSString *statusString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dateWithEpochString:(id)arg1;
- (bool)_nilEqualProperty:(id)arg1 with:(id)arg2;
- (unsigned long long)age;
- (id)altDSID;
- (id)appleID;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)firstName;
- (bool)hasAskToBuyEnabled;
- (bool)hasLinkediTunesAccount;
- (bool)hasParentalControlsEnabled;
- (unsigned long long)hash;
- (id)hashedDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountUsername;
- (id)iTunesNotLinkedMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)invitationDate;
- (id)inviteEmail;
- (bool)isChildAccount;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFamilyMember:(id)arg1;
- (bool)isMe;
- (bool)isOrganizer;
- (bool)isParent;
- (id)joinedDate;
- (id)lastName;
- (id)memberSortOrder;
- (long long)memberType;
- (id)memberTypeDisplayString;
- (id)memberTypeString;
- (id)statusString;

@end