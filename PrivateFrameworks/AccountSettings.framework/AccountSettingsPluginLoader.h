/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSMutableArray, PSViewController;

@interface AccountSettingsPluginLoader : NSObject {
    BOOL _includeNonAccountBundles;
    PSViewController *_parentController;
    NSMutableArray *_plugins;
}

@property(readonly) NSArray *plugins;

- (id)_allowedBundleNames;
- (id)_conformingPluginFromBundleAtPath:(id)arg1 parentController:(id)arg2;
- (void)dealloc;
- (id)initWithParentController:(id)arg1 includeNonAccountBundles:(BOOL)arg2;
- (id)plugins;

@end
