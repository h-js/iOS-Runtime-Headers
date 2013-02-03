/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNumber : NSValue <ASParsingLeafNode> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(NSInteger)arg1;
+ (id)numberWithInteger:(NSInteger)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(NSUInteger)arg1;
+ (id)numberWithUnsignedInteger:(NSUInteger)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(NSInteger*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(NSUInteger*)arg2;
+ (BOOL)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;

- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (void*)CA_copyRenderValue;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (long)_cfNumberType;
- (unsigned long)_cfTypeID;
- (unsigned char)_getValue:(void*)arg1 forType:(long)arg2;
- (NSInteger)_reverseCompare:(id)arg1;
- (BOOL)boolValue;
- (BOOL)charValue;
- (id)classForCoder;
- (NSInteger)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (NSUInteger)hash;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(NSInteger)arg6;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(NSInteger)arg1;
- (id)initWithInteger:(NSInteger)arg1;
- (id)initWithLong:(long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedInt:(NSUInteger)arg1;
- (id)initWithUnsignedInteger:(NSUInteger)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (NSInteger)intValue;
- (NSInteger)integerValue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (BOOL)isNSNumber__;
- (long long)longLongValue;
- (long)longValue;
- (NSInteger)parsingState;
- (short)shortValue;
- (id)stringValue;
- (double)timeIntervalValue;
- (unsigned char)unsignedCharValue;
- (NSUInteger)unsignedIntValue;
- (NSUInteger)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
