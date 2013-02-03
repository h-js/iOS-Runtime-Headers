/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADSolidFill : OADFill {
    float mAlpha;
    OADColor *mColor;
    BOOL mIsAlphaOverridden;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;

- (float)alpha;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (BOOL)isColorOverridden;
- (void)setAlpha:(float)arg1;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;

@end
