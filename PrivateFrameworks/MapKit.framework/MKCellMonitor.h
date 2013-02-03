/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;

@interface MKCellMonitor : NSObject {
    struct __CTServerConnection { } *_connection;
    BOOL _isWaitingForRefresh;
    struct __CFMachPort { } *_machPort;
    NSMutableArray *_observers;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)sharedCellMonitor;

- (void)_initConnection;
- (BOOL)_isCellReady;
- (void)_monitorFailed;
- (void)_monitorReady;
- (void)_monitorUpdate;
- (void)_startMonitor;
- (void)addObserver:(id)arg1;
- (struct __CTServerConnection { }*)connection;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
