/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.SearchViewController : UIViewController <TSSearchResultsPanable, TSSearchResultsProviderType, TSTabBarSplitViewAutoObserver, UICollectionViewDelegate, UISearchBarDelegate, UISearchControllerDelegate> {
    void blueprintViewController;
    void eventHandler;
    void parsecQueryID;
    void searchAction;
    void searchBar;
    void sharingActivityProviderFactory;
    void styler;
    void toolbarManager;
}

@property (nonatomic, readonly) bool isSearchResultsPane;

- (void).cxx_destruct;
- (void)cancelSearch;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSearchResultsPane;
- (void)performSearchForText:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tabBarSplitViewDidUnobsureView;
- (void)tabBarSplitViewWillObsureView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end