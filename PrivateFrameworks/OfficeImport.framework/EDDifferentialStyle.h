/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, EDAlignmentInfo, EDFont, EDProtection, EDContentFormat, EDFill;

@interface EDDifferentialStyle : NSObject <NSCopying> {
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDContentFormat *mContentFormat;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
}

+ (id)differentialStyle;

- (id)alignmentInfo;
- (id)borders;
- (id)contentFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fill;
- (id)font;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setBorders:(id)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setProtection:(id)arg1;

@end
