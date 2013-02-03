/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADShade, OADRelativeRect;

@interface OADGradientFill : OADFill {
    BOOL mAreStopsOverridden;
    NSInteger mFlipMode;
    float mFocus;
    BOOL mIsFlipModeOverridden;
    BOOL mIsFocusOverridden;
    BOOL mIsRotateWithShapeOverridden;
    BOOL mIsShadeOverridden;
    BOOL mIsTileRectOverridden;
    BOOL mRotateWithShape;
    OADShade *mShade;
    NSMutableArray *mStops;
    OADRelativeRect *mTileRect;
}

+ (id)defaultProperties;

- (void)addStopColor:(id)arg1 position:(float)arg2;
- (BOOL)areStopsOverridden;
- (void)clearStops;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSInteger)flipMode;
- (float)focus;
- (id)initWithDefaults;
- (BOOL)isFlipModeOverridden;
- (BOOL)isFocusOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isShadeOverridden;
- (BOOL)isTileRectOverridden;
- (BOOL)rotateWithShape;
- (void)setFlipMode:(NSInteger)arg1;
- (void)setFocus:(float)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(BOOL)arg1;
- (void)setShade:(id)arg1;
- (void)setStops:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTileRect:(id)arg1;
- (id)shade;
- (id)stopColorAtIndex:(NSInteger)arg1;
- (NSInteger)stopCount;
- (float)stopPositionAtIndex:(NSInteger)arg1;
- (id)stops;
- (id)tileRect;

@end
