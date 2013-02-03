/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;

@interface CalendarEventDetailAlarmCell : CalendarEventDetailCell {
    UITextLabel *_alert2View;
    UITextLabel *_alertTitleView;
    UITextLabel *_alertView;
    BOOL _editable;
    NSUInteger _visibleItems;
}

+ (BOOL)isEditableForEditModel:(id)arg1;
+ (BOOL)shouldDisplayForEditModel:(id)arg1;

- (id)_alert2View;
- (id)_alertTitleView;
- (id)_alertView;
- (BOOL)canBeDisclosed;
- (void)dealloc;
- (BOOL)hasCustomLayout;
- (id)initWithEditModel:(id)arg1;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (BOOL)setEditModel:(id)arg1;
- (void)updateHighlightColors;
- (NSInteger)viewToDiscloseForModel:(id)arg1;

@end
