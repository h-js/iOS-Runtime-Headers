/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)broadcast;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (void)signal;
- (void)unlock;
- (void)wait;
- (BOOL)waitUntilDate:(id)arg1;

@end
