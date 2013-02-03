/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableData, NSString, NSURLConnection, UIImage, NSURL;

@interface UIWebClip : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    id delegate;
    BOOL fullScreen;
    UIImage *iconImage;
    NSURL *iconURL;
    NSString *identifier;
    NSURL *pageURL;
    NSURL *precomposedIconURL;
    float scale;
    } scrollPoint;
    NSInteger statusBarStyle;
    NSString *title;
}

@property id delegate; /* unknown property attribute: Vdelegate */
@property(retain) UIImage *iconImage; /* unknown property attribute: ViconImage */
@property NSInteger statusBarStyle; /* unknown property attribute: VstatusBarStyle */
@property BOOL fullScreen; /* unknown property attribute: VfullScreen */
@property CGPoint scrollPoint; /* unknown property attribute: VscrollPoint */
@property float scale; /* unknown property attribute: Vscale */
@property(copy) NSString *title; /* unknown property attribute: Vtitle */
@property(retain) NSURL *iconURL; /* unknown property attribute: ViconURL */
@property(retain) NSURL *precomposedIconURL; /* unknown property attribute: VprecomposedIconURL */
@property(retain) NSURL *pageURL; /* unknown property attribute: VpageURL */
@property(copy) NSString *identifier; /* unknown property attribute: Videntifier */

+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (NSInteger)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)webClipsDirectoryPath;

- (id)_displayIdentifierString;
- (id)_info;
- (id)_initWithIdentifier:(id)arg1;
- (void)_readPropertiesFromBundle:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)createOnDisk;
- (void)dealloc;
- (id)delegate;
- (BOOL)fullScreen;
- (id)iconImage;
- (id)iconURL;
- (id)identifier;
- (id)pageURL;
- (id)precomposedIconURL;
- (BOOL)removeFromDisk;
- (void)requestCustomIconUpdateWithDelegate:(id)arg1;
- (float)scale;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPrecomposedIconURL:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (NSInteger)statusBarStyle;
- (void)stopLoadingCustomIcon;
- (id)title;
- (void)updateCustomIconLocationsFromWebDocumentView:(id)arg1;
- (BOOL)updateOnDisk;

@end
