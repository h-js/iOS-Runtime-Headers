/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGPathSegList : DOMObject {
}

@property(readonly) NSUInteger numberOfItems;

+ (id)_wrapSVGPathSegList:(struct SVGPathSegList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { struct RefPtr<WebCore::SVGPathSeg> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)arg1;

- (struct SVGPathSegList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { struct RefPtr<WebCore::SVGPathSeg> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)_SVGPathSegList;
- (id)_initWithSVGPathSegList:(struct SVGPathSegList { int (**x1)(); NSInteger x2; struct Vector<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::SVGPathSeg>,0ul> { struct RefPtr<WebCore::SVGPathSeg> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)arg1;
- (id)appendItem:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)finalize;
- (id)getItem:(NSUInteger)arg1;
- (id)initialize:(id)arg1;
- (id)insertItemBefore:(id)arg1 index:(NSUInteger)arg2;
- (NSUInteger)numberOfItems;
- (id)removeItem:(NSUInteger)arg1;
- (id)replaceItem:(id)arg1 index:(NSUInteger)arg2;

@end
