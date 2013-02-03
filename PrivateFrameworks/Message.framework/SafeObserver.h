/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface SafeObserver : NSObject <SafeObserverProtocol> {
    NSUInteger _retainCount;
}

+ (void)initialize;
+ (void)lockSafeObservers;
+ (void)unlockSafeObservers;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (id)willBeReleased;

@end
