/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPTimeMarker;

@interface MPVideoChapterCell : MPPlayingIndicatorTableCell {
    unsigned int _showThumbnailColumn : 1;
    NSUInteger _index;
    MPTimeMarker *_marker;
    float _timeColumnWidth;
}

- (void)_addThumbnailIfNecessary:(id)arg1;
- (void)_removeThumbnailIfNecessary:(id)arg1;
- (void)dealloc;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFade:(float)arg2;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })indicatorPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setChapterTimeMarker:(id)arg1;
- (void)setIndex:(NSUInteger)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (void)setTimeColumnWidth:(float)arg1;

@end
