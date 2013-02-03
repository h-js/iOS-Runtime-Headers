/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UINavigationController, UIViewController, UIView, UITabBar, NSMutableArray, <UITabBarControllerDelegate>;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
    struct { 
        unsigned int isShown : 1; 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
    UIView *_containerView;
    NSArray *_customizableViewControllers;
    <UITabBarControllerDelegate> *_delegate;
    UINavigationController *_moreNavigationController;
    UIViewController *_selectedViewController;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UITabBar *_tabBar;
    } _tabBarControllerFlags;
    id _tabBarItemsToViewControllers;
    UIView *_viewControllerTransitionView;
    NSMutableArray *_viewControllers;
}

@property <UITabBarControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(copy) NSArray *customizableViewControllers; /* unknown property attribute: V_customizableViewControllers */
@property(readonly) UINavigationController *moreNavigationController;
@property UIViewController *selectedViewController;
@property(copy) NSArray *viewControllers;
@property NSUInteger selectedIndex;

- (BOOL)_allowsCustomizing;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (id)allViewControllers;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)beginCustomizingTabBar:(id)arg1;
- (id)customizableViewControllers;
- (void)dealloc;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)hideTabBarWithTransition:(NSInteger)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moreNavigationController;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (NSUInteger)selectedIndex;
- (id)selectedViewController;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)setSelectedTabBarItem:(id)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)showTabBarWithTransition:(NSInteger)arg1;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (id)tabBar;
- (void)tabBarItemClicked:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
