/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIProgressHUD, TPCameraPushButton, PLCropLCDLayer, TPPushButton, TPBottomDualButtonBar;

@interface PLCropOverlay : UIView {
    TPBottomDualButtonBar *_bottomBar;
    TPPushButton *_cancelButton;
    id _delegate;
    UIProgressHUD *_hud;
    PLCropLCDLayer *_lcd;
    UIImageView *_lcdImage;
    TPCameraPushButton *_okButton;
}

- (void)_backgroundSavePhoto:(id)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(NSInteger)arg4;
- (void)cancelButtonClicked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (id)dictionaryWithCropResultsFromImageScroller:(id)arg1 withOptions:(NSInteger)arg2;
- (void)dismiss;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 setCropTitle:(id)arg2 offsettingStatusBar:(BOOL)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 setCropTitle:(id)arg2;
- (void)okButtonClicked:(id)arg1;
- (void)removeProgress;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scrollIndicatorRect;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setOKButtonColor:(NSInteger)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setProgressDone;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)statusBarHeightDidChange:(id)arg1;

@end
