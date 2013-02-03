/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMFPlayer;

@interface WMFReader : NSObject <MFReader> {
    NSUInteger m_cursor;
    NSUInteger m_length;
    char *m_pBuffer;
    WMFPlayer *m_player;
    long m_recordsRead;
}

- (NSInteger)checkBytesAvailable:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithWMFPlayer:(id)arg1;
- (NSInteger)moveDataCursor:(NSUInteger)arg1;
- (NSInteger)play:(id)arg1;
- (NSInteger)playHeaders;
- (NSInteger)playRecord;
- (oneway void)release;

@end
