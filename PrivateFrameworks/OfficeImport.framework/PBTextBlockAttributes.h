/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSString;

@interface PBTextBlockAttributes : NSObject {
    NSMutableDictionary *_attributesIndex;
    NSString *_string;
}

- (id)_attributesForName:(id)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)attributedSubstringFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (id)attributesAtIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)string;

@end
