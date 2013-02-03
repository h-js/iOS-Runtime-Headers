/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView;

@interface MPReflectionImageView : UIView {
    UIImageView *_imageView;
    UIImageView *_reflection;
}

- (id)albumArtImage;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setAlbumAlpha:(float)arg1 reflectionAlpha:(float)arg2;
- (void)setAlbumArtImage:(id)arg1 maxSize:(float)arg2;
- (void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2;

@end
