/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, NSMutableArray;

@interface WebHistoryPrivate : NSObject {
    struct HashMap<WebHistoryDateKey,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > { struct HashTable<long long int,std::pair<long long int, WTF::RetainPtr<NSMutableArray> >,WTF::PairFirstExtractor<std::pair<long long int, WTF::RetainPtr<NSMutableArray> > >,WTF::IntHash<long long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long long int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >,WTF::HashTraits<long long int> > { 
            struct pair<long long int,WTF::RetainPtr<NSMutableArray> > {} *m_table; 
            NSInteger m_tableSize; 
            NSInteger m_tableSizeMask; 
            NSInteger m_keyCount; 
            NSInteger m_deletedCount; 
        } x1; } *_entriesByDate;
    NSMutableDictionary *_entriesByURL;
    NSMutableArray *_orderedLastVisitedDays;
    NSInteger ageInDaysLimit;
    BOOL ageInDaysLimitSet;
    NSInteger itemLimit;
    BOOL itemLimitSet;
}

+ (void)initialize;

- (void)_addItemToDateCaches:(id)arg1;
- (id)_ageLimitDate;
- (BOOL)_loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(NSInteger*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4;
- (BOOL)_removeItemFromDateCaches:(id)arg1;
- (BOOL)_saveHistoryGuts:(NSInteger*)arg1 URL:(id)arg2 error:(id*)arg3;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)arrayRepresentation;
- (BOOL)containsItemForURLString:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (BOOL)findKey:(long long*)arg1 forDay:(double)arg2;
- (NSInteger)historyAgeInDaysLimit;
- (NSInteger)historyItemLimit;
- (id)init;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (BOOL)removeAllItems;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeItemForURLString:(id)arg1;
- (BOOL)removeItems:(id)arg1;
- (BOOL)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryAgeInDaysLimit:(NSInteger)arg1;
- (void)setHistoryItemLimit:(NSInteger)arg1;
- (void)setLastVisitedTimeInterval:(double)arg1 forItem:(id)arg2;

@end
