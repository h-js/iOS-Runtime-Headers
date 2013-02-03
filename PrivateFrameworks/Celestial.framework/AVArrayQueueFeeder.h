/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
    NSMutableArray *_items;
}

- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfPaths;
- (id)pathAtIndex:(NSUInteger)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)shuffleWithCurrentIndex:(NSUInteger)arg1;

@end
