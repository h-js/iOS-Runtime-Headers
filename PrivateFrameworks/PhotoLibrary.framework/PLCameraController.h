/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, CALayer;

@interface PLCameraController : NSObject {
    struct CameraDevice { } *_camera;
    struct CameraImageQueueHelper { } *_cameraHelper;
    CALayer *_cameraLayer;
    id _delegate;
    BOOL _isLocked;
    BOOL _isPreviewing;
    UIView *_previewView;
    BOOL _wasPreviewingBeforeDeviceLock;
}

+ (id)sharedInstance;

- (void)_applicationResumed;
- (void)_applicationSuspended;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cameraFrame;
- (struct CameraImageQueueHelper { }*)_cameraHelper;
- (void)_setIsReady;
- (BOOL)_setupCamera;
- (void)_tearDownCamera;
- (void)_tookPicture:(struct CGImage { }*)arg1 jpegData:(struct __CFData { }*)arg2 imageProperties:(struct __CFDictionary { }*)arg3;
- (void)_tookPicture:(struct __CoreSurfaceBuffer { }*)arg1;
- (void)capturePhoto;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isReady;
- (id)previewView;
- (void)setDelegate:(id)arg1;
- (void)startPreview;
- (void)stopPreview;

@end
