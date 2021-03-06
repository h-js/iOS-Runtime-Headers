/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int landmarksOutputIndex;

+ (id)landmarksConfigurationWithFaceDetectionEnabled:(bool)arg1;

- (unsigned int)defaultOutputIndex;
- (id)initWithFaceDetectionEnabled:(bool)arg1;
- (unsigned int)landmarksOutputIndex;

@end
