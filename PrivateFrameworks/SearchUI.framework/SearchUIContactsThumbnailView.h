/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIContactsThumbnailView : CNAvatarView {
    SFContactImage * _contactImage;
    bool  _useCompactDisplay;
    bool  _usesCompactWidth;
}

@property (nonatomic, retain) SFContactImage *contactImage;
@property (nonatomic) bool useCompactDisplay;
@property (nonatomic) bool usesCompactWidth;

+ (id)avatarSettings;
+ (void)clearAvatarSettings;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)contactImage;
- (void)didMoveToWindow;
- (id)init;
- (void)layoutSubviews;
- (void)setContactImage:(id)arg1;
- (void)setContactImage:(id)arg1 useCompactDisplay:(bool)arg2;
- (void)setUseCompactDisplay:(bool)arg1;
- (void)setUsesCompactWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (bool)useCompactDisplay;
- (bool)usesCompactWidth;

@end
