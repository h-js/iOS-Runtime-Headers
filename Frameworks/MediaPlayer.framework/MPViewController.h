/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPItem, MPTransitionController, NSTimer, MPViewController;

@interface MPViewController : UIViewController {
    unsigned int _appearing : 1;
    unsigned int _observesApplicationSuspendResumeEventsOnly : 1;
    id _delegate;
    NSTimer *_idleTimerDisablerTimer;
    MPItem *_item;
    NSInteger _orientation;
    MPTransitionController *_pushedTransitionController;
    MPViewController *_pushedViewController;
}

@property(getter=idleTimerDisabled) BOOL idleTimerDisabled; /* unknown property attribute: SsetIdleTimerDisabled: */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property id delegate;
@property BOOL observesApplicationSuspendResumeEventsOnly;

- (void)_disableIdleTimer:(id)arg1;
- (void)_popTransitionEnded:(id)arg1;
- (void)_pushTransitionEnded:(id)arg1;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)beginIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)canDisplayItem:(id)arg1 withOrientation:(NSInteger)arg2;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeToOrientation:(NSInteger)arg1;
- (void)endIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)idleTimerDisabled;
- (id)init;
- (BOOL)isAppearing;
- (id)item;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (BOOL)observesApplicationSuspendResumeEventsOnly;
- (NSInteger)orientation;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (void)restoreOverlayViewAfterTransition:(id)arg1;
- (void)setAppearing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)setOrientation:(NSInteger)arg1;
- (void)setView:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willChangeToOrientation:(NSInteger)arg1;

@end
