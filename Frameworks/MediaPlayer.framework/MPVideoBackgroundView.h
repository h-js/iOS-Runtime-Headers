/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UIView, UITextLabel;

@interface MPVideoBackgroundView : UIView {
    UIView *_hackView;
    UIImageView *_iconView;
    UIImageView *_imageView;
    UITextLabel *_infoSubTitle;
    UITextLabel *_infoTitle;
    NSInteger _orientation;
}

- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(NSInteger)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutForCurrentOrientation;
- (void)layoutSubviews;
- (void)setInformationalTextShown:(BOOL)arg1;
- (void)setInformationalTitle:(id)arg1 infoSubTitle:(id)arg2;
- (void)setOrientation:(NSInteger)arg1;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;
- (BOOL)shouldShowInformationalTextForOrientation:(NSInteger)arg1;

@end
