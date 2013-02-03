/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISImageCacheCustomOperation : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _scaleToFit : 1;
    struct CGContext { } *_context;
    } _contextRect;
    } _customImageSize;
    } _imageRect;
}

@property CGRect imageRect; /* unknown property attribute: V_imageRect */
@property CGSize customImageSize; /* unknown property attribute: V_customImageSize */
@property CGRect contextRect; /* unknown property attribute: V_contextRect */
@property CGContext *context; /* unknown property attribute: V_context */
@property BOOL scaleToFit;

- (struct CGContext { }*)context;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contextRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })customImageRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })customImageSize;
- (void)drawBackground;
- (void)drawForeground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)init;
- (BOOL)scaleToFit;
- (void)setContext:(struct CGContext { }*)arg1;
- (void)setContextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCustomImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScaleToFit:(BOOL)arg1;

@end
