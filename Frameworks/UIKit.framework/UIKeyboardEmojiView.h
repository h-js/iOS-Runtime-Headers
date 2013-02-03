/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIImageView, UIKeyboardEmoji;

@interface UIKeyboardEmojiView : UIControl {
    UIKeyboardEmoji *_emoji;
    UIImageView *_imageView;
    UIView *_popup;
    UIView *_pressedView;
}

@property(retain) UIView *pressedView; /* unknown property attribute: V_pressedView */
@property(retain) UIImageView *imageView; /* unknown property attribute: V_imageView */
@property(retain) UIView *popup; /* unknown property attribute: V_popup */
@property(retain) UIKeyboardEmoji *emoji; /* unknown property attribute: V_emoji */

+ (id)emojiViewForEmoji:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void)recycleEmojiView:(id)arg1;

- (id)createAndInstallKeyPopupView;
- (void)dealloc;
- (id)emoji;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 emoji:(id)arg2;
- (id)popup;
- (id)pressedView;
- (void)setEmoji:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setEmoji:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPopup:(id)arg1;
- (void)setPressedView:(id)arg1;
- (void)showNormalState;
- (void)showPressedState;
- (void)uninstallPopup;

@end
