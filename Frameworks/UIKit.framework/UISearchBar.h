/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UIButton, <UISearchBarDelegate>, UITextField, UIColor;

@interface UISearchBar : UIView {
    struct { 
        unsigned int barStyle : 3; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int showsCancelButton : 1; 
    UIButton *_cancelButton;
    <UISearchBarDelegate> *_delegate;
    UILabel *_promptLabel;
    } _searchBarFlags;
    UITextField *_searchField;
    UIColor *_tintColor;
}

@property(retain) UIColor *tintColor; /* unknown property attribute: V_tintColor */
@property <UISearchBarDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(copy) NSString *placeholder;
@property(copy) NSString *prompt;
@property(copy) NSString *text;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property NSInteger barStyle;
@property NSInteger keyboardType;
@property BOOL showsBookmarkButton;
@property BOOL showsCancelButton;

- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEndEditing;
- (void)_searchFieldReturnPressed;
- (void)_setupCancelButton;
- (void)_setupPromptLabel;
- (void)_setupSearchField;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (NSInteger)barStyle;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (NSInteger)keyboardType;
- (void)layoutSubviews;
- (id)placeholder;
- (id)prompt;
- (BOOL)resignFirstResponder;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setShowsBookmarkButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)showsBookmarkButton;
- (BOOL)showsCancelButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)tintColor;

@end
