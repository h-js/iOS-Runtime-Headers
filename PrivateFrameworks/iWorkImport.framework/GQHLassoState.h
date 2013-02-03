/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQHXML;

@interface GQHLassoState : GQHState {
    struct CGPoint { 
        float x; 
        float y; 
    struct __CFString { } *mCssUri;
    NSUInteger mCurrentDrawableZOrder;
    struct __CFString { } *mCurrentSheetFilename;
    struct __CFString { } *mCurrentSheetUri;
    struct __CFDictionary { } *mDrawableUidToCssZOrderClassMap;
    } mMaxCanvasPoint;
    GQHXML *mNavigation;
    NSInteger mSheetCount;
    NSInteger mTableCount;
    NSUInteger mZOrderedDrawableCount;
}

- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)addNavigationTableId:(struct __CFString { }*)arg1 tableString:(struct __CFString { }*)arg2;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)beginNewSheet:(const char *)arg1;
- (struct __CFString { }*)createTableAnchor;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (NSUInteger)currentDrawableZOrder;
- (void)dealloc;
- (BOOL)drawablesNeedCssZOrdering;
- (NSInteger)endSheet;
- (BOOL)finishMainHtml;
- (id)initWithState:(id)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (struct CGPoint { float x1; float x2; })maxCanvasPoint;
- (void)writeIndexPageWithDocumentSize:(struct CGSize { float x1; float x2; })arg1;

@end
