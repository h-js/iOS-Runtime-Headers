/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class GMMTrafficTile;

@interface MKTrafficTile : MKTileView {
    struct CGColor {} **_trafficColors;
    GMMTrafficTile *_trafficTile;
}

- (BOOL)_canDrawContent;
- (BOOL)_drawsContent;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTrafficColors:(struct CGColor {}**)arg1;
- (void)setTrafficTile:(id)arg1;
- (struct CGColor {}**)trafficColors;
- (id)trafficTile;

@end
