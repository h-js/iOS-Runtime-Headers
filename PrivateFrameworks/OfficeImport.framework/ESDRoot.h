/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface ESDRoot : ESDObject {
    NSMutableArray *mChildren;
}

- (struct EshRoot { int (**x1)(); unsigned short x2; struct ChVector<EshHeader*> { struct EshHeader {} **x_3_1_1; struct EshHeader {} **x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; } x3; }*)eshRoot;
- (void)addChild:(id)arg1;
- (id)childAt:(NSInteger)arg1;
- (NSInteger)childCount;
- (void)dealloc;
- (id)init;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (id)pbInitWithState:(id)arg1;
- (id)pbReferenceWithID:(unsigned long)arg1;
- (void)writeToWriter:(struct OcWriter { }*)arg1;

@end
