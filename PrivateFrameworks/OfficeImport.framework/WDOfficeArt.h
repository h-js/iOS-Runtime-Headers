/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    OADDrawable *mDrawable;
    WDCharacterProperties *mProperties;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFloating;
}

- (void)checkForFloating:(id)arg1;
- (void)dealloc;
- (id)drawable;
- (id)imageData;
- (id)imageName;
- (id)initWithParagraph:(id)arg1;
- (BOOL)isDrawableOverridden;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isFloating;
- (id)overrideDrawable;
- (id)properties;
- (NSInteger)runType;
- (void)setDrawable:(id)arg1;
- (void)setFloating:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setProperties:(id)arg1;

@end
