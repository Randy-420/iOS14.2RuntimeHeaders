/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaper : NSObject <NSCopying> {
    NSString * _assetIdentifier;
    HFCroppedWallpaperInfo * _cropInfo;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, copy) HFCroppedWallpaperInfo *cropInfo;
@property (nonatomic, readonly) long long type;

+ (struct CGSize { double x1; double x2; })contentSizeForWallpaper;
+ (id)customWallpaperWithAssetIdentifier:(id)arg1;
+ (struct CGSize { double x1; double x2; })size;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setCropInfo:(id)arg1;
- (id)sliceIdentifierForVariant:(long long)arg1;
- (long long)type;
- (id)wallpaperIdentifier;

@end