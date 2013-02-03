/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface OADFontScheme : NSObject {
    NSMutableDictionary *mMajorFont;
    NSMutableDictionary *mMinorFont;
}

+ (void)addFontEntry:(id)arg1 script:(id)arg2 typeface:(id)arg3;

- (void)dealloc;
- (id)fontForFontSchemeRef:(id)arg1;
- (id)init;
- (BOOL)isFontSchemeRef:(id)arg1;
- (id)majorFont;
- (NSUInteger)majorFontCount;
- (id)majorTypefaceForScript:(id)arg1;
- (id)minorFont;
- (NSUInteger)minorFontCount;
- (id)minorTypefaceForScript:(id)arg1;

@end
