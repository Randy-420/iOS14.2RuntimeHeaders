/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFStartPageViewController : UIViewController <SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, UINavigationControllerDelegate, _SFStartPagePreviewProviding> {
    <_SFStartPageDataSource> * _dataSource;
    NSHashTable * _dataSourceObservers;
    UINavigationController * _navigationController;
    SFStartPageCollectionViewController * _rootCollectionViewController;
}

@property (nonatomic) <_SFStartPageDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isShowingRootView, nonatomic, readonly) bool showingRootView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingRootView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2;
- (id)previewViewControllerForFolderWithIdentifier:(id)arg1;
- (void)reloadDataAnimatingDifferences:(bool)arg1;
- (id)sectionsForStartPageCollectionViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)showDetailForFolderWithIdentifier:(id)arg1;
- (void)startPageCollectionViewController:(id)arg1 didSelectSiteCardWithIdentifier:(id)arg2;
- (void)startPageCollectionViewController:(id)arg1 didSelectSiteIconWithIdentifier:(id)arg2;
- (bool)startPageCollectionViewController:(id)arg1 isSectionExpanded:(id)arg2;
- (void)startPageCollectionViewController:(id)arg1 toggleSectionExpanded:(id)arg2;
- (id)titleForStartPageCollectionViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end