/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDHyperlink, EDCellValue, EDConditionalFormatting, EDRow, EDFormula, EDReference, EDResources;

@interface EDCell : NSObject <EDKeyedObject> {
     /* Encoded args for previous method: B8@0:4 */
    EDCellValue *mCellValue;
    NSInteger mColumnNumber;
    EDConditionalFormatting *mConditionalFormatting;
    EDFormula *mFormula;
    EDHyperlink *mHyperlink;
    EDReference *mMergedCells;
    EDResources *mResources;
    EDRow *mRow;
    NSUInteger mStyleIndex;
}

+ (id)cellWithResources:(id)arg1;

- (id)cellValue;
- (NSInteger)columnNumber;
- (id)conditionalFormatting;
- (void)dealloc;
- (id)formula;
- (id)hyperlink;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDefaultStyle;
- (NSInteger)key;
- (id)mergedCells;
- (id)row;
- (void)setCellValue:(id)arg1;
- (void)setColumnNumber:(NSInteger)arg1;
- (void)setConditionalFormatting:(id)arg1;
- (void)setFormula:(id)arg1;
- (void)setHyperlink:(id)arg1;
- (void)setMergedCells:(id)arg1;
- (void)setRow:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(NSUInteger)arg1;
- (id)style;
- (NSUInteger)styleIndex;

@end
