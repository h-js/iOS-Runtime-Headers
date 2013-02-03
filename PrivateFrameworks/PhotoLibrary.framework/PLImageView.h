/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MLPhoto;

@interface PLImageView : UITiledView {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    BOOL _allowZoomToFill;
    struct CGImage { } *_contentsImageRef;
    } _contentsTransform;
    id _delegate;
    } _endContentSize;
    float _endScale;
    } _fullSize;
    struct CGImage { } *_fullSizeImageRef;
    NSInteger _imageOrientation;
    } _imageTransform;
    MLPhoto *_modelImage;
    id _orientationDelegate;
    NSInteger _orientationWhenLastDisplayed;
    BOOL _setOriginDuringAnimation;
    } _startContentSize;
    float _startScale;
    struct CGImage { } *_thumbnailImageRef;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    float _zoomProgress;
    BOOL _zoomToFillInsteadOfToFit;
}

+ (Class)tileClass;

- (float)_calculateZoomScale:(BOOL)arg1;
- (BOOL)_canDrawContent;
- (struct CGImage { }*)_createLayerContentsForTileFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 contentsGravity:(id*)arg3;
- (void)_finishedLoadingImageRef:(id)arg1;
- (void)_gestureChanged:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (BOOL)_getContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1 contentsGravity:(id*)arg2 forSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_prepareForAnimatedZoomToScale:(float)arg1 duration:(double)arg2;
- (struct CGSize { float x1; float x2; })_scrollerContentSize;
- (void)_setOriginForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateLayerContents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (void)_zoomToScrollPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 event:(struct __GSEvent { }*)arg4;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)centerInScrollerIfNeeded;
- (void)dealloc;
- (float)defaultZoomScale;
- (NSInteger)defaultZoomStyle;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)ensureFullSizeImageLoaded;
- (BOOL)hasFullSizeImage;
- (NSInteger)imageOrientation;
- (struct CGImage { }*)imageRef;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isZoomedOut;
- (float)minRotatedScale;
- (float)minZoomScale;
- (id)modelImage;
- (void)movedFromSuperview:(id)arg1;
- (NSInteger)orientationWhenLastDisplayed;
- (void)setAllowsZoomToFill:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullSizeImageRef:(struct CGImage { }*)arg1 orientation:(NSInteger)arg2;
- (void)setModelImage:(id)arg1;
- (void)setOrientationDelegate:(id)arg1;
- (void)setOrientationWhenLastDisplayed:(NSInteger)arg1;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (void)setTilingEnabled:(BOOL)arg1;
- (void)setZoomScale:(float)arg1 duration:(double)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateZoomScales;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (float)zoomToFillScale;
- (void)zoomToScale:(float)arg1;

@end
