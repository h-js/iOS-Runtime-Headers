/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString, EDResources;

@interface EDConditionalFormattingRule : NSObject {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    NSUInteger mDifferentialStyleIndex;
    NSMutableArray *mFormulas;
    NSInteger mOperator;
    NSInteger mPriority;
    NSUInteger mRank;
    EDResources *mResources;
    NSInteger mStdDev;
    NSString *mText;
    NSInteger mTimePeriod;
    NSInteger mType;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAboveAverage;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBottom;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mEqualAverage;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mPercent;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mStopIfTrue;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)aboveAverage;
- (void)addFormula:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)bottom;
- (NSInteger)compareToOtherRuleUsingPriority:(id)arg1;
- (void)dealloc;
- (id)differentialStyle;
- (NSUInteger)differentialStyleIndex;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)equalAverage;
- (id)formulaAtIndex:(NSUInteger)arg1;
- (NSUInteger)formulaCount;
- (id)initWithResources:(id)arg1;
- (NSInteger)operatorEnum;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)percent;
- (NSInteger)priority;
- (NSUInteger)rank;
- (void)setAboveAverage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setBottom:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleIndex:(NSUInteger)arg1;
- (void)setEqualAverage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setOperatorEnum:(NSInteger)arg1;
- (void)setPercent:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setPriority:(NSInteger)arg1;
- (void)setRank:(NSUInteger)arg1;
- (void)setStdDev:(NSInteger)arg1;
- (void)setStopIfTrue:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setText:(id)arg1;
- (void)setTimePeriod:(NSInteger)arg1;
- (void)setType:(NSInteger)arg1;
- (NSInteger)stdDev;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)stopIfTrue;
- (id)text;
- (NSInteger)timePeriod;
- (NSInteger)type;

@end
