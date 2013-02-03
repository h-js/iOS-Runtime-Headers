/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUNoStoreView, NSTimer, SUTabBarController, SUFullScreenTransitionController, NSMutableSet, UIWindow;

@interface SUApplication : UIApplication <ISNetworkMonitor, UIApplicationDelegate, UITabBarControllerDelegate> {
    unsigned int _dontUpdateHistory : 1;
    unsigned int _receivedURLBag : 1;
    NSUInteger _delaySuspendCount;
    NSUInteger _downloadTypes;
    SUFullScreenTransitionController *_fullScreenController;
    BOOL _hasSupportedStoreFront;
    NSMutableSet *_longLivedViewControllers;
    NSUInteger _networkActiveCount;
    NSTimer *_networkStartupTimer;
    SUNoStoreView *_noStoreView;
    BOOL _quitOnSuspend;
    SUTabBarController *_tabBarController;
    UIWindow *_window;
}

@property NSUInteger downloadTypes; /* unknown property attribute: V_downloadTypes */
@property(getter=isFullscreen,readonly) BOOL fullscreen;
@property(readonly) BOOL shouldShowNoStoreView;

- (id)_defaultHistoryItems:(BOOL*)arg1;
- (void)_hideNoStoreView;
- (void)_networkWakeupTimer:(id)arg1;
- (BOOL)_restoreNavigationPath;
- (BOOL)_restoreNavigationPathFromButtonIndex:(NSInteger)arg1;
- (BOOL)_restoreNavigationPathFromTag:(unsigned long)arg1;
- (id)_resumableViewController;
- (void)_resumeViewControllers:(BOOL)arg1;
- (void)_selectRootControllerWithTag:(unsigned long)arg1;
- (void)_showNoStoreView;
- (void)_storeFrontCapabilitiesChanged:(id)arg1;
- (void)_suspendViewControllers:(BOOL)arg1;
- (id)_swizzledURL:(id)arg1 forClient:(NSInteger)arg2;
- (void)_updateNoStoreViewVisibility;
- (BOOL)_useLegacyEventSystem;
- (BOOL)allowTerminate;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationResume:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (void)applicationWillSuspend;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillTerminate;
- (void)bagLoadedNotification:(id)arg1;
- (void)beginIgnoringInteractionEvents;
- (BOOL)canResumeToMoreListController;
- (BOOL)canSelectToolbarIndex:(NSInteger)arg1;
- (void)checkInLongLivedViewController:(id)arg1;
- (void)checkOutLongLivedViewController:(id)arg1;
- (id)createWindowWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)defaultPNGName;
- (id)defaultPNGNameForMoreListController;
- (unsigned long)defaultRootControllerType;
- (void)delayedNoSupportedStoreFrontSuspend;
- (void)delayedNoSupportedStoreFrontUpdateText;
- (void)didReceiveMemoryWarning;
- (NSUInteger)downloadTypes;
- (void)endIgnoringInteractionEvents;
- (void)fixLegacyHistoryItemTypes:(id)arg1;
- (void)fullScreenTransitionDidFinishPop:(id)arg1;
- (void)handleDialogButtonAction:(id)arg1;
- (BOOL)hasSupportedStoreFront;
- (id)init;
- (void)initializeAlertController;
- (void)initializeUI;
- (BOOL)isFullscreen;
- (id)navigationControllerForType:(unsigned long)arg1 includeMoreController:(BOOL)arg2;
- (id)navigationControllerForType:(unsigned long)arg1;
- (void)networkChangedNotification:(id)arg1;
- (void)noSupportedStoreFrontAlertDidEndWithButtonTag:(NSInteger)arg1 userInfo:(id)arg2;
- (void)openURL:(id)arg1 forClient:(NSInteger)arg2;
- (void)popFullScreenViewControllerAnimated:(BOOL)arg1;
- (void)pushFullScreenViewController:(id)arg1 animated:(BOOL)arg2;
- (void)selectRootControllerType:(unsigned long)arg1;
- (unsigned long)selectedRootControllerType;
- (void)setDelaySuspend:(BOOL)arg1;
- (void)setDownloadTypes:(NSUInteger)arg1;
- (void)setHasSupportedStoreFront:(BOOL)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)shouldShowNoStoreView;
- (NSInteger)statusBarStyleForSuspend;
- (void)storeSetNetworkIsActive:(BOOL)arg1;
- (void)suspendImmediately;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)tabBarController;
- (void)tearDownUI;
- (id)topLevelViewControllers;
- (id)topNavigationController;
- (id)viewControllerForDefaultPNG;
- (id)viewControllerForType:(unsigned long)arg1;

@end
