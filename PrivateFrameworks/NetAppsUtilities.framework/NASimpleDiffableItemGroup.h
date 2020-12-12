/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NASimpleDiffableItemGroup : NSObject <NADiffableItemGroup, NSCopying> {
    NSArray * _diffableItems;
    NSString * _groupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *diffableItems;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diffableItems;
- (id)groupIdentifier;
- (void)setDiffableItems:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end