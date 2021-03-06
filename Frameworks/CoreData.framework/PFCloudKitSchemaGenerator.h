/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSchemaGenerator : NSObject {
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    CKRecordZone * _recordZone;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) CKRecordZone *recordZone;

+ (id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2;
+ (id)representativeValueFor:(id)arg1;

- (void)dealloc;
- (id)initWithRecordZone:(id)arg1 mirroringOptions:(id)arg2;
- (id)mirroringOptions;
- (id)newManagedObjectContextForCoordinator:(id)arg1;
- (id)newRepresentativeRecordsForStore:(id)arg1 error:(id*)arg2;
- (void)populateRelationshipsOnObject:(id)arg1 inStore:(id)arg2 withCache:(id)arg3;
- (void)populateValuesOnObject:(id)arg1;
- (id)recordZone;
- (id)representativeObjectForEntity:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 cache:(id)arg4 populate:(bool)arg5;

@end
