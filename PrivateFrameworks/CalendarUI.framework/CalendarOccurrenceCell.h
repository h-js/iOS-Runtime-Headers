/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UIImageView, NSString;

@interface CalendarOccurrenceCell : UITableCell {
    unsigned int _isAllDay : 1;
    unsigned int _tentative : 1;
    unsigned int _isEndDate : 1;
    unsigned int _indentsWithoutDot : 1;
    unsigned int _designator : 2;
    UIImageView *_iconView;
    NSString *_location;
    NSString *_timeString;
    NSString *_title;
}

+ (void)_calculateWidths;
+ (float)defaultHeight;
+ (float)hourWidth;
+ (float)timeWidthIncludingDots:(BOOL)arg1;

- (void)dealloc;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 location:(id)arg3 startDate:(double)arg4 allDay:(BOOL)arg5 tentative:(BOOL)arg6;
- (void)layoutSubviews;
- (void)setDotColor:(id)arg1;
- (void)setIndentsForMissingDot:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTitle:(id)arg1;

@end
