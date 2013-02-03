/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGElementInstance : DOMObject {
}

@property(retain,readonly) DOMSVGElementInstanceList *childNodes;
@property(retain,readonly) DOMSVGElement *correspondingElement;
@property(retain,readonly) DOMSVGUseElement *correspondingUseElement;
@property(retain,readonly) DOMSVGElementInstance *firstChild;
@property(retain,readonly) DOMSVGElementInstance *lastChild;
@property(retain,readonly) DOMSVGElementInstance *nextSibling;
@property(retain,readonly) DOMSVGElementInstance *parentNode;
@property(retain,readonly) DOMSVGElementInstance *previousSibling;

+ (id)_wrapSVGElementInstance:(struct SVGElementInstance { int (**x1)(); NSInteger x2; struct SVGElementInstance {} *x3; struct SVGUseElement {} *x4; struct RefPtr<WebCore::SVGElement> { struct SVGElement {} *x_5_1_1; } x5; struct SVGElement {} *x6; struct SVGElementInstance {} *x7; struct SVGElementInstance {} *x8; struct SVGElementInstance {} *x9; struct SVGElementInstance {} *x10; }*)arg1;

- (struct SVGElementInstance { int (**x1)(); NSInteger x2; struct SVGElementInstance {} *x3; struct SVGUseElement {} *x4; struct RefPtr<WebCore::SVGElement> { struct SVGElement {} *x_5_1_1; } x5; struct SVGElement {} *x6; struct SVGElementInstance {} *x7; struct SVGElementInstance {} *x8; struct SVGElementInstance {} *x9; struct SVGElementInstance {} *x10; }*)_SVGElementInstance;
- (id)_initWithSVGElementInstance:(struct SVGElementInstance { int (**x1)(); NSInteger x2; struct SVGElementInstance {} *x3; struct SVGUseElement {} *x4; struct RefPtr<WebCore::SVGElement> { struct SVGElement {} *x_5_1_1; } x5; struct SVGElement {} *x6; struct SVGElementInstance {} *x7; struct SVGElementInstance {} *x8; struct SVGElementInstance {} *x9; struct SVGElementInstance {} *x10; }*)arg1;
- (id)childNodes;
- (id)correspondingElement;
- (id)correspondingUseElement;
- (void)dealloc;
- (void)finalize;
- (id)firstChild;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)previousSibling;

@end
