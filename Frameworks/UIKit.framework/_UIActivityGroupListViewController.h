/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UILabel;

@interface _UIActivityGroupListViewController : UICollectionViewController {
    NSArray *_activityGroupViewControllers;
    UILabel *_placeholderLabel;
    NSArray *_visibleActivityGroupViewControllers;
    bool_darkStyleOnLegacyApp;
    bool_embedded;
}

@property(copy) NSArray * activityGroupViewControllers;
@property bool darkStyleOnLegacyApp;
@property(getter=isEmbedded) bool embedded;
@property(retain) UILabel * placeholderLabel;
@property(copy) NSArray * visibleActivityGroupViewControllers;

- (id)activityGroupViewControllers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)darkStyleOnLegacyApp;
- (void)dealloc;
- (double)displayHeight;
- (id)initWithActivityGroupViewControllers:(id)arg1 embedded:(bool)arg2;
- (bool)isEmbedded;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderLabel;
- (double)preferredContentHeightForViewController:(id)arg1;
- (void)setActivityGroupViewControllers:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setEmbedded:(bool)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setVisibleActivityGroupViewControllers:(id)arg1;
- (bool)shouldShowNoActionsPlaceholder;
- (void)updateVisibleActivityGroupViewControllers;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visibleActivityGroupViewControllers;

@end
