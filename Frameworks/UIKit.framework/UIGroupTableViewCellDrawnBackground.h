/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath;

@interface UIGroupTableViewCellDrawnBackground : UIView {
    UIBezierPath *_fillPath;
    NSInteger _sectionLocation;
    NSInteger _selectionStyle;
    UIBezierPath *_strokePath;
}

@property NSInteger sectionLocation; /* unknown property attribute: V_sectionLocation */
@property NSInteger selectionStyle; /* unknown property attribute: V_selectionStyle */

- (void)_createBezierPathWithCornerRadius:(float)arg1 bottomRadius:(float)arg2 animating:(BOOL)arg3;
- (void)_invalidatePaths;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)sectionLocation;
- (NSInteger)selectionStyle;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setSectionLocation:(NSInteger)arg1;
- (void)setSelectionStyle:(NSInteger)arg1;

@end
