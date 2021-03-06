/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MusicPlaylistActionsView, NSOperationQueue, NSString, UIActionSheet;

@interface MusicPlaylistSongsViewController : MusicSongsViewController <MusicPickerOverlayDelegate, UIActionSheetDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    MusicPlaylistActionsView *_actionsView;
    } _actionsViewContentInsetAdditions;
    UIActionSheet *_clearActionSheet;
    UIActionSheet *_deleteActionSheet;
    NSOperationQueue *_downloadabilityOperationQueue;
    long long _downloadableSongCount;
    bool_isDownloading;
    bool_isTransitioning;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) long long downloadableSongCount;
@property(readonly) unsigned long long hash;
@property(readonly) bool isDownloading;
@property(readonly) Class superclass;

+ (bool)_shouldDisplayActions;
+ (bool)_shouldPopWhenEmpty;
+ (bool)_supportsSearch;
+ (id)actionCellConfigurationClasses;

- (void).cxx_destruct;
- (void)_addItemsAction:(id)arg1;
- (bool)_allowsAddingSongs;
- (bool)_allowsEditing;
- (bool)_allowsIndividualTrackDeletion;
- (void)_clearAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_doneEditingAction:(id)arg1;
- (void)_downloadAllButtonAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_geniusNewAction:(id)arg1;
- (void)_geniusRefreshAction:(id)arg1;
- (void)_geniusSaveAction:(id)arg1;
- (id)_playlist;
- (void)_playlistSongs_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_playlistTitle;
- (id)_seedItem;
- (void)_updateActionsView;
- (void)_updateCloudPlaylist;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(bool)arg1 animated:(bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (long long)downloadableSongCount;
- (id)initWithDataSource:(id)arg1;
- (bool)isDownloading;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (void)reloadData;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
