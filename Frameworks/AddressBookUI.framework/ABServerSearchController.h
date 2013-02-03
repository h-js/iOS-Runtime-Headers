/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UILabel, NSArray, ABDimmingView, UISearchField, ABGroupWrapper, DASearchQuery, UIView, UIImageView, UITableView;

@interface ABServerSearchController : ABContentController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, DASearchQueryConsumer> {
    struct { 
        unsigned int resumeToEditing : 1; 
        unsigned int isEndingEditingWithAnimation : 1; 
        unsigned int showingCardForPerson : 1; 
        unsigned int isSearching : 1; 
        unsigned int hasResults : 1; 
        unsigned int hasError : 1; 
        unsigned int unused : 26; 
    UITableView *_completionTable;
    NSArray *_currentResultsAsPeople;
    DASearchQuery *_currentSearchQuery;
    NSArray *_currentSearchResults;
    } _flags;
    UILabel *_informationalOverlay;
    ABDimmingView *_keyboardDimmingView;
    UISearchField *_searchField;
    UITableView *_searchResultsTable;
    UIView *_searchView;
    ABGroupWrapper *_selectedGroupWrapper;
    UIImageView *_shadowView;
}

@property(retain) ABGroupWrapper *selectedGroupWrapper; /* unknown property attribute: V_selectedGroupWrapper */
@property(readonly) UIView *navigationTitleView;

- (void)_beginSearch;
- (void)_clearSearchResults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_completionTableFrameWithKeyboardVisible;
- (void)_deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)_endEditingAnimationDidFinish;
- (void)_endSearchFieldEditing;
- (NSInteger)_errorForDAStatusCode:(NSInteger)arg1;
- (id)_localizedStringForError:(NSInteger)arg1;
- (void)_searchFieldDidChange:(id)arg1;
- (id)_searchString;
- (void)_setCurrentSearchResults:(id)arg1 error:(NSInteger)arg2 callDelegate:(BOOL)arg3;
- (void)_setCurrentSearchResults:(id)arg1 error:(NSInteger)arg2;
- (void)_setCurrentSearchResults:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)navigationTitleView;
- (void)resultsReceived:(id)arg1 forSearchQuery:(id)arg2 withStatus:(NSInteger)arg3;
- (id)selectedGroupWrapper;
- (void)setSelectedGroupWrapper:(id)arg1;
- (NSInteger)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tapInsideDimmingView:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
