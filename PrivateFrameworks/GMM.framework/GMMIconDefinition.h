/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;

@interface GMMIconDefinition : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    BOOL _hasId;
    long long _id;
    NSData *_image;
}

@property(retain) NSData *image; /* unknown property attribute: V_image */
@property BOOL hasId; /* unknown property attribute: V_hasId */
@property long long id; /* unknown property attribute: V_id */
@property(readonly) BOOL hasImage;

- (void)dealloc;
- (BOOL)hasId;
- (BOOL)hasImage;
- (long long)id;
- (id)image;
- (id)init;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setHasId:(BOOL)arg1;
- (void)setId:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end
