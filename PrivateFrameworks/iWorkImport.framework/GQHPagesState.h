/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHPagesState : GQHState {
    struct __CFArray { } *mFloatingDrawables;
    BOOL mPageLayoutMode;
}

- (void)addFloatingDrawable:(id)arg1;
- (void)clearFloatingDrawables;
- (void)dealloc;
- (id)drawableAtIndex:(NSInteger)arg1;
- (NSInteger)floatingDrawablesCount;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isPageLayoutMode;
- (void)setIsPageLayoutMode:(BOOL)arg1;

@end
