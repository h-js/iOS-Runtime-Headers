/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIProgressIndicator, UIColor, MPTVOutWindow, UIAlertView, MPBackstopView, MPVideoBackgroundView;

@interface MPVideoViewController : MPViewController <MPBackstopViewTarget, MPVideoTransferViewController, UIModalViewDelegate> {
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _ownsStatusBar : 1;
    unsigned int _ownsVideoView : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _tvOutEnabled : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    UIAlertView *_alertSheet;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    MPBackstopView *_backstopView;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    UIProgressIndicator *_loadingIndicator;
    NSUInteger _scaleMode;
    MPTVOutWindow *_tvOutWindow;
    NSUInteger _visibleParts;
}

@property(retain) UIColor *backstopColor; /* unknown property attribute: V_backstopColor */
@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property NSUInteger scaleMode; /* unknown property attribute: V_scaleMode */
@property NSUInteger disabledParts; /* unknown property attribute: V_disabledParts */
@property NSUInteger desiredParts; /* unknown property attribute: V_desiredParts */
@property(readonly) UIView *backgroundView;
@property(retain,readonly) MPVideoView *videoView;
@property BOOL TVOutEnabled;
@property BOOL canAnimateControlsOverlay;
@property(readonly) BOOL canChangeScaleMode;
@property BOOL canShowControlsOverlay;
@property BOOL disableControlsAutohide;
@property BOOL displayPlaybackErrorAlerts;
@property BOOL ownsStatusBar;
@property(readonly) BOOL viewControllerWillRequestExit;

+ (BOOL)isPlayingToTVOut;
+ (id)sharedVideoView:(BOOL)arg1;

- (BOOL)TVOutEnabled;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (void)_hideLoadingForStateChange:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_popForTimeJump:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_tvOutCapabilityChangedNotification;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateIdleTimerDisabledFromPlaybackState:(NSUInteger)arg1;
- (void)_videoVideo_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_playbackStateChangedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (id)backgroundView;
- (id)backstopColor;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canChangeScaleMode;
- (BOOL)canShowControlsOverlay;
- (void)chapterList:(id)arg1 selectedChapter:(NSUInteger)arg2;
- (id)createAlternateTracksTransition;
- (id)createChapterFlipTransition;
- (void)dealloc;
- (NSUInteger)desiredParts;
- (BOOL)disableControlsAutohide;
- (NSUInteger)disabledParts;
- (BOOL)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)handleScaleModeChange;
- (id)init;
- (void)loadView;
- (void)modalView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (BOOL)ownsStatusBar;
- (void)removeChildViewController:(id)arg1;
- (NSUInteger)scaleMode;
- (void)setBackstopColor:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setOwnsVideoView:(BOOL)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(NSUInteger)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)showAlternateTracksController:(id)arg1;
- (void)showChaptersController;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (void)toggleScaleMode:(BOOL)arg1;
- (id)videoView;
- (BOOL)viewControllerWillRequestExit;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (NSUInteger)visibleParts;

@end
