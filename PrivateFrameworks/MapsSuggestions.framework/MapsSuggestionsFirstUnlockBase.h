/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)hasDeviceBeenUnlocked;
- (id)objectForJSON;
- (bool)shouldRun;
- (void)triggerFired:(id)arg1;
- (id)uniqueName;

@end