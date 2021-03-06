/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversationList, CKConversationSearcher, CKMessagesController, CKScheduledUpdater, NSIndexPath, NSString, UIBarButtonItem, UITableView, UIToolbar;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate> {
    unsigned int _isVisible : 1;
    unsigned int _willRotate : 1;
    UIToolbar *_buttonBar;
    CKConversationList *_conversationList;
    UIBarButtonItem *_currentEditButtonItem;
    CKMessagesController *_messagesController;
    NSIndexPath *_previouslySelectedIndexPath;
    CKConversationSearcher *_searcher;
    UITableView *_table;
    CKScheduledUpdater *_updater;
    unsigned long long _willBeMarkedReadCount;
    bool_isInitialLoad;
    bool_isShowingSwipeDeleteConfirmation;
}

@property CKConversationList * conversationList;
@property(retain) UIBarButtonItem * currentEditButtonItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isShowingSwipeDeleteConfirmation;
@property CKMessagesController * messagesController;
@property(retain) NSIndexPath * previouslySelectedIndexPath;
@property(readonly) bool shouldShowPendingCell;
@property(readonly) Class superclass;
@property(retain) CKScheduledUpdater * updater;

- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)_groupsChanged:(id)arg1;
- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfDefaultConversation;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)_shouldKeepSelection;
- (void)_updateToolbarItems;
- (void)accessibilityLargeTextDidChange;
- (void)applicationWillSuspend;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)composeButtonClicked:(id)arg1;
- (id)conversationList;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (id)currentEditButtonItem;
- (void)dealloc;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)hideSearchUI;
- (id)init;
- (id)inputAccessoryView;
- (bool)isShowingSwipeDeleteConfirmation;
- (void)loadView;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (id)messagesController;
- (void)noteUnreadCountsChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)previouslySelectedIndexPath;
- (void)scrollToTop;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (id)searcherContentsController:(id)arg1;
- (void)searcherDidEndSearch:(id)arg1;
- (void)searcherWillBeginEditing:(id)arg1;
- (void)searcherWillEndSearch:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)selectDefaultConversationAnimated:(bool)arg1;
- (void)setConversationList:(id)arg1;
- (void)setCurrentEditButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIsShowingSwipeDeleteConfirmation:(bool)arg1;
- (void)setMessagesController:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setUpdater:(id)arg1;
- (bool)shouldShowPendingCell;
- (void)significantTimeChange;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateConversationList;
- (void)updateConversationSelection;
- (void)updateCurrentEditButton;
- (void)updateNavigationItems;
- (void)updateTitle;
- (id)updater;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidUnload;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
