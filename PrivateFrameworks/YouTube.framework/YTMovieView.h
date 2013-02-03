/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTVideo, NSArray, UIMoviePlayerController, UIImageView, NSURL, YTSearchRequest;

@interface YTMovieView : UIView {
    UIImageView *_bugView;
    BOOL _canAutoPlay;
    id _delegate;
    UIImageView *_gradientView;
    UIMoviePlayerController *_moviePlayer;
    BOOL _shownFromExternalURL;
    BOOL _switchingVideos;
    YTVideo *_video;
    YTSearchRequest *_videoInfoRequest;
    NSArray *_videoList;
    NSURL *_youTubeURL;
}

- (BOOL)_canBookmark;
- (BOOL)_canShare;
- (void)_cancelVideoInfoRequest;
- (void)_destroyMoviePlayer;
- (void)_hideBugAndOverlay:(BOOL)arg1;
- (void)_loadVideoFromURL:(BOOL)arg1;
- (void)_loadVideoInfoWithID:(id)arg1;
- (void)_presentAlertForError:(id)arg1;
- (void)_switchToVideo:(id)arg1;
- (BOOL)canContinuePlayingWhenLocked;
- (void)dealloc;
- (void)didBeginScanning:(id)arg1;
- (void)didHide;
- (void)didShow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPlaying;
- (BOOL)moviePlayer:(id)arg1 validateAction:(SEL)arg2;
- (BOOL)moviePlayerAddBookmarkButtonPressed:(id)arg1;
- (BOOL)moviePlayerBackwardButtonPressed:(id)arg1;
- (BOOL)moviePlayerEmailButtonPressed:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(NSInteger)arg2;
- (BOOL)moviePlayerForwardButtonPressed:(id)arg1;
- (NSInteger)orientation;
- (void)pause;
- (void)play;
- (void)playbackStateDidChangeNotification:(id)arg1;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (void)setCanAutoPlay:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)willHide;
- (void)willShowAlert;
- (void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3;

@end
