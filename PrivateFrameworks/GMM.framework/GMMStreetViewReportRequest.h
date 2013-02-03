/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface GMMStreetViewReportRequest : GMMRequest <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSMutableArray *_panoramaVisiteds;
}

@property(retain) NSMutableArray *panoramaVisiteds; /* unknown property attribute: V_panoramaVisiteds */
@property(readonly) NSInteger panoramaVisitedsCount;

- (void)_writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (void)addPanoramaVisited:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)panoramaVisitedAtIndex:(NSUInteger)arg1;
- (id)panoramaVisiteds;
- (NSInteger)panoramaVisitedsCount;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (Class)responseClass;
- (void)setPanoramaVisited:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setPanoramaVisiteds:(id)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end
