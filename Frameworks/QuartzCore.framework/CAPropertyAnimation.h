/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPropertyAnimation : CAAnimation {
}

@property(copy) NSString *keyPath;
@property(getter=isAdditive) BOOL additive;
@property(getter=isCumulative) BOOL cumulative;

+ (id)animationWithKeyPath:(id)arg1;

- (struct _CARenderAnimation { struct { NSInteger x_1_1_1; } x1; float x2; struct _CARenderTiming {} *x3; struct _CARenderVector {} *x4; void *x5; NSUInteger x6; union { struct _CARenderArray {} *x_7_1_1; void *x_7_1_2; struct { void *x_3_2_1; void *x_3_2_2; void *x_3_2_3; void *x_3_2_4; float x_3_2_5; float x_3_2_6; } x_7_1_3; struct { void *x_4_2_1; struct _CARenderArray {} *x_4_2_2; struct _CARenderVector {} *x_4_2_3; struct _CARenderPath {} *x_4_2_4; unsigned char x_4_2_5; } x_7_1_4; struct { NSUInteger x_5_2_1; NSUInteger x_5_2_2; float x_5_2_3; float x_5_2_4; struct _CARenderFilter {} *x_5_2_5; void *x_5_2_6; NSUInteger x_5_2_7; NSUInteger x_5_2_8; } x_7_1_5; } x7; }*)_setCARenderAnimation:(struct _CARenderAnimation { struct { NSInteger x_1_1_1; } x1; float x2; struct _CARenderTiming {} *x3; struct _CARenderVector {} *x4; void *x5; NSUInteger x6; union { struct _CARenderArray {} *x_7_1_1; void *x_7_1_2; struct { void *x_3_2_1; void *x_3_2_2; void *x_3_2_3; void *x_3_2_4; float x_3_2_5; float x_3_2_6; } x_7_1_3; struct { void *x_4_2_1; struct _CARenderArray {} *x_4_2_2; struct _CARenderVector {} *x_4_2_3; struct _CARenderPath {} *x_4_2_4; unsigned char x_4_2_5; } x_7_1_4; struct { NSUInteger x_5_2_1; NSUInteger x_5_2_2; float x_5_2_3; float x_5_2_4; struct _CARenderFilter {} *x_5_2_5; void *x_5_2_6; NSUInteger x_5_2_7; NSUInteger x_5_2_8; } x_7_1_5; } x7; }*)arg1;
- (BOOL)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)cumulative;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;

@end
