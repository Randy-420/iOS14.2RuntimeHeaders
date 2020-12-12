/* Generated by RuntimeBrowser.
 */

@protocol PXPhotosSectionBodyLayoutProvider <NSObject>

@required

- (void)configureSectionBodyLayout:(PXGLayout<PXPhotosSectionedLayoutBody> *)arg1 inAssetSectionLayout:(PXAssetsSectionLayout *)arg2 forSectionedLayout:(PXPhotosSectionedLayout *)arg3;
- (PXGLayout<PXPhotosSectionedLayoutBody> *)createSectionBodyLayoutForSectionedLayout:(PXPhotosSectionedLayout *)arg1 dataSource:(PXAssetsDataSource *)arg2 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3 spec:(PXPhotosLayoutSpec *)arg4 outWantsDecoration:(bool*)arg5;
- (<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *)invalidationDelegate;
- (void)setInvalidationDelegate:(id <PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)arg1;
- (bool)shouldPreventFaultOutOfBodyLayout:(PXGLayout<PXPhotosSectionedLayoutBody> *)arg1 inAssetSectionLayout:(PXAssetsSectionLayout *)arg2;

@end