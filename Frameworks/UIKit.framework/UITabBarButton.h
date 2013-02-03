/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UILabel, UITabBarButtonBadge, UITabBarSelectionIndicatorView;

@interface UITabBarButton : UIControl {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UITabBarButtonBadge *_badge;
    BOOL _badgeAnimated;
    BOOL _barHeight;
    } _hitRect;
    UIView *_info;
    } _infoInsets;
    UILabel *_label;
    BOOL _onState;
    UITabBarSelectionIndicatorView *_selectedIndicator;
}

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
+ (id)_donePushButton;

- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_isOn;
- (void)_positionBadge;
- (id)_scriptingInfo;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_setBarHeight:(float)arg1;
- (void)_setOn:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabBarHitRect;
- (BOOL)_useBarHeight;
- (void)dealloc;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;

@end
