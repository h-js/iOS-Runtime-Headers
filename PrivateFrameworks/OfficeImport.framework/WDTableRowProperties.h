/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDTableProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
    struct { 
        short widthBefore; 
        BOOL widthBeforeOverridden; 
        NSInteger widthBeforeType; 
        BOOL widthBeforeTypeOverridden; 
        short widthAfter; 
        BOOL widthAfterOverridden; 
        NSInteger widthAfterType; 
        BOOL widthAfterTypeOverridden; 
        NSInteger height; 
        BOOL heightOverridden; 
        NSInteger heightType; 
        BOOL heightTypeOverridden; 
        BOOL header; 
        BOOL headerOverridden; 
    struct { 
        short widthBefore; 
        BOOL widthBeforeOverridden; 
        NSInteger widthBeforeType; 
        BOOL widthBeforeTypeOverridden; 
        short widthAfter; 
        BOOL widthAfterOverridden; 
        NSInteger widthAfterType; 
        BOOL widthAfterTypeOverridden; 
        NSInteger height; 
        BOOL heightOverridden; 
        NSInteger heightType; 
        BOOL heightTypeOverridden; 
        BOOL header; 
        BOOL headerOverridden; 
    WDCharacterProperties *mCharacterProperties;
    BOOL mOriginal;
    } mOriginalProperties;
    BOOL mResolved;
    WDTableProperties *mTableProperties;
    BOOL mTracked;
    } mTrackedProperties;
}

- (void)addProperties:(id)arg1;
- (void)addPropertiesValues:(struct { short x1; BOOL x2; NSInteger x3; BOOL x4; short x5; BOOL x6; NSInteger x7; BOOL x8; NSInteger x9; BOOL x10; NSInteger x11; BOOL x12; BOOL x13; BOOL x14; }*)arg1 to:(struct { short x1; BOOL x2; NSInteger x3; BOOL x4; short x5; BOOL x6; NSInteger x7; BOOL x8; NSInteger x9; BOOL x10; NSInteger x11; BOOL x12; BOOL x13; BOOL x14; }*)arg2;
- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)header;
- (long)height;
- (NSInteger)heightType;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (BOOL)isHeaderOverridden;
- (BOOL)isHeightOverridden;
- (BOOL)isHeightTypeOverridden;
- (BOOL)isWidthAfterOverridden;
- (BOOL)isWidthAfterTypeOverridden;
- (BOOL)isWidthBeforeOverridden;
- (BOOL)isWidthBeforeTypeOverridden;
- (NSInteger)resolveMode;
- (void)setHeader:(BOOL)arg1;
- (void)setHeight:(long)arg1;
- (void)setHeightType:(NSInteger)arg1;
- (void)setResolveMode:(NSInteger)arg1;
- (void)setWidthAfter:(short)arg1;
- (void)setWidthAfterType:(NSInteger)arg1;
- (void)setWidthBefore:(short)arg1;
- (void)setWidthBeforeType:(NSInteger)arg1;
- (id)tableProperties;
- (short)widthAfter;
- (NSInteger)widthAfterType;
- (short)widthBefore;
- (NSInteger)widthBeforeType;

@end
