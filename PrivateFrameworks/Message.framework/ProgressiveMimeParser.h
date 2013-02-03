/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSData, MappedData, MimePart;

@interface ProgressiveMimeParser : NSObject {
    struct { 
        unsigned int delegateBeganMimePart : 1; 
        unsigned int delegateFinishedMimePart : 1; 
        unsigned int delegateBeganData : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int state : 3; 
    id _context;
    NSData *_currentBoundary;
    MimePart *_currentPart;
    NSUInteger _cursor;
    MappedData *_data;
    id _delegate;
    NSUInteger _lastLength;
    } _parserFlags;
    NSArray *_preserveHeaders;
    MimePart *_topLevelPart;
}

- (void)_continueParsing;
- (void)_continueParsingBody;
- (void)_continueParsingHeaders;
- (void)_continueParsingStartOfPart;
- (id)_currentBoundary;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_reportError:(id)arg1;
- (id)context;
- (id)currentPart;
- (id)data;
- (void)dealloc;
- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (id)mappedData;
- (void)noteDataLengthChanged:(NSUInteger)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)topLevelPart;

@end
