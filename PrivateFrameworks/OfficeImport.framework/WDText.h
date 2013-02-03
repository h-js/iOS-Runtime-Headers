/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument, WDTableCell;

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    WDTableCell *mTableCell;
    NSInteger mTextType;
}

- (void)addBlock:(id)arg1;
- (id)addParagraph;
- (id)addParagraphAtIndex:(NSInteger)arg1;
- (id)addTable;
- (id)addTableAtIndex:(NSInteger)arg1;
- (id)blockAt:(NSInteger)arg1;
- (NSInteger)blockCount;
- (id)blockIterator;
- (id)blocks;
- (id)content;
- (void)dealloc;
- (id)document;
- (NSInteger)indexOfBlock:(id)arg1;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (BOOL)isEmpty;
- (id)lastBlock;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)tableCell;
- (NSInteger)tableNestingLevel;
- (NSInteger)textType;

@end
