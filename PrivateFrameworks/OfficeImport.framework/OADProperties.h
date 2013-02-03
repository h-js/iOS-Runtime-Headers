/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADProperties;

@interface OADProperties : NSObject {
    BOOL mIsMerged;
    BOOL mIsMergedWithParent;
    OADProperties *mParent;
}

+ (id)defaultProperties;

- (void)dealloc;
- (void)flatten;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isMerged;
- (BOOL)isMergedPropertyForSelector:(SEL)arg1;
- (BOOL)isMergedWithParent;
- (id)overrideForSelector:(SEL)arg1;
- (id)parent;
- (void)setMerged:(BOOL)arg1;
- (void)setMergedWithParent:(BOOL)arg1;
- (void)setParent:(id)arg1 myRestrictedClass:(Class)arg2;
- (void)setParent:(id)arg1;

@end
