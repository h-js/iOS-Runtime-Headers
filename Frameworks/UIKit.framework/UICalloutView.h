/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIPushButton, UILabel, UIView, NSMutableArray, NSTimer;

@interface UICalloutView : UIControl {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGPoint { 
            float x; 
            float y; 
        } offset; 
        NSInteger position; 
        struct CGPoint { 
            float x; 
            float y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } desiredBounds; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int reserved : 29; 
    } _anchor;
    UIImageView *_bottomAnchor;
    UIPushButton *_button;
    id _delegate;
    NSMutableArray *_fadeInViews;
    NSMutableArray *_fadeOutViews;
    } _flags;
    } _frame;
    NSTimer *_layoutAnimationTimer;
    UIImageView *_leftBackground;
    UIImageView *_leftCap;
    UIView *_leftView;
    UIImageView *_rightBackground;
    UIImageView *_rightCap;
    UILabel *_subtitle;
    UILabel *_temporary;
    UILabel *_title;
    UIImageView *_topAnchor;
}

@property(retain) UIView *leftView; /* unknown property attribute: V_leftView */
@property NSInteger subtitleLineBreakMode;
@property NSInteger titleLineBreakMode;

+ (id)_backgroundImage;
+ (id)_bottomAnchorImage;
+ (id)_buttonImage;
+ (id)_buttonImagePressed;
+ (id)_leftCapImage;
+ (id)_rightCapImage;
+ (id)_topAnchorImage;
+ (float)defaultHeight;
+ (id)sharedCalloutView;

- (void)_fadeViewsIn:(BOOL)arg1;
- (void)_layoutAnimation;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_markDidMoveCalled;
- (void)_scheduleLayoutAnimation;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)_setLeftView:(id)arg1;
- (void)_setOriginForScale:(float)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)completeBounceAnimation;
- (void)dealloc;
- (id)delegate;
- (void)fadeOutWithDuration:(float)arg1;
- (void)getActualAnchorPoint:(struct CGPoint { float x1; float x2; }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 position:(NSInteger*)arg3 forDesiredAnchorPoint:(struct CGPoint { float x1; float x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)leftView;
- (struct CGPoint { float x1; float x2; })offset;
- (void)removeTarget:(id)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animate:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLineBreakMode:(NSInteger)arg1;
- (void)setTemporaryTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLineBreakMode:(NSInteger)arg1;
- (id)subtitle;
- (NSInteger)subtitleLineBreakMode;
- (id)temporaryTitle;
- (id)title;
- (NSInteger)titleLineBreakMode;

@end
