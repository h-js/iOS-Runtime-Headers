/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, UILabel, UIWindow, NSMutableArray, UIView, <UIModalViewDelegate>;

@interface UIModalView : UIView <UITextFieldDelegate> {
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int extra : 21; 
    float _bodyTextHeight;
    UILabel *_bodyTextLabel;
    NSMutableArray *_buttons;
    NSInteger _cancelButton;
    id _context;
    NSInteger _defaultButton;
    <UIModalViewDelegate> *_delegate;
    UIView *_dimView;
    UIWindow *_dimWindow;
    NSInteger _dismissButtonIndex;
    NSInteger _firstOtherButton;
    UIView *_keyboard;
    } _modalViewFlags;
    float _startY;
    UILabel *_subtitleLabel;
    NSInteger _suspendTag;
    UIView *_table;
    UILabel *_taglineTextLabel;
    NSMutableArray *_textFields;
    UILabel *_titleLabel;
    UIToolbar *_toolbar;
}

@property <UIModalViewDelegate> *delegate;
@property(copy) NSString *message;
@property(copy) NSString *title;
@property NSInteger cancelButtonIndex;
@property(readonly) NSInteger numberOfButtons;
@property(getter=isVisible,readonly) BOOL visible;

+ (id)_popupAlertBackground;
+ (BOOL)atLeastOneAlertVisible;
+ (struct CGSize { float x1; float x2; })minimumSize;
+ (void)noteOrientationChangingTo:(NSInteger)arg1;
+ (id)topMostAlert;
+ (id)visibleAlert;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitle:(id)arg1;
- (void)_adjustLabelFontSizes;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_appSuspended:(id)arg1;
- (float)_bottomVerticalInset;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_buttonClicked:(id)arg1;
- (float)_buttonHeight;
- (BOOL)_canShowAlerts;
- (void)_cleanupAfterPopupAnimation;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (NSInteger)_currentOrientation;
- (id)_dimView;
- (BOOL)_dimsBackground;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_isAnimating;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (float)_maxHeight;
- (BOOL)_needsKeyboard;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_performPopup:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_repopup;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)_setFirstOtherButtonIndex:(NSInteger)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (void)_setupInitialFrame;
- (void)_setupTitleStyle;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (float)_titleHorizontalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (NSInteger)addButtonWithTitle:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (NSInteger)alertSheetStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (BOOL)blocksInteraction;
- (NSInteger)bodyMaxLineCount;
- (id)bodyText;
- (NSInteger)buttonCount;
- (id)buttonTitleAtIndex:(NSInteger)arg1;
- (id)buttons;
- (NSInteger)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)defaultButton;
- (NSInteger)defaultButtonIndex;
- (id)delegate;
- (id)destructiveButton;
- (BOOL)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(NSInteger)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (BOOL)isBodyTextTruncated;
- (BOOL)isVisible;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(BOOL)arg1;
- (id)message;
- (NSInteger)numberOfButtons;
- (NSInteger)numberOfRows;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (BOOL)runsModal;
- (void)setAlertSheetStyle:(NSInteger)arg1;
- (void)setBlocksInteraction:(BOOL)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(NSInteger)arg1;
- (void)setCancelButtonIndex:(NSInteger)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDefaultButtonIndex:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButton:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(NSInteger)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(NSInteger)arg1;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(NSInteger)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (id)subtitle;
- (NSInteger)suspendTag;
- (id)table;
- (BOOL)tableShouldShowMinimumContent;
- (id)textField;
- (id)textFieldAtIndex:(NSInteger)arg1;
- (NSInteger)textFieldCount;
- (id)title;
- (NSInteger)titleMaxLineCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;

@end
