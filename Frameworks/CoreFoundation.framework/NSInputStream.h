/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInputStream : NSStream {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;

- (struct { NSInteger x1; NSInteger x2; })_cfStreamError;
- (unsigned long)_cfTypeID;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (BOOL)hasBytesAvailable;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;

@end
