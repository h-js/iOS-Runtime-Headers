/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString, NSMutableArray;

@interface PlainTextDocument : NSObject {
    NSMutableArray *_fragments;
    NSMutableString *_text;
}

- (void)appendArchivedRepresentation:(id)arg1;
- (void)appendString:(id)arg1 withQuoteLevel:(NSUInteger)arg2;
- (id)archivedRepresentation;
- (void)dealloc;
- (NSUInteger)fragmentCount;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned long)arg3;
- (void)getString:(id*)arg1 quoteLevel:(NSUInteger*)arg2 ofFragmentAtIndex:(NSInteger)arg3;
- (id)string;

@end
