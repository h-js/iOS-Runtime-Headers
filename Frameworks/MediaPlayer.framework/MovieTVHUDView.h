/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, MovieTVOutCounter;

@interface MovieTVHUDView : UIView {
    MovieTVOutCounter *_counter;
    NSInteger _currentState;
    UIImageView *_playbackMode;
}

- (void)_changeState;
- (void)_fadeOut;
- (void)animationDidStop:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlaybackState:(NSInteger)arg1;

@end
