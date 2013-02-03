/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKPanoramaLoader, NSMutableArray, MKPanorama, GMMRequester, NSTimer, NSMutableSet;

@interface MKPanoramaLoader : NSObject {
    MKPanoramaLoader *_childLoader;
    NSMutableArray *_childPanoramaIDs;
    id _delegate;
    BOOL _isPrefetching;
    BOOL _needsCancel;
    BOOL _needsMetadata;
    NSTimer *_nextTimer;
    MKPanorama *_panorama;
    NSMutableSet *_pendingResponseTiles;
    NSMutableArray *_requestTiles;
    GMMRequester *_requester;
    BOOL _tilesNeedSort;
}

@property(retain) NSTimer *nextTimer; /* unknown property attribute: V_nextTimer */
@property BOOL isPrefetching; /* unknown property attribute: V_isPrefetching */
@property BOOL tilesNeedSort; /* unknown property attribute: V_tilesNeedSort */
@property(retain) NSMutableArray *childPanoramaIDs; /* unknown property attribute: V_childPanoramaIDs */
@property(retain) MKPanoramaLoader *childLoader; /* unknown property attribute: V_childLoader */
@property(retain) GMMRequester *requester; /* unknown property attribute: V_requester */
@property id delegate; /* unknown property attribute: V_delegate */
@property(retain) NSMutableSet *pendingResponseTiles; /* unknown property attribute: V_pendingResponseTiles */
@property(retain) NSMutableArray *requestTiles; /* unknown property attribute: V_requestTiles */
@property(retain) MKPanorama *panorama; /* unknown property attribute: V_panorama */
@property BOOL needsCancel; /* unknown property attribute: V_needsCancel */
@property(readonly) BOOL isDone;
@property(readonly) BOOL isDoneLoadingPanoramas;
@property(readonly) BOOL isDonePendingTiles;
@property(readonly) BOOL isDoneRequestingTiles;

+ (id)createRequestWithCoordinate:(struct { double x1; double x2; })arg1;
+ (id)createRequestWithId:(id)arg1 metadata:(BOOL)arg2 zoomLevel:(id)arg3 tilePaths:(id)arg4;
+ (id)createRequestWithId:(id)arg1;
+ (void)handleTileRequest:(id)arg1 response:(id)arg2 panorama:(id)arg3 loader:(id)arg4 delegate:(id)arg5;
+ (void)handleTileRequest:(id)arg1 response:(id)arg2 panorama:(id)arg3;

- (void)_filterRequestTiles;
- (void)_loadMapIcon;
- (void)_loadMetadata;
- (void)_loadNextTiles;
- (void)_requestNextPanorama;
- (void)_scheduleLoadPanorama:(id)arg1 timeInterval:(double)arg2;
- (void)_scheduleNextPanorama;
- (void)_scheduleNextTiles;
- (void)_sortRequestTiles;
- (void)_updateChildPanoramas;
- (void)_updateRequestTiles;
- (void)cancelLoad;
- (id)childLoader;
- (id)childPanoramaIDs;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)isDone;
- (BOOL)isDoneLoadingPanoramas;
- (BOOL)isDonePendingTiles;
- (BOOL)isDoneRequestingTiles;
- (BOOL)isPrefetching;
- (void)loadPanorama:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didLoadPanoramaMetadata:(id)arg2;
- (void)loader:(id)arg1 didLoadTilePath:(id)arg2;
- (void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(struct CGImage { }*)arg2 coordinate:(struct { double x1; double x2; })arg3 context:(id)arg4;
- (BOOL)needsCancel;
- (id)nextTilePaths;
- (id)nextTimer;
- (id)panorama;
- (id)pendingResponseTiles;
- (id)requestTiles;
- (void)requester:(id)arg1 didCompleteRequest:(id)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)setChildLoader:(id)arg1;
- (void)setChildPanoramaIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPrefetching:(BOOL)arg1;
- (void)setNeedsCancel:(BOOL)arg1;
- (void)setNeedsCancel;
- (void)setNextTimer:(id)arg1;
- (void)setPanorama:(id)arg1;
- (void)setPendingResponseTiles:(id)arg1;
- (void)setRequestTiles:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)setTilesNeedSort:(BOOL)arg1;
- (BOOL)tilesNeedSort;

@end
