/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageUI.framework/MessageUI
 */

@class UILabel, AtomBackgroundView;

@interface AtomView : UIDefaultKeyboardInput {
    unsigned int _disclosure : 1;
    unsigned int _needsCentering : 1;
    AtomBackgroundView *_background;
    id _delegate;
    UILabel *_label;
    float _width;
}

+ (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })backgroundImageSlicesWithDisclosure:(BOOL)arg1;
+ (id)backgroundImageWithDisclosure:(BOOL)arg1 selected:(BOOL)arg2;
+ (float)defaultHeight;
+ (float)horizontalPadding;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)preferredWidth;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)setShowsDisclosure:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)showBackground:(BOOL)arg1;
- (id)title;

@end
