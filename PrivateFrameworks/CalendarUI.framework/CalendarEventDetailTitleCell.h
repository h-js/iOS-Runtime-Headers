/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;

@interface CalendarEventDetailTitleCell : CalendarEventDetailCell {
    UITextLabel *_dateView;
    UITextLabel *_locationView;
    UITextLabel *_recurrenceView;
    UITextLabel *_statusView;
    UITextLabel *_timeView;
    UITextLabel *_titleView;
    NSUInteger _visibleItems;
}

- (id)_dateView;
- (id)_locationView;
- (id)_recurrenceView;
- (id)_statusView;
- (id)_timeView;
- (id)_titleView;
- (void)dealloc;
- (id)initWithEditModel:(id)arg1;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (BOOL)setEditModel:(id)arg1;

@end
