/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, ShiftMatcher, NSString, NSData, WordInfo;

@interface KBWordSearch : NSObject {
    struct { 
        NSInteger count; 
        NSInteger ids[10]; 
    NSMutableArray *_abPhoneticNamePairs;
    void *_candTrie;
    NSMutableArray *_candidates;
    NSInteger *_connectionLink;
    ShiftMatcher *_css[100];
    NSString *_currentInputMode;
    NSString *_deletedPat;
    NSString *_deletedString;
    struct _DictEntry { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; NSInteger x5; NSInteger x6; } *_dict;
    NSInteger _dictBottomIndex;
    NSData *_dictData;
    void *_dictDataBytes;
    NSInteger *_dictLink;
    NSInteger _dictTopIndex;
    NSMutableArray *_emptyCandidates;
    NSInteger *_exactMatchArray;
    NSInteger _exactMatchCapacity;
    NSInteger _exactMatchCount;
    struct { NSInteger x1; NSInteger x2[10]; } *_expandExactArray;
    NSInteger _expandExactCapacity;
    NSInteger _expandExactCount;
    NSInteger _expandMatchStack[10];
    } _expandPrefixArray[5];
    NSInteger _expandPrefixCount;
    BOOL _insertInputStringInCandidate;
    BOOL _isAddingExactMatch;
    BOOL _isRegisteringABEntries;
    BOOL _kanaMode;
    NSInteger _lastConnection[10];
    NSInteger _lastConnections;
    WordInfo *_learnDict[200];
    BOOL _learningDictSaved;
    NSInteger _linkInd;
    NSInteger _maxCands;
    NSInteger _ncands;
    NSInteger _numberOfConnectionCands[10];
    NSInteger _prefixMatchArray[10];
    NSInteger _prefixMatchCount;
    NSInteger _searchMode;
    char *_wordlist;
    BOOL _youTubeMode;
}

- (void)_getCandidatesOnThread:(id)arg1;
- (void)_loadLearningDictionary;
- (id)a_matcher:(char *)arg1 withAmbiguity:(NSInteger)arg2;
- (NSInteger)addCandidate:(char *)arg1 yomi:(char *)arg2 inConnection:(NSInteger)arg3 outConnection:(NSInteger)arg4 nCands:(NSInteger)arg5 weight:(NSInteger)arg6 type:(NSInteger)arg7;
- (void)addNeededCandidates;
- (id)c_matcher:(char *)arg1 withAmbiguity:(NSInteger)arg2;
- (void)cancel;
- (BOOL)checkGSEventQueueContainsMouseEvent;
- (void)clearLearningDictionary;
- (void)dealloc;
- (id)deletedPat;
- (id)deletedString;
- (NSInteger)dictHash:(char *)arg1;
- (BOOL)generateCand0:(NSInteger)arg1 matchedLen:(NSInteger)arg2 level:(NSInteger)arg3;
- (BOOL)generateCand1:(NSInteger)arg1 connection:(NSInteger)arg2 matchedStringLen:(NSInteger)arg3 matchedLen:(NSInteger)arg4 level:(NSInteger)arg5 patLen:(NSInteger)arg6;
- (id)getCandidates0:(id)arg1 fixPat:(id)arg2;
- (id)getCandidates1:(id)arg1 fixPat:(id)arg2;
- (id)getCandidates:(id)arg1 fixPat:(id)arg2;
- (id)getCandidates:(id)arg1;
- (void)getCandidatesAsyncForString:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initKBWordSearch:(BOOL)arg1 dictPath:(id)arg2;
- (BOOL)isCancelled;
- (id)lastWord;
- (id)learndicFileName;
- (BOOL)noDupWithArray:(NSInteger*)arg1 arrayCount:(NSInteger)arg2 index:(NSInteger)arg3;
- (void)reallocExactMatchArray;
- (void)reallocExpandExactArray;
- (void)regist:(id)arg1 withYomi:(id)arg2 inConnection:(NSInteger)arg3 outConnection:(NSInteger*)arg4 outConnections:(NSInteger)arg5;
- (void)registABEntriesWithWord:(id)arg1 andYomi:(id)arg2;
- (void)registerNamesFromAddressBook;
- (void)saveLearningDictionary;
- (void)setDeletedPat:(id)arg1;
- (void)setDeletedString:(id)arg1;
- (void)setInsertInputStringInCandidate:(BOOL)arg1;
- (void)setMaxCands:(NSInteger)arg1;
- (void)setSearchMode:(NSInteger)arg1;
- (void)setYouTubeMode:(BOOL)arg1;
- (id)wildcardString;
- (const char *)yomiInEngineRepresentation:(id)arg1;

@end
